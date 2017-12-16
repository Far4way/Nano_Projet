#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <SDL_phelma.h>
#include "projet.h"

unsigned char** seam_carving(unsigned char** im, int nbcol, int nl, int nc){

    unsigned char** energ;
    unsigned int * cout_final, ** pere, * chemin;
    int i=0;

    cout_final=calloc(nc,sizeof(*cout_final));
    chemin=calloc(nl,sizeof(*chemin));

    pere = alloue_image_int(nl,nc);
    energ=alloue_image_char(nl,nc);

    for(i=0;i<nbcol;i++,nc--){

    energ=gradienty(energ, im, nl, nc);

    calcul_cout(cout_final, energ, pere, nl, nc);

    trouve_chemin(chemin, pere, cout_final, nl, nc);

    supprime_colonne( im, chemin, nl, nc);

    }

}

