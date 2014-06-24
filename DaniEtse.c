/****************************************************
 *                  JOC del MEMORY                  *
 *                                                  *
 * Resolució parcial de l'exercici de l'EtseCode 1  *
 * (falta redimensionar la impresió del taulell i   *
 * declarar la matriu taulell com global per poder  *
 * treballar amb funcions)                          *
 *--------------------------------------------------*
 * per Dani Gonzalez                      23/6/2014 *
 ****************************************************/

 #include<stdio.h>
#include<time.h>
#define ASCII 65
int taulell[2][2],quantitatParelles;

int main(void){

    int figura=ASCII,figura2=ASCII,X,Y,x=0,y=51,i,j,k=0,l,quantDivisions=0;
    int jugador=1, puntsJugador1=0,puntsJugador2=0,tirades=0;
    srand(time(NULL));
    printf("\tJOC del MEMORY\n");
    printf("\t--------------\n\n\n");
    printf ("Introdueix la quantitat de parelles:\n");
    scanf("%d",&quantitatParelles);
    int taulell[2][quantitatParelles];
//inicialitzar taulell a 0
    for(i=0;i<2;i++){
        for(j=0;j<quantitatParelles;j++)
            taulell[i][j]=0;
    }
//Sorteijar fugures del taulell
    for(j=0;j<quantitatParelles;j++){
        do{
            X=rand()%2;
            Y=rand()%quantitatParelles;
        }while(taulell[X][Y]!=0);
        taulell[X][Y]=figura;
        do{
            X=rand()%2;
            Y=rand()%quantitatParelles;
        }while(taulell[X][Y]!=0);
        taulell[X][Y]=figura;
    figura++;
    }
//Mostrar taulell
    system("cls");
    printf("\tJOC del MEMORY\n");
    printf("\t--------------\n\n\n  ");
    for(k=0;k<quantitatParelles;k++){
        if(k<10){
            printf("  %d ",k);
        }
        else{
            printf(" %d ",k);
        }
    }
    printf("\n");
    printf("  +");
    for(i=0;i<quantitatParelles*4-1;i++){
        printf("-");
    }
    printf("+");
    for(i=1;i<=quantitatParelles;i++){
        if(quantitatParelles%i==0){ // si num1 módulo de i es 0, incrementamos a en 1.
        quantDivisions++;
        }
    }
    if(quantDivisions==2||quantitatParelles==3||quantitatParelles==4){ //Si al final del bucle, la quantitat de divisions es 2, el número es primo, perque te solament 2 divisors.
        //printf("Numero primo\n");

        for(i=0;i<2;i++){
                printf("\n%d ",i);
            for(j=0;j<quantitatParelles;j++){
                printf("| %c ",taulell[i][j]);
            }
            printf("|\n  +");
            for(k=0;k<quantitatParelles*4-1;k++){
                printf("-");
            }
            printf("+");
        }
    }
    else{
        //printf("Numero no primo\n");
        for(i=0;i<2;i++){
                printf("\n%d ",i);
            for(j=0;j<quantitatParelles;j++){
                printf("| %c ",taulell[i][j]);
            }
            printf("|\n  +");
            for(k=0;k<quantitatParelles*4-1;k++){
                printf("-");
            }
            printf("+");
        }
    }
    fflush(stdin);
    printf("\n\nPica 'Enter' per ocultar les figures:\n");
    getchar();
    do{
//mostrar taulell
        system("cls");
        printf("\tJOC del MEMORY\n");
        printf("\t--------------\n\n\n  ");
        for(k=0;k<quantitatParelles;k++){
            if(k<10){
                printf("  %d ",k);
            }
            else{
                printf(" %d ",k);
            }
        }
        printf("\n");
        printf("  +");
    for(i=0;i<quantitatParelles*4-1;i++){
        printf("-");
    }
    printf("+");
        for(i=0;i<2;i++){
                printf("\n%d ",i);
            for(j=0;j<quantitatParelles;j++){
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
            for(k=0;k<quantitatParelles*4-1;k++){
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
                printf("Posició X de la primeraa figura?\n");
                scanf("%d",&X);
            }while(X<0||X>1);
            do{
                fflush(stdin);
                printf("Posició Y de la primera figura?\n");
                scanf("%d",&Y);
            }while(Y<0&&Y>quantitatParelles);
        }while(taulell[X][Y]==32);

//mostrar taulell
        system("cls");
        printf("\tJOC del MEMORY\n");
        printf("\t--------------\n\n\n  ");
        for(k=0;k<quantitatParelles;k++){
            if(k<10){
                printf("  %d ",k);
            }
            else{
                printf(" %d ",k);
            }
        }
        printf("\n");
        printf("  +");
        for(i=0;i<quantitatParelles*4-1;i++){
            printf("-");
        }
        printf("+");
        for(i=0;i<2;i++){
                printf("\n%d ",i);
            for(j=0;j<quantitatParelles;j++){
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
            for(k=0;k<quantitatParelles*4-1;k++){
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
                printf("Posició X de la segona figura?\n");
                scanf("%d",&x);
            }while(x<0||x>1);
            do{
                fflush(stdin);
                printf("Posició Y de la segona figura?\n");
                scanf("%d",&y);
            }while(y<0&&y>quantitatParelles);
        }while(taulell[x][y]==32);

//mostrar taulell
        system("cls");
        printf("\tJOC del MEMORY\n");
        printf("\t--------------\n\n\n  ");
        for(k=0;k<quantitatParelles;k++){
            if(k<10){
                printf("  %d ",k);
            }
            else{
                printf(" %d ",k);
            }
        }
        printf("\n");
        printf("  +");
        for(i=0;i<quantitatParelles*4-1;i++){
            printf("-");
        }
        printf("+");
        for(i=0;i<2;i++){
                printf("\n%d ",i);
            for(j=0;j<quantitatParelles;j++){
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
            for(k=0;k<quantitatParelles*4-1;k++){
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

