#include<stdio.h> 
#include<stdlib.h>
#include<time.h> 
 
 int main()
 {
 	int number,guess,attempts=1,chance=5,x;
 	srand(time(0));     	
	number = rand()%100 +1;	
 									
	//printf("The random Number is= %d \n",number);
	
	printf("Welcome in the Game\n");
	sleep(2);
	printf("Moms Presents = Guess The Number??\n\n");
	sleep(2);
	printf("RULE 1 = You have only 5 chance to win the Game\n\n");
	printf("RULE 2 = Only Use Any Integer No.\n\n");


	do	//new update
	{	
		printf("Guess the Number between 1-100??\n");

		do
		{
			chance--;
			scanf("%d",&guess);
					
			if(number<guess)
			{
				printf("Your No. is Big. Plz enter small No.\n\n");
				
				if(chance==2)
				{
					printf("\n*Only 2 chance will left*\n\n");
				}
		
				else if(chance==1)
				{
					printf("\n*Last chance be careful*\n\n");
				}
						
				else if(chance==0)
				{
					printf("\n\n*Game over* - You Lose The Game\n");
					break;
				}
			}
			
			else if(number>guess)
			{
				printf("Your No. is small. Plz enter Big No.\n\n");
				
				if(chance==2)
				{
					printf("\n*Only 2 chance will left*\n\n");
				}
		
				else if(chance==1)
				{
					printf("\n*Last chance be careful*\n\n");
				}
						
				else if(chance==0)
				{
					printf("\n*Game over* - You Lose The Game\n");
					break;
				}
			}
			
			else
			{
				printf("Congrats you guess correct number in %d attempts\n",attempts);
			}
	
			
			attempts++;
		}
		
		while(number!=guess);
		
			printf("\nThe Correct Answer is= %d \n\n",number);	//new update
			printf("\nPress 1 for play again and any other key for exit\n");	//new update
			scanf("%d",&x);	//new update
	}
	
	while(x==1);	//new update
	
	return(0);
 }
