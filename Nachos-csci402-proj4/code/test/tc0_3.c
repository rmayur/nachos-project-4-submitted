/*
Testing for p4p3
*/

#include "syscall.h"

void main()
{
	int lck1;
	int i,j;
	
	Print("\nTC0_3 :: Testing for p4p3. \n",1,1,1);

	lck1 = CreateLock("lock1");			
	Print("\nTC0_3 :: Lock name 'lock1' Created. The Index is '%d'.\n",lck1,1,1);
	
	Acquire("lock1");							

	Print("\nTC0_3 :: Has acquired lock 'lock1' with index: '%d' & is going to exit wihtout releasing, run file tc0_4. \n",lck1,1,1);
	
	for(i=10;i>0;i--)
	{
		Print("\n Press Control+C to Exit else wait %d Seconds for program to exit. \n",i,1,1);
		for(j=0;j<10000;j++)
		{
			Yield();
		}
	}
	
	Exit(0);
}

