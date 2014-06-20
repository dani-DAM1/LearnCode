#include<stdio.h>
#include<time.h>
#define ASCII 65
int main(void){

    int quantitatParelles,figura=ASCII,X,Y,x,y,i,j;
    srand(time(NULL));

    printf ("intro parelles");
    scanf("%d",&quantitatParelles);
    int taulell[2][quantitatParelles];

    for(i=0;i<2;i++){
        for(j=0;j<3;j++){
            taulell[x][y]=0;
        }
    }
    for(i=0;i<2;i++){
            for(j=0;j<=quantitatParelles;j++){
                do{
                    X=rand()%quantitatParelles-1;
                    Y=rand()%quantitatParelles-1;
                }while(taulell[X][Y]!=0);
                taulell[X][Y]=figura;
                do{
                    x=rand()%quantitatParelles;
                    y=rand()%quantitatParelles;
                }while((X==x||Y==y)&&(taulell[X][Y]!=0));
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
