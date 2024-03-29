#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <unistd.h>
#include <stdbool.h>
#include <time.h>

char menu[26][66] = {
    "                  |                                              |",
    "                  |                                              |",
    "                  |                                              |",
    "                  |                                              |",
    "                  |                Galactic Blaster              |",
    "                  |                                              |",
    "                  |                                              |",
    "                  |                                              |",
    "                  |                                              |",
    "                  |                                              |",
    "                  |                  > NEW GAME <                |",
    "                  |                                              |",
    "                  |                    RECORDES                  |",
    "                  |                                              |",
    "                  |                    CREDITOS                  |",
    "                  |                                              |",
    "                  |                      SAIR                    |",
    "                  |                                              |",
    "                  |                                              |",
    "                  |                                              |",
    "                  |                                              |",
    "                  |                                              |",
    "                  |                                              |",
    "                  |                                              |",
    "                  |                                              |",
	"                  |                                              |"   
};

char board[26][66] = {
    "                  |                                              |",
    "                  |                   CRONOMETRO                 |",
    "                  |                                              |",
    "                  |                                              |",
    "                  |                                              |",
    "                  |                                              |",
    "                  |                                              |",
    "                  |                                              |",
    "                  |                                              |",
    "                  |                                              |",
    "                  |                                              |",
    "                  |                                              |",
    "                  |                                              |",
    "                  |                                              |",
    "                  |                                              |",
    "                  |                                              |",
    "                  |                                              |",
    "                  |                                              |",
    "                  |                                              |",
    "                  |                                              |",
    "                  |                                              |",
    "                  |                                              |",
    "                  |                                              |",
    "                  |                                              |",
    "                  |                                              |",
	"                  |                                              |"   
};

char creditos[26][66] = {
    "                  |                                              |",
    "                  |                                              |",
    "                  |                DESENVOLVEDORES:              |",
    "                  |                                              |",
    "                  |                     Lucas                    |",
    "                  |                     Veiga                    |",
    "                  |                     Correr                   |",
    "                  |                                              |",
    "                  |                                              |",
    "                  |                  GAME DESIGN:                |",
    "                  |                                              |",
    "                  |                     Lucas                    |",
    "                  |                     Veiga                    |",
    "                  |                     Correr                   |",
    "                  |                                              |",
    "                  |                                              |",
    "                  |             GESTORES DE QUALIDADE:           |",
    "                  |                                              |",
    "                  |                     Lucas                    |",
    "                  |                     Veiga                    |",
    "                  |                     Correr                   |",
    "                  |                                              |",
    "                  |                                              |",
    "                  |        APERTE ALGO PARA VOLTAR AO MENU       |",
    "                  |                                              |",
	"                  |                                              |"   
};

char sair[26][66] = {
    "                  |                                              |",
    "                  |                                              |",
    "                  |                                              |",
    "                  |                                              |",
    "                  |                Galactic Blaster              |",
    "                  |                                              |",
    "                  |                                              |",
    "                  |                                              |",
    "                  |                                              |",
    "                  |                    OBRIGADO                  |",
    "                  |                   POR  JOGAR                 |",
    "                  |                                              |",
    "                  |                 ATE  A PROXIMA               |",
    "                  |                                              |",
    "                  |                                              |",
    "                  |                                              |",
    "                  |                                              |",
    "                  |                                              |",
    "                  |                                              |",
    "                  |                                              |",
    "                  |                                              |",
    "                  |                                              |",
    "                  |                                              |",
    "                  |                                              |",
    "                  |                                              |",
	"                  |                                              |"   
};


int positionX;
int menuOption = 1;
char key;
bool gameOver = false;
int randomPosition;
int count;
int score = 0;

int main() {
	showMenu();
	return 0;
}

void showMenu() {
	system("cls");
    for (int i = 0; i < 26; i++) {
        printf("\n");
        for (int j=0; j<66; j++){
            printf("%c", menu[i][j]);
        }
    }

	key = getch();
	
	
	switch (key) {
		case 'w':
            if(menuOption!=1){
            	menuOption--;
			}
			atualizarMenu();
            showMenu();
            break;
            
        case 's':
            if(menuOption!=4){
            	menuOption++;
			}
			atualizarMenu();
            showMenu();
            break;
            
        case '\r':
        	opcaoMenuSelecionada();
        	break;
            
        default:
            showMenu();
	}
}

