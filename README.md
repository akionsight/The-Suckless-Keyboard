# The-Suckless-Keyboard
A keyboard that works on, you guessed it, morse code

## Usage (Software)

1. Install requirements from `requirements.txt`

2. Upload main.ino to an arduino UNO, install the `ezButton` library too

3. Run `main.py` and it will probably work

# Usage (Hardware)

1. Currently I'm a little too bored to make a circuit diagram in something more clearer but connect four buttons with one pin to to ground and one to any of the digital pins, the method will utilise the internal pullup resistors 

2. then define the pins in software, on the top of the `main.ino` file

3. Should look something like this, this utilises a common ground btw

![image](https://user-images.githubusercontent.com/62844691/169104341-1c4faff1-2e9f-4249-97c6-dbc92d6570c0.png)




