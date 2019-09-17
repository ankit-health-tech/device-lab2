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

[Image of the LCD showing result]<br><img src="https://i.imgur.com/IoS8F4P.jpg" height="50%" width="50%"><br>
[View Code Used](https://github.com/ankit-health-tech/device-lab2/blob/master/analoginput.ino)

#### C. Rotary Encoder Setup

[Video of Implementation](https://i.imgur.com/XfysQLR.mp4)

### D. Make your arduino sing

#### Part D.(a) How would you change the code to make the song play twice as fast?

By Changing this line of code from : 
<br>
int noteDuration = 1000 / noteDurations[thisNote]
<br> to
<br>
int noteDuration = 500 / noteDurations[thisNote]<br>
essential halving the note duration

#### Part D.(b) What song is playing?

Its from the Star Wars OST, possibly the main theme song!

### E. Make your own timer

My timer is a countdown for Tom to setup a funbomb. Tom initially sets the countdown time enough for him to reach a safe distance. Then he waits for jerry and the countdown to go BOOM!

[View Code](https://github.com/ankit-health-tech/device-lab2/blob/master/bomb_timer.ino)
[View Video](https://i.imgur.com/u5TYR9n.mp4)
[Circuit Design]<br><img src="https://i.imgur.com/9b0CRGX.jpg" height="50%" width="50%">

