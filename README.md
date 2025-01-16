# nixie-ESP32
Arduino Nano ESP32 conversion of Great Scott's Nixie Tube clock
![378091757-6b28f05c-871b-4171-8765-5b44897de5d7](https://github.com/user-attachments/assets/029bbbce-8765-46c3-8cb9-46c2b55ea331)

Arduino Nano ESP32 sketches and interposer board design files to enable network connectivity on the Nixie Tube clock [as originally designed by Great Scott](https://www.youtube.com/watch?v=ObgmVNV1Kfg).

The interposer board is a very rough design, being an amateur at best when PCB design is concerned, with its footprint overhanging on one side the original board's area.

Two solder jumpers enable the selection of input voltage: either 5V through what would be the original Arduino Pro Mini's 5V power supply pin, or through a pad to be connected to the clock's existing 9V voltage.

The power supply specifications of the Arduino Nano ESP32 recommend a voltage range *starting* from 6V for the external power supply, but 5V seems to work good enough in practice.

Two sketches are provided:
* NixieTest_NanoESP32 cycles through the numbers 0 to 9 to test the correct functionality.
* NixieClockWiFi_NanoESP32 is the sketch proper, with basic functionality but with NTP timesync.

Important: the pin numbers are in the legacy GPIO numbering scheme, so the following setting *must* be used:
![378091436-f69a1739-e6cf-4456-aadd-01e066c65108](https://github.com/user-attachments/assets/c0007f6b-5e8f-462b-9aa1-266ff6fd959c)

