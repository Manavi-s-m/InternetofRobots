#pragma config(Sensor, S1,     ,               sensorLightActive)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

task main()
{
	 //wait1Msec(50);
  while(true)
  {
    if(SensorValue[S1] <45)
    {
      motor[motorB]=-60;
      motor[motorC]=-20;
    }
    else
    {
      motor[motorB]=-20;
      motor[motorC]=-60;
   }
 }

}