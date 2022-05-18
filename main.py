import serial
import os
from morse3 import Morse as morse_decrypter

moniter = serial.Serial('/dev/ttyACM0', 9600)
buffer = ""


def bufferWrite():

    text = morse_decrypter(buffer).morseToString()

    os.system(f'xdotool type {text} \ ')

    print(text)

    



while True:
    try:
        raw_data = moniter.readline().decode('UTF-8')

    except:
        continue

    data = raw_data.strip()


    if data == '0':
        buffer += '.'
    
    if data == '1':
        buffer += '-'
    
    if data == '2':
        buffer += ' '

    if data == '3':
        bufferWrite()
        buffer = ""
