# Happy Birthday
Happy birthday Sam.

This is the source code for the TFT screen.

# Instructions
To get going:

 * Download the [Arduino IDE](https://www.arduino.cc/en/software)
 * Download the [Adafruit ST99XX Library Release](https://github.com/adafruit/Adafruit-ST7735-Library/releases/tag/1.10.1)
 * Install/Run the Arduino IDE
 * Unzip the Adafruit library to ~/Library/Arduino/libraries (maybe ~/Arduino/libraries)

# Configuring Arduino IDE
After opening the Arduino IDE, you'll need to install the ESP32 boards.

The Adafruit GFX library needs to be installed. 

Go to Tools -> Libraries...:

![image](https://github.com/ChrisAJS/HappyBirthdayTftEsp/assets/4558817/4eee7dff-7686-4e79-8611-0d8c338d3021)

Install the Adafruit GFX Library.

Go to Tools → Boards → Boards Manager.

In the tab that opens, search for "ESP" and install the "ESP32 Arduino" board set:
![image](https://github.com/ChrisAJS/HappyBirthdayTftEsp/assets/4558817/f3fafae9-83d9-4f02-904a-445d43fcb6bd)

Plug in the Firebeetle ESP32 and in the board drop down, select the FireBeetle-ESP32:
![image](https://github.com/ChrisAJS/HappyBirthdayTftEsp/assets/4558817/a3c96544-41cf-4309-9419-a3de0ac855b7)

# Building
Open the happybirthday.ino file in the Arduino IDE.

Click on the tick top left.

If everything is configured successfully the project will build successfully, yay!

# Code explanation

