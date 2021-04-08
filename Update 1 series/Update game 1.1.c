#include<stdio.h> //header file
 #include<stdlib.h> //Import standard library
 #include<time.h> //Import time library
 
 int main()
 {
 	int number,guess,attempts=1,chance=5;
 	srand(time(0));     		//use srand function using time function 	
	number = rand()%100 +1;	//use rand function
 								//The No are not exceed 1000	
	
	//printf("The random Number is= %d \n",number);
	
	printf("Welcome in the Game\n");
	sleep(2);
	printf("Moms Presents = Guess The Number??\n\n");
	sleep(2);
	printf("RULE 1 = You have only 5 chance to win the Game\n\n");
	printf("RULE 2 = Only Use Any Integer No.\n\n");

	
	do
	{
		chance--;	//New Update
        
        printf("Guess the Number between 1-100??\n");
		scanf("%d",&guess);
		
		if(chance==2)	//Mistake
		{
			printf("\n*Only 2 chance will left*\n\n");
		}

		else if(chance==1)	//Mistake
		{
			printf("\n*Last chance be careful*\n\n");
		}
				
		else if(chance==0)	//Mistake
		{
			printf("\n*Game over* - You Lose The Game\n");
			break;
		}
				
		else if(number<guess)
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
