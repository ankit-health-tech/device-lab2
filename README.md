# device-lab2

### Part B. Setting up & Writing to the LCD

The LCD was soldered and connected as shown in the picture below
[Image of the LCD+breadboard]<br><img src="https://i.imgur.com/51OUXUc.jpg" height="50%" width="50%">

#### B.(a) What voltage level do you need to power your display?

For powering the display logic (Pin No. VDD) we are using 5V

#### B.(b) What voltage level do you need to power the display backlight?

For the backlight we are using (as per Pin 15) 3.3V

#### B.(c) What was one mistake you made when wiring up the display? How did you fix it?

Everything was connected and the display was not displaying anything. I checked again it was a contrast issue with the potentiometer. 

#### B.(d) What line of code do you need to change to make it flash your name instead of "Hello World"?

the line lcd.print controls the text being displayed. I changed it from : <br>lcd.print("Hellow World!"); <br>to<br> lcd.print("Its Ankit!");

#### B.(e) Include a copy of your Lowly Multimeter code in your lab write-up.

[Image of the LCD showing result]<br><img src="https://i.imgur.com/IoS8F4P.jpg" height="50%" width="50%">
[View Code Used](https://github.com/ankit-health-tech/device-lab2/blob/master/analoginput.ino)

### Part C. 
