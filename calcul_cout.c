#include<stdlib.h>
#include<stdio.h>
/*
Création de la fonction créant le tableau 1D cout_final et le tableau 2D pere.

*/
void calcul_cout(unsigned int* cout_final, unsigned char** energie, unsigned int** pere,int nl,int nc){

    unsigned int** cout;
    cout_final=calloc(nc,sizeof(*cout_final));

  /*  cout = alloue_image_int(nl,nc);
    pere = alloue_image_int(nl,nc);*/
    int i,j,k;



    for(i=0;i<nl;i++){
        if(i==0){
            for(j=0;j<nc;j++){
                cout[i][j]=0;
                pere[i][j]=-1;
            }
        }
        else{
            for(j=0;j<nc;j++){
                pere[i][j]=0;
                cout[i][j]=-1;
            }
        }


    }



    for(i=1;i<nl;i++){
        for(j=0;j<nc;j++){
            for(k=-1;k<2;k++){
                if( (j+k>=0) && (j+k<nc) && (cout[i][j]>(cout[i-1][j+k]+energie[i-1][j+k]))){
                    cout[i][j]=cout[i-1][j+k]+energie[i-1][j+k];
                    pere[i][j]=j+k;               }
            }
        }


    }

}
