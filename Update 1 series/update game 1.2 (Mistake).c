#include<stdio.h> 
 #include<stdlib.h>
 #include<time.h> 
 
 int main()
 {
 	int number,guess,attempts=1,chance=5;
 	srand(time(0));     		
	number = rand()%100 +1;	
	
	//printf("The random Number is= %d \n",number);
	
	printf("Welcome in the Game\n");
	sleep(2);
	printf("Moms Presents = Guess The Number??\n\n");
	sleep(2);
	printf("RULE 1 = You have only 5 chance to win the Game\n\n");
	printf("RULE 2 = Only Use Any Integer No.\n\n");

	void at() //New update
	{
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
				break;	//Big Mistake
			}
	}
	
	do
	{
		chance--;
        
        printf("Guess the Number between 1-100??\n");
		scanf("%d",&guess);
				
		if(number<guess)
		{
			printf("Your No. is Big. Plz enter small No.\n\n");
			at();
		}
		
		else if(number>guess)
		{
			printf("Your No. is small. Plz enter Big No.\n\n");
			at();
		}
		
		else
		{
			printf("Congrats you guess correct number in %d attempts",attempts);
		}

		
		attempts++;
	}
	
	while(number!=guess);
	
		printf("\nThe Correct Answer is= %d \n",number);

	
	return(0);
 }
