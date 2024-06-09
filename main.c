#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <unistd.h>
#include <stdbool.h>
#include <time.h>

char tutorial[26][56] = {
    "                  |                                    |",
    "                  |                                    |",
    "                  |                                    |",
    "                  |          Galactic Blaster          |",
    "                  |                                    |",
    "                  |    A Terra corre grande perigo     |",
    "                  |  uma chuva de meteoros esta vindo  |",
    "                  |  diretamente em direcao ao planeta |",
    "                  |  cabe a voce, a ultima nave capaz  |",
    "                  |   deter os meteoritos, proteger    |",
    "                  |   as pessoas mas se somente um     |",
    "                  |   deles atravessar suas defesas    |",
    "                  |       tudo estara acabado.         |",
    "                  |                                    |",
    "                  |                                    |",
    "                  |             COMANDOS:              |",
    "                  |                                    |",
    "                  |     W/S - Interage com o menu      |",
    "                  |     A/D - Movimenta a nave         |",
    "                  |  ESPACO - Confirma selecao/Dispara |",
    "                  |                                    |",
    "                  |                                    |",
    "                  |                                    |",
    "                  |  APERTE ALGO PARA VOLTAR AO MENU   |",
    "                  |                                    |",
	"                  |                                    |"   
};

char menuDisplay[26][56] = {
    "                  |                                    |",
    "                  |                                    |",
    "                  |                                    |",
    "                  |                                    |",
    "                  |          Galactic Blaster          |",
    "                  |                                    |",
    "                  |                                    |",
    "                  |                                    |",
    "                  |                                    |",
    "                  |                                    |",
    "                  |            > NEW GAME <            |",
    "                  |                                    |",
    "                  |              RECORDES              |",
    "                  |                                    |",
    "                  |              CREDITOS              |",
    "                  |                                    |",
    "                  |                SAIR                |",
    "                  |                                    |",
    "                  |                                    |",
    "                  |                                    |",
    "                  |                                    |",
    "                  |                                    |",
    "                  |                                    |",
    "                  |                                    |",
    "                  |                                    |",
	"                  |                                    |"   
};

char boardDisplay[26][56] = {
    "                  |             SCORE:                 |",
    "                  |              TIME:                 |",
    "                  |                                    |",
    "                  |                                    |",
    "                  |                                    |",
    "                  |                                    |",
    "                  |                                    |",
    "                  |                                    |",
    "                  |                                    |",
    "                  |                                    |",
    "                  |                                    |",
    "                  |                                    |",
    "                  |                                    |",
    "                  |                                    |",
    "                  |                                    |",
    "                  |                                    |",
    "                  |                                    |",
    "                  |                                    |",
    "                  |                                    |",
    "                  |                                    |",
    "                  |                                    |",
    "                  |                                    |",
    "                  |                                    |",
    "                  |                                    |",
    "                  |                                    |",
	"                  |                                    |"   
};

char recordesDisplay[26][56] = {
    "                  |                                    |",
    "                  |------------------------------------|",
    "                  |               RECORDES             |",
    "                  |------------------------------------|",
    "                  |                                    |",
    "                  |                                    |",
    "                  |                                    |",
    "                  |                                    |",
    "                  |                                    |",
    "                  |                                    |",
    "                  |                                    |",
    "                  |                                    |",
    "                  |                                    |",
    "                  |                                    |",
    "                  |                                    |",
    "                  |                                    |",
    "                  |                                    |",
    "                  |                                    |",
    "                  |                                    |",
    "                  |                                    |",
    "                  |                                    |",
    "                  |                                    |",
    "                  |                                    |",
    "                  |                                    |",
    "                  |                                    |",
    "                  |  APERTE ALGO PARA VOLTAR AO MENU   |"  
};

