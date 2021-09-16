 #include<stdio.h> //header file
 #include<stdlib.h> //Import standard library
 
 int main()
 {
 	int number,guess,attempts=1;
	number = rand()%1000 +1;	//Mistake always prints same no.	//use rand function
	 								//The No are not exceed 1000	
	
	//printf("The random Number is= %d \n",number);
	
	do
	{
		printf("Guess the Number between 1-1000??\n");
		scanf("%d",&guess);
		
		if(number>guess)
		{
			printf("Your No. is small. Plz enter Big No.");
		}

		else if(number<guess)
		{
			printf("Your No. is Big. Plz enter small No.");
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
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 

