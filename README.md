# Brushless-Motor-Controller-QS-909-JYQD

The aim of this project is to design a circuit that controls a brushless motor using QS-909 JYQD, which is a low cost motor driver, used specifically to control the speed and the direction of brushless motors. As the name implies, brushless motors do not have brushes. Instead, the rotor is a permanent magnet and the stator consists of three or more coils. In this project two brushless motors are used to drive two wheels (load) and attached to a base that handle a robot.

# Brushless Motors

A brushless DC motor operates by applying a DC voltage to one stator coil at a time. When the coil is energized, an electromagnetic field is produced and it interacts with the magnet poles of the rotor, which in return cause it to rotate. To clarify, The Figure below illustrates a sketch of a brushless motor which consists of permanent magnet (the rotor) and three coils one is labeled with its north and south poles. Besides, a graph shows the signal at each coil per cycle. When coil A is energized (the green signal as shown in the graph), its north pole is attracted to the south pole of the permanent magnet. Then, coil B is energized, which again the opposite poles of the rotor and the stator coil B are attracted to each other (the blue signal). The same process happens with stator coil c. After that, the stator coils A, B and C are energized in the same sequence again but with different polarity. However, this process includes only one energized coil at a time, which cause a slow rotation of the rotor. So, another method is used to get continuous and fast rotation is to place the stator coils such that each two coils opposes each others’ poles as it is illustrated in the Figure below. The north pole of coil A is placed beside the south pole of coil B which mean two coils are energized at the same time instead of one coil. The controller is used to determine which coils are to energize with the help of the Hall Effect sensor that senses the rotor’s position.
![bm](https://user-images.githubusercontent.com/85955049/128512521-9d871b3d-bc69-4746-bc11-93d2cd3926c9.png)

Photo Credit: Electrical Technology (https://www.electricaltechnology.org/2016/05/bldc-brushless-dc-motor-construction-working-principle.html)

The advantages of using a brushless motor can be summarized into the following points:
•	Low noise.
•	High reliability.
•	Lack of ionizing spark.
•	Longer life span.  

# QS-909 JYQD

The Figure below shows the definition of each pin of the Motor driver QS-909 JYQD. 
![QS-909 Pins](https://user-images.githubusercontent.com/85955049/128512771-bbe99a52-8c32-4d2e-a0b1-2bd2333a4e95.png)

The key features of the QS-909 are:
•	Low cost.
•	Nominal Voltage of 12V-36V.
•	Driver power of 500W.
•	Speed control.
•	Enable control.
•	Direction control.

# Circuit Connection 

The Figure below shows the circuit diagram.
![circuit d](https://user-images.githubusercontent.com/85955049/128513026-dd0a12ae-cf93-4f4e-a58a-a6436a307587.png)

Starting from the Set part of the QS-909, the connection is as follows:
- 5V pin with the 5V input of the Arduino (red wire).
- EL pin with pin 5 of the Arduino (brown wire).
- Signal pin with pin 3 of the Arduino (orange wire).
- Z/F pin with pin 4 of the Arduino (blue wire).
- VR pin with pin 2 of the Arduino (purple wire).
- Ground pin with the GND pin of the Arduino (black wire).

Then, the connection of the hall section is:

- 5V pin with the 5V input of the red cable of the motor.
- Ha pin with the yellow cable of the motor.
- Hb pin with the blue cable of the motor.
- Hc pin with the green cable of the motor
- Ground pin with the ground black cable of the motor.

Finally, the connection of the output pins MA, MB and MC are connected each to one phase of the motor.

# Code 


