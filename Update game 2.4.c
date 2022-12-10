 #include<stdio.h> 
 #include<stdlib.h>
 #include<time.h> 
 
 int main()
 {
 	int number,guess,attempts=1,x;
 	srand(time(0));
	number = rand()%1000 +1;	
	
	//printf("The random Number is= %d \n",number);
	
	printf("Welcome in the Game\n");
	sleep(2);
	printf("Moms Presents = Guess The Number??\n\n");
	sleep(2);
	printf("RULE 1 = You have only 10 chance to win the Game\n\n");
	printf("RULE 2 = Only Use Any Integer No.\n\n");	
	
	do
	{
		printf("Guess the Number between 1-1000??\n");
		
		do
		{	
			scanf("%d",&guess);
	
			if(number<guess)
			{
				printf("Your No. is Big. Plz enter small No.\n");
				
				if(attempts==8)	//New Update
				{
					printf("\n\n*Only 2 chaces left be carefull*\n\n");
				}
				
				else if(attempts==9)	//New Update
				{
					printf("\n\n*Last chance be careful*\n\n");
				}
				
				else if(attempts==10)	//New Update
				{
					printf("\n\n*Game over : You Lose the Game*\n\n");
					break;
				}			
			}
			
			else if(number>guess)
			{
				printf("Your No. is small. Plz enter Big No.\n");
				
				if(attempts==8)	//New Update
				{
					printf("\n\n*Only 2 chaces left be carefull*\n\n");
				}
				
				else if(attempts==9)	//New Update
				{
					printf("\n\n*Last chance be careful*\n\n");
				}
				
				else if(attempts==10)	//New Update
				{
					printf("\n\n*Game over : You Lose the Game*\n\n");
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
		printf("\nThe Correct Answer is= %d \n\n",number);	
		attempts=1;	
		printf("\nPress 1 for play again and any other key for exit\n");
		scanf("%d",&x);
	}
	
	while(x==1);
	
	return(0);
 }
 