char creditosDisplay[26][56] = {
    "                  |                                    |",
    "                  |                                    |",
    "                  |           DESENVOLVEDORES:         |",
    "                  |                                    |",
    "                  |                Lucas               |",
    "                  |                Veiga               |",
    "                  |                Correr              |",
    "                  |                                    |",
    "                  |                                    |",
    "                  |             GAME DESIGN:           |",
    "                  |                                    |",
    "                  |                Lucas               |",
    "                  |                Veiga               |",
    "                  |                Correr              |",
    "                  |                                    |",
    "                  |                                    |",
    "                  |        GESTORES DE QUALIDADE:      |",
    "                  |                                    |",
    "                  |                Lucas               |",
    "                  |                Veiga               |",
    "                  |                Correr              |",
    "                  |                                    |",
    "                  |                                    |",
    "                  |  APERTE ALGO PARA VOLTAR AO MENU   |",
    "                  |                                    |",
	"                  |                                    |"   
};

char sairDisplay[26][56] = {
    "                  |                                    |",
    "                  |                                    |",
    "                  |                                    |",
    "                  |                                    |",
    "                  |           Galactic Blaster         |",
    "                  |                                    |",
    "                  |                                    |",
    "                  |                                    |",
    "                  |                                    |",
    "                  |              OBRIGADO              |",
    "                  |             POR  JOGAR             |",
    "                  |                                    |",
    "                  |           ATE  A PROXIMA           |",
    "                  |                                    |",
    "                  |                                    |",
    "                  |                                    |",
    "                  |                                    |",
    "                  |                                    |",
    "                  |                                    |",
    "                  |                                    |",
    "                  |                                    |",
    "                  |                                    |",
    "                  |                                    |",
    "                  |                                    |",
    "                  |                                    |",
	"                  |                                    |"   
};

char gameOverDisplay[26][56] = {
    "                  |                                    |",
    "                  |      GGG     A   M   M  EEEE       |",
    "                  |     G       A A  MM MM  E          |",
    "                  |     G  GG  AAAAA M M M  EEE        |",
    "                  |     G   G  A   A M   M  E          |",
    "                  |      GGG   A   A M   M  EEEE       |",
    "                  |                                    |",
    "                  |      OOO   V   V  EEEE  RRRR       |",
    "                  |     O   O  V   V  E     R   R      |",
    "                  |     O   O  V   V  EEE   RRRR       |",
    "                  |     O   O   V V   E     R  R       |",
    "                  |      OOO     V    EEEE  R   R      |",
    "                  |                                    |",
    "                  |                                    |",
    "                  |               SCORE                |",
    "                  |                                    |",
    "                  |                                    |",
    "                  |     DIGITE SEU NOME (3 DIGITOS)    |",
    "                  |                                    |",
    "                  |                                    |",
    "                  |                                    |",
    "                  |                                    |",
    "                  |                                    |",
    "                  |                                    |",
    "                  |                                    |",
	"                  |                                    |"   
};


int positionX;
int menuOption = 1;
char key;
bool gameOver = false;
int randomPosition;
int count;
int score = 0;
time_t start_time, end_time;
double elapsed_time;
char nome[3];

int main() {
	intro();
	showMenu();
	return 0;
}

void intro(){
	system("cls");
	for (int i = 0; i < 26; i++) {
        printf("\n");
	    for (int j=0; j<56; j++){
		    printf("%c", tutorial[i][j]);
     	}
    }
  	key = getch();
}


