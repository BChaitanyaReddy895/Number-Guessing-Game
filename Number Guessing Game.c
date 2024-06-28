# include<stdio.h>
# include<stdlib.h>//this header file contains random function that generates random nummbers in specified range
# include<time.h>//to initialize random number generator with different values per second 

int main()
{
	const int MIN=1;
	const int MAX=100;
	int program_num,user_num;
	srand(time(NULL));
	
	program_num=(rand()%MAX)+MIN;
	printf("Welcome to Number Guessing Game developed by B Chaitanya Reddy\n");
	printf("Lets BEGIN\n");
	
	while(1)
	{
		printf("Enter your guess:");
		scanf("%d",&user_num);
		if (program_num==user_num)
		{
			printf("Congratulations! Your Guess is CORRECT\n");
			break;
		}
		else if(program_num>user_num)
			printf("Oops! Your Guess is too low.\nTry Again\n");
		else
			printf("Oops! Your Guess is too high.\nTry Again\n");
		
	}
	return 0;
}

