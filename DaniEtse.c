/****************************************************
 *                  JOC del MEMORY                  *
 *                                                  *
 * Resolució parcial de l'exercici de l'EtseCode 1  *
 *                                                  *
 * (falta redimensionar la impresió del taulell per *
 * els numeros primers 23,29,31,37,41,43 i 47 i     *
 * declarar la matriu taulell com global per poder  *
 * treballar amb funcions)                          *
 *--------------------------------------------------*
 * per Dani Gonzalez                      23/6/2014 *
 ****************************************************/

#include<stdio.h>
#include<time.h>
#define ASCII 65

int main(void){

    int figura=ASCII,figura2=ASCII,X,Y,x=0,y=51,i,j,k=0,l,quantDivisions=0,quantitatParelles;
    int jugador=1, puntsJugador1=0,puntsJugador2=0,tirades=0,files,columnes,primer=0;
    srand(time(NULL));
    printf("   JOC del MEMORY\n");
    printf("   --------------\n\n\n");
    printf ("Introdueix la quantitat de parelles:\n");
    scanf("%d",&quantitatParelles);

//Optimizar mida matriu
    for(i=1;i<=quantitatParelles;i++){
        if(quantitatParelles%i==0){ // si num1 módulo de i es 0, incrementamos a en 1.
        quantDivisions++;
        }
    }
    if(quantDivisions==2||quantitatParelles==3||quantitatParelles==4){ //Si al final del bucle, la quantitat de divisions es 2, el número es primo, perque te solament 2 divisors.
        //printf("Numero primer -> %d\n",quantitatParelles);
        files=2;
        columnes=quantitatParelles;
    }
    else{
        //printf("Numero no primer -> %d\n",quantitatParelles);
        if(((quantitatParelles>5&&quantitatParelles<25)&&(quantitatParelles!=21))||(quantitatParelles==24)||(quantitatParelles==34)||(quantitatParelles==38)||(quantitatParelles==46)){
            files=4;
        }
        if((quantitatParelles==21)||(quantitatParelles==27)||(quantitatParelles==30)||(quantitatParelles==33)||(quantitatParelles==39)){
            files=6;
        }
        if((quantitatParelles==28)||(quantitatParelles==35)||(quantitatParelles==42)||(quantitatParelles==49)){
            files=7;
        }
        if((quantitatParelles==36)||(quantitatParelles==40)||(quantitatParelles==44)||(quantitatParelles==48)){
            files=8;
        }
        if(quantitatParelles==45){
            files=9;
        }
        if(quantitatParelles==50){
            files=10;
        }

    }
//calcula numero de columnes a partir de les files i les parelles
    columnes=(quantitatParelles*2)/files;

//Definir matriu
    int taulell[files][columnes];
//inicialitzar taulell a 0
    for(i=0;i<files;i++){
        for(j=0;j<columnes;j++)
            taulell[i][j]=0;
    }
//Sorteijar fugures del taulell
    for(j=0;j<quantitatParelles;j++){
        do{
            X=rand()%files;
            Y=rand()%columnes;
        }while(taulell[X][Y]!=0);
        taulell[X][Y]=figura;
        do{
            X=rand()%files;
            Y=rand()%columnes;
        }while(taulell[X][Y]!=0);
        taulell[X][Y]=figura;
    figura++;
    }
//Mostrar taulell
    system("cls");
    printf("   JOC del MEMORY\n");
    printf("   --------------\n\n\n  ");
    for(k=0;k<columnes;k++){
        if(k<10){
            printf("  %d ",k);
        }
        else{
            printf(" %d ",k);
        }
    }
    printf("\n");
    printf("  +");
    for(i=0;i<columnes*4-1;i++){
        printf("-");
    }
    printf("+");

    for(i=0;i<files;i++){
            printf("\n%d ",i);
        for(j=0;j<columnes;j++){
            printf("| %c ",taulell[i][j]);
        }
        printf("|\n  +");
        for(k=0;k<columnes*4-1;k++){
            printf("-");
        }
        printf("+");
    }

    fflush(stdin);
    printf("\n\nPica 'Enter' per ocultar les figures:\n");
    getchar();
    do{
//mostrar taulell
        system("cls");
        printf("   JOC del MEMORY\n");
        printf("   --------------\n\n\n  ");
        for(k=0;k<columnes;k++){
            if(k<10){
                printf("  %d ",k);
            }
            else{
                printf(" %d ",k);
            }
        }
        printf("\n");
        printf("  +");
    for(i=0;i<columnes*4-1;i++){
        printf("-");
    }
    printf("+");
        for(i=0;i<files;i++){
                printf("\n%d ",i);
            for(j=0;j<columnes;j++){
                if(((x==i)&&(y==j))){
                    printf("| %c ",taulell[i][j]);
                }
                else if(taulell[i][j]==32){
                    printf("|   ");
                }
                else{
                    printf("| ? ");
                }

            }
            printf("|\n  +");
            for(k=0;k<columnes*4-1;k++){
                printf("-");
            }
            printf("+");
        }
//ingresar coordenades primera figura
        printf("\n\n");
        do{
            printf("jugador %d, selecciona una parella (X-Y):\n",jugador);
            do{
                fflush(stdin);
                printf("Coordenada 'X' de la primeraa figura?\n");
                scanf("%d",&X);
            }while(X<0||X>1);
            do{
                fflush(stdin);
                printf("Coordenada 'Y' de la primera figura?\n");
                scanf("%d",&Y);
            }while(Y<0&&Y>columnes);
        }while(taulell[X][Y]==32);

//mostrar taulell
        system("cls");
        printf("   JOC del MEMORY\n");
        printf("   --------------\n\n\n  ");
        for(k=0;k<columnes;k++){
            if(k<10){
                printf("  %d ",k);
            }
            else{
                printf(" %d ",k);
            }
        }
        printf("\n");
        printf("  +");
        for(i=0;i<columnes*4-1;i++){
            printf("-");
        }
        printf("+");
        for(i=0;i<files;i++){
                printf("\n%d ",i);
            for(j=0;j<columnes;j++){
                if(((X==i)&&(Y==j))){
                    printf("| %c ",taulell[i][j]);
                }
                else if(taulell[i][j]==32){
                    printf("|   ");
                }
                else{
                    printf("| ? ");
                }
            }
            printf("|\n  +");
            for(k=0;k<columnes*4-1;k++){
                printf("-");
            }
            printf("+");
        }
        printf("\n\n");
        fflush(stdin);
        printf("Enter per a continuar");
        getchar();
//ingresar coordenades segona figura
        printf("\n\n");
        do{
            printf("jugador %d, selecciona una parella (X-Y):\n",jugador);
            do{
                fflush(stdin);
                printf("Coordenada 'X' de la segona figura?\n");
                scanf("%d",&x);
            }while(x<0||x>1);
            do{
                fflush(stdin);
                printf("Coordenada 'Y' de la segona figura?\n");
                scanf("%d",&y);
            }while(y<0&&y>columnes);
        }while(taulell[x][y]==32);

//mostrar taulell
        system("cls");
        printf("   JOC del MEMORY\n");
        printf("   --------------\n\n\n  ");
        for(k=0;k<columnes;k++){
            if(k<10){
                printf("  %d ",k);
            }
            else{
                printf(" %d ",k);
            }
        }
        printf("\n");
        printf("  +");
        for(i=0;i<columnes*4-1;i++){
            printf("-");
        }
        printf("+");
        for(i=0;i<files;i++){
                printf("\n%d ",i);
            for(j=0;j<columnes;j++){
                if((X==i)&&(Y==j)||(x==i)&&(y==j)){
                    printf("| %c ",taulell[i][j]);
                }
                else if(taulell[i][j]==32){
                    printf("|   ");
                }
                else{
                    printf("| ? ");
                }
            }
            printf("|\n  +");
            for(k=0;k<columnes*4-1;k++){
                printf("-");
            }
            printf("+");
        }
        printf("\n\n");
        fflush(stdin);
        printf("Enter per a continuar");
        getchar();
        if(taulell[X][Y]==taulell[x][y]){
            printf("Jugador %d as trobat una parella!",jugador);
            getchar();
            taulell[X][Y]=32;
            taulell[x][y]=32;
            if(jugador==1){
                puntsJugador1++;
                tirades++;
            }
            else{
                puntsJugador2++;
                tirades++;
            }
        }
        else{
            X=51;
            x=51;
            if(jugador==1){
                jugador=2;
            }
            else{
                jugador=1;
            }
        }
        if(puntsJugador1>puntsJugador2){
                printf("\n\nFELICITACIONS Jugador 1!, \nHAS GUANYAT LA PARTIDA!!!\n\n");
        }
        else if(puntsJugador1==puntsJugador2){
            printf("\n\nHeu empatat!!!\n\n");
        }
        else{
            printf("\n\nFELICITACIONS Jugador 2!, \nHAS GUANYAT LA PARTIDA!!!\n\n");
        }
    }while(tirades<quantitatParelles);
    return 0;
}
