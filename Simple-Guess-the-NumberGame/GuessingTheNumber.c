#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define MIN 1
#define EMAX 100
#define HMAX 200
//KATIIONLE
	void GameIntro();
	int ChooseD();
	int EasyM();
	int HardM();
	int main(){
		int level;
		GameIntro();
		level = ChooseD();
		
		switch(level){
			case 1:
					EasyM();
					break;
			case 2:
					HardM();
					break;
			
		}
		
		
		
		return 0;
	}
	
	void GameIntro(){
		char opt;
		
		
		do{
			
		printf("Welcome to my guess the number game\nHow to Play:\n");
		printf("Secret Number: We've selected a secret number between a certain range.\n");
		printf("Guesses: Depending on the level you have a limited number of guesses to find the secret number.\n");
		printf("Feedback: After each guess, we'll provide feedback:\n\t\"Higher\" if your guess is too low.\n\t\"Lower\" if your guess is too high.\n\t\"Correct\" if you guess the secret number!");
		printf("\nWinning: You win by guessing the secret number within your allocated guesses.\n");
		printf("Losing: If you use up all your guesses without finding the number, don't worry—you can always try again!\n");
		
		printf("\nPress any key to Continue: ");
		scanf(" %c", &opt);
		system("cls");
		}while(opt == 'Y' || opt == 'y');	
		
	}
	int ChooseD(){
		int lvl;
		do{
		printf("Choose Your Desired Difficulty:\n");
		printf("EASY:\n\tRange: 1-100\n\tNumber of Guesses: UNLI\n");
		printf("HARD:\n\tRange: 1-200\n\tNumber of Guesses: 20\n");
		
		
			printf("1.Easy\n");
			printf("2.Hard\n");
			scanf("%d", &lvl);
			system("cls");
		}while(lvl < 1 || lvl > 2);
		
		return lvl;
	}
	
	
	int EasyM(){
		int guess, guesses = 0, answer;
		char retry;
		do{
		srand(time(0));
		answer = (rand() % EMAX) + MIN;
	
		


		printf("WELCOME TO EASY MODE!!\nHAHAHAHA WEAK");
		do
		{
			do{
				printf("\nEnter Guess: ");
				scanf("%d", &guess);
			}while(guess < 1 || guess > 100);
			
			if(guess < answer){
				printf("HIGHER!!\n");
				
			}else if(guess > answer){
				printf("LOWER!!\n");
			}
				
			else if(guess == answer){
				printf("CORRECT\n",answer );
			}
			guesses++;
		
			
		}while(guess != answer);
			printf("The answer is: %d\n", answer);
			printf("Took you %d(time(s)\n", guesses);
			
			
			printf("\nDo you want to  (Y/N)\n");
			scanf(" %c", &retry);
			printf("\n\n");
			system("cls");
			}while(retry == 'Y' || retry == 'y');
	}	
	
	int HardM(){
	int guess, guesses = 0, answer, lose = 11;
	char retry;
		do{
		srand(time(0));
		answer = (rand() % HMAX) + MIN;
	
		

		printf("WELCOME TO HARD MODE!!\nHAHAHAHA TAPANG\nMAXIMUM OF 10 GUESSES ONLE!!");
		do
		{
			do{
				printf("\nEnter Guess: ");
				scanf("%d", &guess);
			}while(guess < 1 || guess > 200);
			
			if(guess < answer){
				printf("HIGHER!!\n");
				
			}else if(guess > answer){
				printf("LOWER!!\n");
			}
			else if(guess == answer){
				printf("CORRECT!!\n");
			} 
			guesses++;
			
			
		}while(guess != answer && guesses <=10);
			
			if(guesses == 11)
			{
				
				printf("\nused %d guesses!!\n YOU LOSE!!", guesses);

			}else
			{
				printf("The answer is: %d\n", answer);
			printf("Took you %d time(s)\n", guesses);
			}
		
		
		
		
		
		
		
		
		
			printf("\nDo you want to  (Y/N)\n");
			scanf(" %c", &retry);
			printf("\n\n");
			system("cls");
			}while(retry == 'Y' || retry == 'y');
	}
