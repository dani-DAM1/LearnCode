#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#define ASCII 65

void omplirTaulell();
void mostrarTaulell();
void amagarCartes();

int main (){
int quantitatParelles,teclaInici,figura=ASCII,figura2=ASCII,X,Y,x,y,i,j;
srand(time(NULL));

printf ("Benvingut al joc 'Memory'.\n\nQuina quantitat de parelles vols?: ");
scanf ("%d",&quantitatParelles);
int taulell[2][quantitatParelles];
for(i=0;i<2;i++){
    for(j=0;j<quantitatParelles;j++){
        X=rand()%quantitatParelles;
        Y=rand()%quantitatParelles;
        taulell[X][Y]=figura;

            x=rand()%quantitatParelles;
            y=rand()%quantitatParelles;

            taulell[x][y]=figura2;
        }
        figura++;
        figura2++;

    }

//mostrarTaulell ();

    for(i=0;i<2;i++){
            printf ("\n");
        for(j=0;j<quantitatParelles;j++){
            printf ("%d ", taulell[i][j]);
        }
    }

printf ("\nPrem qualsevol tecla per amagar les cartes i comen�ar el joc\n");
getchar();

//amagarCartes();

return 0;
}


void mostrarTaulell(){
}
void amagarCartes (){
}
