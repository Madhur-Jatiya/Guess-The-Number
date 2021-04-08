 #include<stdio.h> 
 #include<stdlib.h> 
 #include<time.h> 
 
 int main()
 {
 	int number,guess,attempts=1;
 	srand(time(0));
	number = rand()%1000 +1;
	
	//printf("The random Number is= %d \n",number);
	
	printf("Welcome in the Game\n");
	sleep(2);
	printf("Moms Presents = Guess The Number??\n\n");
	sleep(2);
	printf("RULE 1 = You have only 5 chance to win the Game\n\n");
	printf("RULE 2 = Only Use Any Integer No.\n\n");	
	
	do
	{	
		printf("Guess the Number between 1-1000??\n");
		scanf("%d",&guess);

		if(attempts==4)		//New Update(Mistake)
		{
			printf("Last chance be careful\n");
		}
		
		else if(attempts==5)		//New Update(Mistake)
		{
			printf("Game over : You Lose the Game");
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
 
