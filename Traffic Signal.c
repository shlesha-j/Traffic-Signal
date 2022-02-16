#include<reg51.h>
#define ON 0
#define OFF 1

sbit NG = P3^2;
sbit NY = P3^1;
sbit NR = P3^0;

sbit EG = P3^3;
sbit EY = P3^4;
sbit ER = P3^5;

sbit SG = P2^2;
sbit SY = P2^1;
sbit SR = P2^0;

sbit WG = P2^3;
sbit WY = P2^4;
sbit WR1= P2^5;

void Delayms(unsigned int msec)
{
unsigned int x, y;
	for (x=0; x<=msec; x++)
	{
	for (y=0; y<=110; y++)
		{
			
		}
	}
}
void main()
{
	   NR= ON;
	   WR1=ON;
	   SR= ON;
	   ER= ON;
	   Delayms(6000);
	
	      while(1)
				{
// NORTH
                 NR= OFF;
                 NG= ON;
                 Delayms(8000);
                 NG= OFF;
                 NY= ON;
                 Delayms(2000);
                 NY= OFF;
                 NR= ON;
// EAST
                 ER= OFF;
                 EG= ON;
                 Delayms(8000);
                 EG= OFF;
                 EY= ON;
                 Delayms(2000);
                 EY= OFF;
                 ER= ON;	
// SOUTH
                 SR= OFF;
                 SG= ON;
                 Delayms(8000);
                 SG= OFF;
                 SY= ON;
                 Delayms(2000);
                 SY= OFF;
                 SR= ON;	
// WEST
                 WR= OFF;
                 WG= ON;
                 Delayms(8000);
                 WG= OFF;
                 WY= ON;
                 Delayms(2000);
                 WY= OFF;
                 WR= ON;
							 }
		 }