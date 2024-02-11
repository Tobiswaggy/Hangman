#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>

int main(){
	
	// word: GNARLY
	
	char guess;
	int correct;
	int lives = 5;
	int win = 0;
	
	int g = 0;
	int n = 0;
	int a = 0;
	int r = 0;
	int l = 0;
	int y = 0;
		
	do{
			system("color 4");
			printf("\n\tHangman \n");
		
		printf("\tYou have %d lives.\n", lives);
		printf("\tYou have guessed %d/6 letters\n", correct);
		
		printf("\tCorrectly guessed letters: ");
		
		if(g > 0){
			printf("G");
		}
		
		if(n > 0){
			printf("N");
		}
	
		if(a > 0){
			printf("A");
		}
		
		if(r > 0){
			printf("R");
		}
		
		if(l > 0){
			printf("L");
		}
		
		if(y > 0){
			printf("Y");
		}
		
		printf("\n\tGuess a letter: ");
		scanf(" %c", &guess);
		
		switch(guess){
			
			case 'g':
				printf("\tCorrect.\n");
				win++;
				correct++;
				g++;
				system("PAUSE");
				system("cls");
			break;
			
			case 'n':
				printf("\tCorrect.\n");
				win++;
				correct++;
				n++;
				system("PAUSE");
				system("cls");
			break;
			
			case 'a':
				printf("\tCorrect.\n");
				win++;
				correct++;
				a++;
				system("PAUSE");
				system("cls");
			break;
			
			case 'r':
				printf("\tCorrect.\n");
				win++;
				correct++;
				r++;
				system("PAUSE");
				system("cls");
			break;
			
			case 'l':
				printf("\tCorrect.\n");
				win++;
				correct++;
				l++;
				system("PAUSE");
				system("cls");
			break;
			
			case 'y':
				printf("\tCorrect.\n");
				win++;
				correct++;
				y++;
				system("PAUSE");
				system("cls");
			break;
			
			default:
				printf("\tIncorrect.\n");
				lives--;
				system("PAUSE");
				system("cls");
			break;
				
		}
		
		if(g > 1){
		printf("You already guessed this letter!\n");
		return 0;
		}
		
		if(n > 1){
		printf("You already guessed this letter!\n");
		return 0;
		}
	
		if(a > 1){
		printf("You already guessed this letter!\n");
		return 0;
		}
		
		if(r > 1){
		printf("You already guessed this letter!\n");
		return 0;
		}
		
		if(l > 1){
		printf("You already guessed this letter!\n");
		return 0;
		}
		
		if(y > 1){
		printf("You already guessed this letter!\n");
		return 0;
		}
			
	}while(lives != 0 && win != 6);
	
	if(lives == 0){
		system("L.vbs");
		return 0;
	}
	
	if(win == 6){
		system("W.vbs");
		return 0;
	}
	
}