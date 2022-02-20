#include<reg51.h>
void MSDelay(unsigned int);
void main()
{
	while(1)
	
	{
		P0 = 0x55;
		P2 = 0x55;
		MSDelay(250);
		P0 =~ P0;
		P2 =~ P2;
		MSDelay(250);
	}
	
}
void MSDelay(unsigned int itime)
{
	unsigned int i,j;
	for(i=0;i<itime;i++)
	  for(j=0;j<1275;j++);
}