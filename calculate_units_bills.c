/*
NAME:GICHUNGE NICKSON MUTUGI
REG NO:CT101/26562/25
DATE:23RD OCT 2025
*/

#include <stdio.h>
 float bill(int units) {
	  float bill =0;
	  
 if (units <=100)
	  bill=(units*10);	 
  else if (units <=200)
  	bill=(100*10)+(units>=100*15);
  else
  	bill=(100*10)+(100*15)+(units-200)*20;
return bill;
 }
 int main(){
int units;

 printf("ENTER THE NUMBER OF UNITS CONSUMED:\n");
 scanf("%d",&units);

printf("TOTAL BILL= KSH. %.2f\n",bill(units));
  return 0;
  }