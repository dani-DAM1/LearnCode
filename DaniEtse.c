#include<stdio.h>
#define ASCII 65
int main(void){

    int quantitatParelles,figura=ASCII,X,Y,x,y,i,j;
    srand(time(NULL));
    printf ("intro parelles");
    scanf("%d",&quantitatParelles);
    int taulell[2][quantitatParelles];

    for(i=0;i<2;i++){
        for(j=0;j<quantitatParelles;j++){
            X=rand()%quantitatParelles;
            Y=rand()%quantitatParelles;
            taulell[x][y]=figura;
            figura++;
            do{
            x=rand()%quantitatParelles;
            y=rand()%quantitatParelles;
            }while(X==x&&Y==y);
            taulell[x][y]=figura;
            figura++;
        }
    }
    for(i=0;i<2;i++){
        printf("\n");
        for(j=0;j<quantitatParelles;j++){
            printf("| %d ",taulell[i][j]);
        }
    }

}