void showMenu() {
	system("cls");
    for (int i = 0; i < 26; i++) {
        printf("\n");
        for (int j=0; j<56; j++){
            printf("%c", menuDisplay[i][j]);
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
            
        case ' ':
        	opcaoSelecionadaMenu();
        	break;
            
        default:
            showMenu();
	}
}

void atualizarMenu(){
	for (int i=10; i<17; i++){
		menuDisplay[i][31] = ' ';
		menuDisplay[i][42] = ' ';
		i++;
	}
	
	switch (menuOption){
		case 1:
			menuDisplay[10][31] = '>';
			menuDisplay[10][42] = '<';
			break;
			
		case 2:
			menuDisplay[12][31] = '>';
			menuDisplay[12][42] = '<';
			break;
			
		case 3:
			menuDisplay[14][31] = '>';
			menuDisplay[14][42] = '<';
			break;
			
		case 4:
			menuDisplay[16][31] = '>';
			menuDisplay[16][42] = '<';
			break;
	}
}

void opcaoSelecionadaMenu(){
	switch (menuOption){
		case 1:
			gameStart();
			showMenu(); 
			break;
			
		case 2:
			listarRecordes();
			key = getch();
			showMenu();
			break;
			
		case 3:
			system("cls");
			for (int i = 0; i < 26; i++) {
	        	printf("\n");
	        	for (int j=0; j<56; j++){
	           		printf("%c", creditosDisplay[i][j]);
        		}
    		}
    		key = getch();
    		showMenu();
			break;
			
		case 4:
			system("cls");
			for (int i = 0; i < 26; i++) {
	        	printf("\n");
	        	for (int j=0; j<56; j++){
	           		printf("%c", sairDisplay[i][j]);
        		}
    		}
    		sleep(5);
			system("exit");
			break;
	}
}

void gameStart(){
	for (int i = 3; i < 26; i++) {
	    for (int j=19; j<55; j++){
	        boardDisplay[i][j] = ' ';
        }
    }
    positionX = 37;
    boardDisplay[24][positionX] = '\x06';
    boardDisplay[25][positionX] = '|';
    boardDisplay[25][positionX-1] = '/';
    boardDisplay[25][positionX+1] = '\\';
    gameOver = false;
    start_time = time(NULL);
    score=0;
    nome[0] = '\0';
    nome[1] = '\0';
    nome[2] = '\0';
    
    while (!gameOver){
    	system("cls");
    	end_time = time(NULL);
    	elapsed_time = difftime(end_time, start_time);
    	for (int i = 0; i < 26; i++) {
        	printf("\n");
        	for (int j=0; j<56; j++){
        		if(i==0 && j == 39){
        			printf("%03d",score);
        			j=41;
				} else if (i==1 && j == 39){
        			printf("%03d", (int)elapsed_time);
        			j=41;
				} else {
            		printf("%c", boardDisplay[i][j]);
            	}
        	}
    	}
    	if(kbhit()){
    		key=getch();
    		movimentacao();
		}
		atualizarObjetos();
    	usleep(50000);
	}
	gameOverFunction();
}

void movimentacao(){
	switch (key){
		case 'd':
			if(positionX!=53){
				if (boardDisplay[24][positionX+1] != ' ' || boardDisplay[24][positionX+2] != ' '){
					gameOverFunction();
				}
				boardDisplay[24][positionX] = ' ';
				boardDisplay[25][positionX-1] = ' ';
				positionX++;
				boardDisplay[24][positionX] = '\x06';
    			boardDisplay[25][positionX] = '|';
    			boardDisplay[25][positionX-1] = '/';
    			boardDisplay[25][positionX+1] = '\\';
			}
			break;
		
		case 'a':
			if(positionX!=20){
				if (boardDisplay[24][positionX-1] != ' ' || boardDisplay[24][positionX-2] != ' '){
					gameOverFunction();
				}
				boardDisplay[24][positionX] = ' ';
				boardDisplay[25][positionX+1] = ' ';
				positionX--;
				boardDisplay[24][positionX] = '\x06';
    			boardDisplay[25][positionX] = '|';
    			boardDisplay[25][positionX-1] = '/';
    			boardDisplay[25][positionX+1] = '\\';
			}
			break;
			
		case ' ':
			boardDisplay[23][positionX] = '.';
			break;
		
		default:
			break;
	}
}

void atualizarObjetos(){
	meteorMoviment();
	shotMoviment();
	
	if(count!=15){
		count++;
	} else {
		count = 0;
		srand(time(NULL));
		randomPosition = rand() % (53 - 20 + 1) + 20;
		boardDisplay[3][randomPosition] = 'O';
	}
} 

void meteorMoviment(){
	if(count % 5 == 0){
		for (int i = 26; i > 1; i--) {
	       	for (int j=55; j>0; j--){
	           	if (boardDisplay[i][j] == 'O'){
	           		if(boardDisplay[i+1][j] == '.'){
	           			score+=1;
						boardDisplay[i][j] = ' ';	
						boardDisplay[i+1][j] = ' ';	
					} else if (i == 26 || boardDisplay[i+1][j] != ' '){
						boardDisplay[i][j] = ' ';
	           			gameOver = true;
					} else {
						boardDisplay[i][j] = ' ';	
						boardDisplay[i+1][j] = 'O';
					}
				}
	        }
	    }
	}
}

void shotMoviment(){
		if(count % 2 == 0){
		for (int i = 2; i < 24; i++) {
	       	for (int j=0; j < 55; j++){
	           	if (boardDisplay[i][j] == '.'){
	           		if(boardDisplay[i-1][j] == 'O'){
	           			score+=1;
						boardDisplay[i][j] = ' ';	
						boardDisplay[i-1][j] = ' ';
					} else if (i == 2){
	           			boardDisplay[i][j] = ' ';	
					} else{
						boardDisplay[i][j] = ' ';
						boardDisplay[i-1][j] = '.';
					}
				}
	        }
	    }
	}	
}

void gameOverFunction(){
	for(int k=0; k<4; k++){
		system("cls");
		for (int i = 0; i < 26; i++) {
	        printf("\n");
	        for (int j=0; j<56; j++){
	            printf("%c", gameOverDisplay[i][j]);
	            if(i==15 && j == 34){
	        		printf("%03d",score);
	        		j=37;
	        	}
	        	if(i==20 && j == 34){
	        		printf("%s", nome);
	        		j=34+k;
	        	}
	        	if (i==23 && j == 34){
        			printf("%03d", (int)elapsed_time);
        			j=37;
				}
	        }
		}   	
	    if(k<3){
			nome[k] = getch();
		}
	    
	}
	key = getch();
	saveRecord(); 
}
	
void saveRecord(){

	FILE *arquivo;
    char recordes[50];
    int i = 0;

    arquivo = fopen("recordes.txt", "r");

    while (i < 50 && (recordes[i] = fgetc(arquivo)) != EOF) {
        i++;
    }

    fclose(arquivo);
	
    for (int k = 3; k < 50; k+=10){
    	
	    char scoreTempString[3];
	    memcpy(scoreTempString, &recordes[k], 3);
		int scoreTempInt;
		scoreTempInt = atoi(scoreTempString);
		
		if (score > scoreTempInt) {
			
			char recordTemp[10];

		    recordTemp[0] = nome[0];
		    recordTemp[1] = nome[1];
		    recordTemp[2] = nome[2];
		
		    char scoreTemp[3];
		    snprintf(scoreTemp, sizeof(scoreTemp), "%03d", score);
		    memcpy(&recordTemp[3], scoreTemp, 3);
		
		    char timeTemp[3];
   			snprintf(timeTemp, sizeof(timeTemp), "%03d", (int)elapsed_time);
    		memcpy(&recordTemp[6], timeTemp, 3);
		
			recordTemp[9] = '\0';
			
			char recordCopy[9];
		    
		    for ( int j=k-3; j<50; j+=10){
		    	memcpy(recordCopy, &recordes[j], 9);
		    	memcpy(&recordes[j], recordTemp, 9);
		    	memcpy(recordTemp, recordCopy, 9);
			}
			k=50;	
		}
	}
	
	arquivo = fopen("recordes.txt", "w");
	fwrite(recordes, sizeof(char), strlen(recordes), arquivo);
	fclose(arquivo);	
}

void listarRecordes(){
	FILE *arquivo;
    char recordes[50];
	int i = 0;
	
    arquivo = fopen("recordes.txt", "r");
	
	while (i < 50 && (recordes[i] = fgetc(arquivo)) != EOF) {
		i++;
	}
	
	fclose(arquivo);
	    
	int k=0;
	system("cls");
    for (int i = 0; i < 26; i++) {
    	printf("\n");
	   	for (int j=0; j<56; j++){
	   		
	   		if ((i == 5 || i == 9 || i == 13 || i == 17 || i == 21) && j == 33){
	   			printf("Nome: %.*s", 3, &recordes[k]);
	   			k += 3;
	   			j = 41;
			} else if ((i == 6 || i == 10 || i == 14 || i == 18 || i == 22) && j == 32){
	   			printf("SCORE: %.*s", 3, &recordes[k]);
	   			k += 3;
	   			j = 41;
			} else if ((i == 7 || i == 11 || i == 15 || i == 19 || i == 23) && j == 33){
	   			printf("TIME: %.*s", 3, &recordes[k]);
	   			k += 4;
	   			j = 41;
			} else {
	       		printf("%c", recordesDisplay[i][j]);
	        }
       	}
    }
}