/***********************************************************************
* Program: Rasberry Pi movement
*
* Author:
*    Taylor Isaacson
* Summary: 
*    
*
*      
************************************************************************/

#include <iostream>
#include <wiringPi.h>
using namespace std;

void forward(int time);
void back(int time);
void turnRt(int time);
void turnLft(int time);

/**********************************************************************
 * driver
 ***********************************************************************/
int main()
{
   int time = 500;

   forward(time);
   back(time);
   turnRt(time);
   turnLft(time);
   
   return 0;
}

/*******************************************************************
 *
 ******************************************************************/
void foward(int time)
{
   wiringPiSetup ();
   pinMode (2, OUTPUT);
   for (int i = 5; i >= 0; i--)
   {
      digitalWrite (2, 1);
      delay (time);
      digitalWrite (2,0);
      delay (time);
   }
}

/******************************************************
 *
 *****************************************************/
void back(int time)
{
   wiringPiSetup ();
   pinMode (3, OUTPUT);
   for (int i = 5; i >= 0; i--)
   {
      digitalWrite (3, 1);
      delay (time);
      digitalWrite (3, 0);
      delay (time);
   }
}

/*************************************************************
 *
 ***********************************************************/
void turnRt(int time)
{
   wiringPiSetup ();
   pinMode (14, OUTPUT);
   for (int i = 5; i >= 0; i--)
   {
      digitalWrite (14, 1);
      delay (time);
      digitalWrite (14, 0);
      delay (time);
   }
}

/************************************************************
 *
 ************************************************************/
void turnLft(int time)
{
   wiringPiSetup ();
   pinMode (4 OUTPUT);
   for (int i = 5; i >= 0; i--)
   {
      digitalWrite (4, 1);
      delay (time);
      digitalWrite (4, 0);
      delay (time);
   }
}
