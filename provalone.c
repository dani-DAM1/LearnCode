#include <stdio.h>
#include <stdlib.h>

void mostrarTaulell();
void amagarCartes();

int main (){
int quantitatParelles,teclaInici,figura=0,i,j,X,Y;

printf ("Benvingut al joc 'Memory'.\n\nQuina quantitat de parelles vols?: ");
scanf ("%d",&quantitatParelles);
int taulell[2][quantitatParelles];
  for(i=0;i<=(quantitatParelles/2);i++){
            for(j=0;j<2;j++){
                X=rand()%quantitatParelles;
                Y=rand()%quantitatParelles;
                taulell[X][Y]=figura;
                printf ("|%d", figura);

            }
            figura++;
            printf ("\n");
    }

//mostrarTaulell ();

printf ("\nPrem qualsevol tecla per amagar les cartes i començar el joc\n");
scanf ("%d",&teclaInici);

//amagarCartes();

return 0;
}

void mostrarTaulell(){
}
void amagarCartes (){
}
