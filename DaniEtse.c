#include<stdio.h>
#include<time.h>
#define ASCII 65

int main(void){
    int quantitatParelles,figura=ASCII,figura2=ASCII,X,Y,x,y,i,j;
    srand(time(NULL));
    printf("JOC del MEMORY\n");
    printf("--------------\n\n");
    printf ("Introdueix la quantitat de parelles:\n");
    scanf("%d",&quantitatParelles);
    int taulell[2][quantitatParelles];

    for(i=0;i<2;i++){
        for(j=0;j<quantitatParelles;j++)
            taulell[i][j]=0;
    }

    for(j=0;j<quantitatParelles;j++){
        do{
            X=rand()%quantitatParelles;
            Y=rand()%quantitatParelles;
        }while(taulell[X][Y]!=0);
        taulell[X][Y]=figura;
        do{
            X=rand()%quantitatParelles;
            Y=rand()%quantitatParelles;
        }while(taulell[X][Y]!=0);
        taulell[X][Y]=figura;
    figura++;
   // figura2++;
    }
    for(i=0;i<2;i++){
        printf("\n");
        for(j=0;j<quantitatParelles;j++){
            printf("| %d ",taulell[i][j]);
        }
    }

     return 0;
}
