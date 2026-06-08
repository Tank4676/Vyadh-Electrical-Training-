# Vyadh-Electrical-Training-
## Repository to track and document all the learning progress of the Vyadh batch of 2026 

TASK 1

How it works –
Setup::
1.	Taken positive and negative rails from Arduino  5v and GND 
2.	Connected potentiometer to Analog Input (as reading on potentiometer will impact the brightness of the LED)
3.	The output is sent via PWM waves to the LED 
4.	The longer leg (anode) or shorter leg (cathode) of the LED is connected in series with a resistor. This resistor is crucial because LEDs have very little internal resistance; without it, the LED would draw too much current from the Arduino pin, instantly destroying the LED and potentially damaging the Arduino's digital pin.

Logic::

5.	The potentiometer acts as a variable voltage divider. As you turn the knob, it varies the voltage delivered to the Analog Input pin (A0) between 0V and 5V. The Arduino's internal 10-bit Analog-to-Digital Converter (ADC) maps this variable hardware voltage into a digital number ranging from 0 to 1023 in the code. 

6.	Because the analog input reads a value from 0 to 1023, but the digital PWM output pins (like Pin 9) only accept an 8-bit value from 0 to 255, the code scales or maps the input value down. The Arduino then adjusts the duty cycle of the PWM wave sent to the LED. A higher duty cycle keeps the 5V pulse on longer, making the LED appear brighter to the human eye, while a lower duty cycle makes it dimmer.
<img width="940" height="591" alt="image" src="https://github.com/user-attachments/assets/2bf80d49-ca42-4b50-b665-2d46da5d154e" />
<img width="940" height="576" alt="image" src="https://github.com/user-attachments/assets/5a89594d-6070-4763-a864-9d51c3f7308f" />


Code snippet


<img width="801" height="492" alt="image" src="https://github.com/user-attachments/assets/b2b4e57b-a335-4f1c-8981-fb974db50533" />
