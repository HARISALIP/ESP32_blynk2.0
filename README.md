# ESP32_blynk2.0 | Creating an ESP32 Automation System with Blynk
This is the workflow of esp32 and blynk2.0 used to controll 4 channel relay module 
Creating an ESP32 Automation System with Blynk

Introduction:
In this tutorial, we will explore how to build a room automation system using ESP32 and Blynk. The ESP32 is a powerful microcontroller board that offers Wi-Fi connectivity, making it an ideal choice for IoT projects. Blynk, on the other hand, is a popular IoT platform that allows you to control your devices remotely and build interactive applications. By combining these two technologies, we can create a home automation system that can control various devices in your room remotely.


## Code
TODO
#includestd.io

---
Prerequisites:
To follow this tutorial, you will need the following:

ESP32 development board
LEDs and resistors (for demonstration purposes)
Breadboard and jumper wires
Arduino IDE
Blynk mobile app (available for iOS and Android)
Step 1: Setting up the Hardware
Start by connecting the LEDs to the ESP32 board. Connect the positive terminal (long leg) of each LED to the digital pins 25, 26, 27, and 33 on the ESP32 board, respectively. Connect the negative terminal (short leg) of each LED to the ground (GND) pin on the board. Use appropriate resistors to limit the current flow through the LEDs.

Step 2: Installing Required Libraries
To program the ESP32 and communicate with the Blynk platform, we need to install some libraries. Open the Arduino IDE, go to "Sketch" > "Include Library" > "Manage Libraries." Search for "Blynk" and install the "Blynk" library by Volodymyr Shymanskyy. Additionally, ensure that you have the "WiFi" library installed.

Step 3: Setting up Blynk
Download and install the Blynk mobile app from the App Store or Google Play Store. Create a new account or log in if you already have one. Once logged in, create a new project and select the ESP32 board as the hardware model. You will receive an authentication token via email. Replace the placeholder BLYNK_AUTH_TOKEN in the code with your authentication token.

Step 4: Uploading the Code
Copy the provided code into the Arduino IDE. Make sure you have selected the correct board and port under the "Tools" menu. Click the "Upload" button to upload the code to the ESP32 board. Open the serial monitor to see the debug output.

Step 5: Controlling the LEDs
Launch the Blynk mobile app and open the project you created earlier. You will see four buttons labeled V0, V1, V2, and V3, corresponding to the four LEDs connected to the ESP32. Tapping a button will toggle the respective LED on or off. You can also monitor the state of the LEDs in the serial monitor.

Conclusion:
In this tutorial, we have successfully built an ESP32 automation system using Blynk. By controlling the LEDs through the Blynk mobile app, we have demonstrated how to remotely control devices connected to the ESP32. You can expand this project by adding more sensors and actuators to create a comprehensive home automation system.

Remember to be cautious when working with mains voltage or high-power devices. Always follow proper safety precautions and consult relevant documentation or professionals when dealing with potentially dangerous electrical systems.

Feel free to customize and enhance this project according to your specific needs. Happy tinkering!

(Note: This content is a general guideline. Make sure to adapt it to your writing style and any additional details specific to your project.)

# Discord bot to automatically add a `/spoiler` tag to any code snippet

## Goal
See [this StackOverflow post](https://stackoverflow.com/questions/64645674/how-to-automatically-mark-as-spoiler-a-snippet-of-code-in-discord?noredirect=1#comment114303076_64645674) I wrote on November 2nd 2020.

## Answer
> « When a code snippet is detected, automatically delete the user's post and repost it from the bot with spoiler enabled. Apply basic information such as who originally posted the message. » [Tin Nguyen's answer](https://stackoverflow.com/questions/64645674/how-to-automatically-mark-as-spoiler-a-snippet-of-code-in-discord?noredirect=1#comment114303076_64645674)

## Code
TODO

---

## :scroll: License ? [![GitHub license](https://img.shields.io/github/license/Naereen/notebooks.svg)](https://github.com/Naereen/notebooks/blob/master/LICENSE)
This repository are published under the terms of the [MIT License](https://lbesson.mit-license.org/) (file [LICENSE.txt](LICENSE.txt)).
© [Lilian Besson](https://GitHub.com/Naereen), 2020.

[![Maintenance](https://img.shields.io/badge/Maintained%3F-yes-green.svg)](https://GitHub.com/Naereen/notebooks/graphs/commit-activity)
[![Ask Me Anything !](https://img.shields.io/badge/Ask%20me-anything-1abc9c.svg)](https://GitHub.com/Naereen/ama)
[![Analytics](https://ga-beacon.appspot.com/UA-38514290-17/github.com/Naereen/notebooks/README.md?pixel)](https://GitHub.com/Naereen/notebooks/)

[![ForTheBadge uses-badges](http://ForTheBadge.com/images/badges/uses-badges.svg)](http://ForTheBadge.com)
[![ForTheBadge uses-git](http://ForTheBadge.com/images/badges/uses-git.svg)](https://GitHub.com/)

[![ForTheBadge built-with-science](http://ForTheBadge.com/images/badges/built-with-science.svg)](https://GitHub.com/Naereen/)