void atualizarMenu(){
	for (int i=10; i<17; i++){
		menu[i][37] = ' ';
		menu[i][48] = ' ';
		i++;
	}
	
	switch (menuOption){
		case 1:
			menu[10][37] = '>';
			menu[10][48] = '<';
			break;
			
		case 2:
			menu[12][37] = '>';
			menu[12][48] = '<';
			break;
			
		case 3:
			menu[14][37] = '>';
			menu[14][48] = '<';
			break;
			
		case 4:
			menu[16][37] = '>';
			menu[16][48] = '<';
			break;
	}
}

void opcaoMenuSelecionada(){
	switch (menuOption){
		case 1:
			newGame();
			break;
			
		case 2:
			printf("recordes selecionado");
			break;
			
		case 3:
			system("cls");
			for (int i = 0; i < 26; i++) {
	        	printf("\n");
	        	for (int j=0; j<66; j++){
	           		printf("%c", creditos[i][j]);
        		}
    		}
    		key = getch();
    		showMenu();
			break;
			
		case 4:
			system("cls");
			for (int i = 0; i < 26; i++) {
	        	printf("\n");
	        	for (int j=0; j<66; j++){
	           		printf("%c", sair[i][j]);
        		}
    		}
    		sleep(5);
			system("exit");
			break;
	}
}

void newGame(){
	for (int i = 3; i < 26; i++) {
	    for (int j=19; j<65; j++){
	        board[i][j] = ' ';
        }
    }
    positionX = 42;
    board[24][positionX] = '\x06';
    board[25][positionX] = '|';
    board[25][positionX-1] = '/';
    board[25][positionX+1] = '\\';
    gameOver = false;
    
    while (!gameOver){
    	system("cls");
    	for (int i = 0; i < 26; i++) {
        	printf("\n");
        	for (int j=0; j<66; j++){
        		if(i==0 && j == 42){
        			printf("%03d",score);
        			j=44;
				}else{
            		printf("%c", board[i][j]);
            	}
        	}
    	}
    	if(kbhit()){
    		key=getch();
    		movimentacao();
		}
		meteor();
    	usleep(100000);
	}
}

void movimentacao(){
	switch (key){
		case 'd':
			if(positionX!=63){
				board[24][positionX] = ' ';
				board[25][positionX-1] = ' ';
				positionX++;
				board[24][positionX] = '\x06';
    			board[25][positionX] = '|';
    			board[25][positionX-1] = '/';
    			board[25][positionX+1] = '\\';
			}
			break;
		
		case 'a':
			if(positionX!=20){
				board[24][positionX] = ' ';
				board[25][positionX+1] = ' ';
				positionX--;
				board[24][positionX] = '\x06';
    			board[25][positionX] = '|';
    			board[25][positionX-1] = '/';
    			board[25][positionX+1] = '\\';
			}
			break;
			
		case ' ':
			board[23][positionX] = '.';
			break;
		
		default:
			break;
	}
}

void meteor(){
	meteorMoviment();
	shotMoviment();
	
	if(count!=10){
		count++;
	} else {
		count = 0;
		srand(time(NULL));
		randomPosition = rand() % (63 - 20 + 1) + 20;
		board[3][randomPosition] = '*';
	}
} 

void meteorMoviment(){
	if(count % 2 == 0){
		for (int i = 26; i > 1; i--) {
	       	for (int j=65; j>0; j--){
	           	if (board[i][j] == '*'){
	           		if(board[i+1][j] == '.'){
	           			score+=1;
						board[i][j] = ' ';	
						board[i+1][j] = ' ';	
					} else if (i == 26 || board[i+1][j] != ' '){
	           			gameOver = true;
					} else {
						board[i][j] = ' ';	
						board[i+1][j] = '*';
					}
				}
	        }
	    }
	}
}

void shotMoviment(){
		if(count % 2 == 0){
		for (int i = 2; i < 24; i++) {
	       	for (int j=0; j < 65; j++){
	           	if (board[i][j] == '.'){
	           		if (i == 2){
	           			board[i][j] = ' ';	
					} else{
						board[i][j] = ' ';
						board[i-1][j] = '.';
					}
				}
	        }
	    }
	}	
}


