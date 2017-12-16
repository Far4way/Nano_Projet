#$@  	Le nom de la cible
#$< 	Le nom de la première dépendance
#$^ 	La liste des dépendances
#$* 	Le nom du fichier sans suffixe

DIRSDL=/usr
CFLAGS=-g -I$(DIRSDL)/include  -I$(DIRSDL)/include/SDL -I$(DIRSDL)/local/include/SDL -I$(DIRSDL)/local/include/SDL #-DDEBUG
LDFLAGS=-L$(DIRSDL)/lib -lSDLmain -lSDL -lSDL_ttf -lSDL_image  -lSDL_sound -lSDL_phelma -lSDL_draw -lm

SRC=allocation.c calcul_cout.c energie.c seam_carving.c supprime_colonne.c trace_chemin.c trouve_chemin.c zoomx.c  
OBJS = $(SRC:.c=.o)

TESTS_SRC=allocation_test.c energie_test.c
TESTS_EXEC=$(TESTS_SRC:.c=.o)
TESTS_EXEC=$(TESTS_SRC:.c=.exe)

allocation_test.exe:  allocation.o allocation_test.o
	gcc -o $@ $^ $(LDFLAGS) 


energie_test.exe:  energie_test.o  allocation.o energie.o
	gcc -o $@ $^ $(LDFLAGS) 
