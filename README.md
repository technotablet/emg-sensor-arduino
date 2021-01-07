# EMG Sensor with Arduino

A prototype video is at https://youtu.be/65wfnKRWM4Y

I was able to make a Generic EMG Muscle Sensor work with Arduino. I got it from Robu.in (in India) → https://robu.in/product/advancer-technologies-emg-muscle-sensor-v3-0-with-cable-and-electrodes/

This EMG Sensor is a cloned/generic version of the (now discontinued) Advancer Technologies EMG Muscle Sensor v3
http://www.advancertechnologies.com/p/muscle-sensor-v3.html

The documentation of this EMG Sensor Setup is at
https://github.com/AdvancerTechnologies/Muscle-Sensor-v3/blob/master/Documents/Muscle%20Sensor%20v3%20Users%20Manual.pdf?raw=true


In the documentation, it uses Two 9V cells. But I used Two Li-Ion 18650 Cells charged till about 4.10 Volt each. The documentation mentions it requires ± 3.5v, which means each cell should be at least 3.5v. The 18650 cells that I am using have a nominal voltage of 3.6V with max as 4.2V. So they do the job easily.

Focus on a consistent/reliable power supply. I tried earlier with 9V cheap batteries, and the values felt inconsistent or dropped to 0.

To test it out, you do not need Arduino.
Connect the Signal & Ground pin of the EMG Sensor to a Multimeter set to DC Voltage Measurement.
- First measure the voltage without connecting the electrodes, and then after connecting the electrodes.
- If all 3 electrodes are connected, I guess the voltage should be ≤ 0V.
- The ground electrode (red colored in my case) should be in center. To find the Ground electrode, turn off the power supply and connect the electrodes' pin to the EMG sensor. Use a multimeter in Continuity Mode and check which of the electrodes beep when you try to check continuity with the EMG Sensor's Ground (GND) pin.
- Look out for loose wire connections - they can also cause a lot of grief in terms of not getting the relevant data.
- If the muscle is tired, then the electrical activity will be a lot less. Wait for 10-15 seconds and then try again.

Once you are ready, connect with Arduino on any of the Analog pins, and read and manipulate the values as necessary.
