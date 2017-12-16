#include <stdio.h>
#include <stdlib.h>
/* Fonctions d'allocation et de libération */
void main()
{ int nc,nl;
    scanf("%d %d",&nc,&nl);
    unsigned char** tab;
    tab =(unsigned char **)calloc(nl,sizeof(*tab)); //création du nombre de ligne
    if(tab == NULL) printf("gros caca");
    else{
        *tab = (unsigned char *)calloc(nc*nl,sizeof(**tab)); // créations des colonnes
    }
    printf(*tab);
}
