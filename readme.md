A playground project for the 'Bad USB' Arduino-based USB stick, sometimes known as 'Bad Beetle USB' or a virtual keyboard.

The device is essentially a stripped Arduino Leonardo: just the MCU with USB interface, no LED, no extra pins.
The MCU is an Atmel ATmega32U4 which includes a USB interface.
It can be found in Amazon, Ebay, AliExpress along with many tutorials for use.

Board info returns:
  BN: Arduino Leonardo
  VID: 2341
  PID: 8036
  SN: HIDPC

The current project pops up a cmd window in admin mode using a sequence based on a Ducky script converted to Arduino HID system calls.
It can also be used to create an automatic user login anytime the USB device is inserted. 
Note: In this case, the user PW would be exposed as plain text in the code!
Because it emulates an HID keyboard, it can bypass most anti-virus protections.
