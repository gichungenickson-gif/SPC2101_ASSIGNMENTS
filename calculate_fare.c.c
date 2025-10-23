/*
NAME:GICHUNGE NICKSON MUTUGI
REG NO:CT101/26562/25
DATE:23RD OCT 2025
*/

#include <stdio.h>
float fare(int distance){
	
	return distance*50;

}
int main(){
	int distance;
	
printf("ENTER DISTACE TRAVELLED IN (KM)\n");
scanf("%d",&distance);

printf("TOTAL FARE IS=KSH. %.2f\n",fare(distance));	
}