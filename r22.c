 #pragma config(Sensor, S1,     ,               sensorLightActive)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

//grab functions
void grab() {
		clearTimer(T1);
		while(time1(T1)<=1000){
	motor[motorA]=200;
	}
	motor[motorA]=00;
	wait1Msec(100);
	return;
}
//  grab functions
	void drop() {

	 //nxtDisplayTextLine(3,"Drop %d",message);
    //	wait1Msec(100);
			motor[motorA]=00;
	motor[motorA]=00;
	wait1Msec(200);
	motor[motorA]=-100;
	wait1Msec(250);
	return;
}

// stop functions
void stop() {
 	motor[motorB]=0;
 	motor[motorC]=0;
 		clearTimer(T2);
		while(time1(T2)<=100000)
	stop();
}

task main()
{
	int flag1=0,flag0=0;
  ClearMessage();
			//	nxtDisplayTextLine(3,"Received %d",message);
    //	wait1Msec(300);
	while (true)
{
  //
  // Skip to the last message received
  //
  while (bQueuedMsgAvailable())
  {
    word temp;
    ClearMessage();   // We?re ready to process the next message
    temp = message;   // Obtain the next message
  }
 // nxtDisplayTextLine(3,"Received %d",message);
   // 	wait1Msec(100);

    	int temp1=	message;

    	if(flag1==1 && message==10)
    		temp1=25;
    	if(flag0==1 && message==50)
    		temp1=25;
    	nxtDisplayTextLine(1,"Received %d",message);
    		nxtDisplayTextLine(2,"****Received %d",temp1);
   		 	wait1Msec(300);


    	switch(temp1)
    	{

    		case -1:	stop();
    							temp1=25;
    							break;

    		case 10:	motor[motorB]=0;
									motor[motorC]=0;
									wait1Msec(300);
									temp1=25;
									flag1=1;
									grab();
									break;

				case 50:	motor[motorB]=0;
									motor[motorC]=0;
									wait1Msec(300);
									temp1=25;
									flag0=0;
									grab();
									break;

				default:

//move

		//	forward(3.25, rotations, 40);
		//	forward(3.25, rotations, 40);
			//	nSyncedMotors = synchBC;
			//	nSyncedTurnRatio = +100;
      motor[motorB]=-30;
      motor[motorC]=-30;
}
}
}
