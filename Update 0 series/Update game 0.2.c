#include<stdio.h> 
#include<stdlib.h>
#include<time.h> 
 
 int main()
 {
 	int number,guess,attempts=1,chance=5;
 	srand(time(0));     	
	number = rand()%100 +1;	
	
	//printf("The random Number is= %d \n",number);
	
	printf("Welcome in the Game\n");	//New Update
	sleep(2);
	printf("Moms Presents = Guess The Number??\n\n");	//New Update
	sleep(2);
	printf("RULE 1 = You have only 5 chance to win the Game\n\n");	//New Update
	printf("RULE 2 = Only Use Any Integer No.\n\n");	//New Update

	
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
 
