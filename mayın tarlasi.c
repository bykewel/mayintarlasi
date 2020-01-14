#include<stdio.h>
#include<string.h>
#include <time.h>
#include <stdlib.h>

int main () {
	
	int i,j,satir,sutun,zorluk;
	int bom_x,bom_y;
	int exit =0;
	
	printf("Min: 10x10 -- Max: 20x20\n");
	printf("Mayin tarlasinin oynanacagi alanin satir sayisi:");
	scanf("%d",&satir);
	printf("\nMayin tarlasinin oynanacagi alanin sutun sayisi:");
	scanf("%d",&sutun);
	printf("\n");
	
	if(satir<10){
		satir =10;
	}
	if(satir>20){
		satir=20;
	}
	
	if(sutun<10){
		sutun=10;
	}
	if(sutun>20){
		sutun=20;
	}
	
	char screen[50][50];

	for(i=0;i<satir;i++){
		for(j=0;j<sutun;j++){
			screen[i][j]='#';
		}
	}
	
	char acik[50][50];
	for(i=0;i<50;i++){
		for(j=0;j<50;j++){
			acik[i][j]='#';
		}
	}
	
	
	printf("\t\t  ======= OYUN EKRANI ====== \n");
	
	for(i=0;i<=9;i++){
		printf(" %d ",i);
	}
	printf("\n");
	int score=0;
	
	for(i=0;i<satir;i++){
		for(j=0;j<sutun;j++){
			printf(" %c ",screen[i][j]);
		}
		printf("\n");
	}
	printf("\t\t\t\t\t\t\tSCORE: %d\n",score);

	printf("Zorluk seviyesini seciniz:\n");
	printf("1) 5 tane mayin (kolay) && 2) 7 tane mayin (orta) && 3) 10 tane mayin (zor)\n");
	scanf("%d",&zorluk);
	printf("\n");
	
	int x_0,x_1,x_2,x_3,x_4,x_5,x_6,x_7,x_8,x_9;
	int y_0,y_1,y_2,y_3,y_4,y_5,y_6,y_7,y_8,y_9;
	
	
	if(zorluk !=1 || zorluk !=2 || zorluk !=3){
		zorluk = rand () % 3;
	}
	
	if(zorluk == 1){
		srand(time(NULL));
		
        x_0 = rand() % satir;
        y_0 = rand() % sutun;
        
        x_1 = rand() % satir;
        y_1 = rand() % sutun;
        
        x_2 = rand() % satir;
        y_2 = rand() % sutun;
        
        x_3 = rand() % satir;
        y_3 = rand() % sutun;
        
        x_4 = rand() % satir;
        y_4 = rand() % sutun;
        
        srand(time(NULL));
        screen[x_0][y_0]='o';
        screen[x_1][y_1]='o';
        screen[x_2][y_2]='o';
        screen[x_3][y_3]='o';
        screen[x_4][y_4]='o';
        
	}
	else if (zorluk == 2){
		
		srand(time(NULL));
		
        x_0 = rand() % satir;
        y_0 = rand() % sutun;
        
        x_1 = rand() % satir;
        y_1 = rand() % sutun;
        
        x_2 = rand() % satir;
        y_2 = rand() % sutun;
        
        x_3 = rand() % satir;
        y_3 = rand() % sutun;
        
        x_4 = rand() % satir;
        y_4 = rand() % sutun;
        
        x_5 = rand() % satir;
        y_5 = rand() % sutun;
        
        x_6 = rand() % satir;
        y_6 = rand() % sutun;
        
        srand(time(NULL));
        screen[x_0][y_0]='o';
        screen[x_1][y_1]='o';
        screen[x_2][y_2]='o';
        screen[x_3][y_3]='o';
        screen[x_4][y_4]='o';
		screen[x_5][y_5]='o';
        screen[x_6][y_6]='o';
	}
	
	else if (zorluk == 3){
		
		srand(time(NULL));
		
        x_0 = rand() % satir;
        y_0 = rand() % sutun;
        
        x_1 = rand() % satir;
        y_1 = rand() % sutun;
        
        x_2 = rand() % satir;
        y_2 = rand() % sutun;
        
        x_3 = rand() % satir;
        y_3 = rand() % sutun;
        
        x_4 = rand() % satir;
        y_4 = rand() % sutun;
        
        x_5 = rand() % satir;
        y_5 = rand() % sutun;
        
        x_6 = rand() % satir;
        y_6 = rand() % sutun;
        
        x_7 = rand() % satir;
        y_7 = rand() % sutun;
        
        x_8 = rand() % satir;
        y_8 = rand() % sutun;
        
        x_9 = rand() % satir;
        y_9 = rand() % sutun;
        
        srand(time(NULL));
        screen[x_0][y_0]='o';
        screen[x_1][y_1]='o';
        screen[x_2][y_2]='o';
        screen[x_3][y_3]='o';
        screen[x_4][y_4]='o';
		screen[x_5][y_5]='o';
        screen[x_6][y_6]='o';
        screen[x_7][y_7]='o';
		screen[x_8][y_8]='o';
        screen[x_9][y_9]='o';
        
	
	}
		
	
	
	
	while(exit == 0){
		printf("\t\t  ======= OYUN EKRANI ======= \n");
	
		for(i=0;i<satir;i++){
			for(j=0;j<sutun;j++){
				printf(" %c ",acik[i][j]);
			}
			printf("\n");
		}
		
		printf("\t\t\t\t\t\t\tSCORE: %d\n",score);
		
		printf("Patlatmak istediginiz konumu seciniz:\n");
		printf("x:");
		scanf("%d",&bom_x);
		printf("\ny:");
		scanf("%d",&bom_y);
		printf("\n");
	
		while(bom_x>19 && bom_x<9 && bom_y>19 && bom_y<9){
			printf("Oyun alani disinda bir alan girdiniz.Tekrar giriniz:\n");
			printf("x:");
			scanf("%d",&bom_x);
			printf("\ny:");
			scanf("%d",&bom_y);
			printf("\n");
			
			
		}
		
		
		
		if(screen[bom_x][bom_y]!='#'){
			printf("\nMayini patlattiniz!\n");
			printf("GAME OVER!\n");
			
			exit = 1;
		for(i=0;i<satir;i++){
			for(j=0;j<sutun;j++){
				printf(" %c ",screen[i][j]);
			}
			printf("\n");
		}
			
			
		}
		else {
			
			acik[bom_x][bom_y]='1';
			score++;
		}
		
		
		
		}
		
		
		
		


	
	return 0;
}
