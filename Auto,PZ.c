#pragma config(Hubs,  S4, HTMotor,  HTMotor,  HTMotor,  HTServo)
#pragma config(Sensor, S1,     IR,             sensorHiTechnicIRSeeker1200)
#pragma config(Motor,  mtr_S4_C1_1,     motorLB,       tmotorTetrix, openLoop, reversed)
#pragma config(Motor,  mtr_S4_C1_2,     motorRB,       tmotorTetrix, openLoop)
#pragma config(Motor,  mtr_S4_C2_1,     motorLF,       tmotorTetrix, openLoop, reversed)
#pragma config(Motor,  mtr_S4_C2_2,     motorRF,       tmotorTetrix, openLoop)
#pragma config(Motor,  mtr_S4_C3_1,     Spinners,      tmotorTetrix, openLoop)
#pragma config(Motor,  mtr_S4_C3_2,     Lifter,        tmotorTetrix, openLoop)
#pragma config(Servo,  srvo_S4_C4_1,    PinPad,               tServoStandard)
#pragma config(Servo,  srvo_S4_C4_2,    Dumper,               tServoStandard)
#pragma config(Servo,  srvo_S4_C4_3,    servo3,               tServoNone)
#pragma config(Servo,  srvo_S4_C4_4,    servo4,               tServoNone)
#pragma config(Servo,  srvo_S4_C4_5,    servo5,               tServoNone)
#pragma config(Servo,  srvo_S4_C4_6,    servo6,               tServoNone)

/*
Autonomous Parking Zone Plan:

1. Set up Robot for competition.

2. Drive towards opposing alliance's Ramp Zone using gyroscopic sensor and motor encoders.
		b. Drive close enough to not enter Ramp Zone, but far enough to not hit the kickstand.

3. Take IR reading to determine center field structure position, and score in center goal.

4. Drive towards opposing alliance's Parking Zone using gyroscopic sensor and motor encoders.
		b. Drive close enough to not enter Parking Zone, but far enough to not hit the kickstand.

5. Drive to 30cm rolling goal using gyroscopic sensor and motor encoders/Attach/Score.

6. Drive to Parking Zone using gyroscopic sensor and moter encoders.

7. Release 30cm rolling goal in Parking Zone.

8. Drive to/Kick Kickstand using gyroscopic sensor and motor encoders, based upon previous IR reading.
*/
task main()
{



}
