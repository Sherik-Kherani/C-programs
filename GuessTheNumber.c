#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
	int guessNumber,x,y=0,numberByUser;
	srand(time(0));
	int random = (rand() % 50) + 1;
	printf("Welcome to the guessing game\nGuess a number between 1 to 50\n");
	 scanf("%d",&numberByUser);
	 guessNumber = random;
	 
	 while(guessNumber != numberByUser){
	 	if(numberByUser > 50){
	 	printf("Invalid number\nEnter number between 1 to 50\n");
	 	}
	 	else if(numberByUser > guessNumber){
	 		printf("Guess a lower number than %d\n",numberByUser);
	 	}
	 	else if(numberByUser < guessNumber){
	 		printf("Guess a higher number than %d\n",numberByUser);
	 	}
	 	scanf("\n%d",&numberByUser);
	 	y++;
	}
	y += 1;
	printf("Congratulation you guessed the number!!,\nit was %d",random);
 	printf("\nyou took %d chances",y);
}

