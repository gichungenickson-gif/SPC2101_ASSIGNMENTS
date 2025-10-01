/*
name:GICHUNGE NICKSON MUTUGI
reg:CT101/G/26562/25
date:1 OCT 2025
*/
#include<stdio.h>
int main(){
	int choice;
	printf("1. 100MB @KES.50\n");
	printf("2. 500MB @KES.200\n");
	printf("3. 1GB   @KES350 \n");
	printf("4. 2GB   @KES.600\n");
 
    printf ("ENTER YOUR CHOICE\t");
    scanf("%d",&choice);
    switch(choice){
		case 1:
	     	printf("you entered 100MB @KES.50" );
	    	break;
	    case 2:
	    	printf("you entered 500MB @KES.200");
	    	break;
	    case 3:
	    	printf ("you entered 1GB   @KES350");
	    	break;
	    case 4:
	    	printf("you entered 2GB   @KES.600");
	    	break;
	    default:
	    	printf("invalid choice");
	
	}
	
}
