#include <stdlib.h>
#include <stdio.h>

void omplirmatriu(){

}


int main(){
int parelles;
char teclainici;
srand(time(NULL));
printf("Digues el nombre de parelles que vols:\n");
scanf("%d",&parelles);
getchar();
int taulell[2][parelles];
omplirmatriu();
printf("Prem qualsevol tecla per iniciar el joc.\n");

getchar();
return 0;
}
