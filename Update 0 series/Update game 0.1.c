 #include<stdio.h> //header file
#include<stdlib.h> //Import standard library
#include<time.h> //Import time library
 
 int main()
 {
 	int number,guess,attempts=1;
 	srand(time(0));     		//use srand function using time function //(New Update)	
	number = rand()%1000 +1;	//use rand function
	
	//printf("The random Number is= %d \n",number);
	
	do
	{
		printf("Guess the Number between 1-1000??\n");
		scanf("%d",&guess);
		
		if(number<guess)
		{
			printf("Your No. is Big. Plz enter small No.");
		}
		
		else if(number>guess)
		{
			printf("Your No. is small. Plz enter Big No.");
		}
		
		else
		{
			printf("Congrats you guess correct number in %d attempts",attempts);
		}
		
		attempts++;
	}
	
	while(number!=guess);
	
	return(0);
 }
 
