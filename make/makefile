jeu: main.o init.o glm.o commun.o jeu.o voiture.o objetsNiveaux.o
	gcc -o ../bin/jeu main.o init.o glm.o commun.o jeu.o voiture.o objetsNiveaux.o -I ../include -L ../lib -lmingw32 -lfreeglut -lSOIL -lopengl32 -lglu32

main.o: ../src/main.c
	gcc -o main.o -c ../src/main.c -I ../include

init.o: ../src/init.c
	gcc -o init.o -c ../src/init.c -I ../include
	
glm.o: ../src/glm.c
	gcc -o glm.o -c ../src/glm.c -I ../include	

commun.o: ../src/commun.c
	gcc -o commun.o -c ../src/commun.c -I ../include

jeu.o: ../src/jeu.c
	gcc -o jeu.o -c ../src/jeu.c -I ../include

voiture.o: ../src/voiture.c
	gcc -o voiture.o -c ../src/voiture.c -I ../include

objetsNiveaux.o: ../src/objetsNiveaux.c
	gcc -o objetsNiveaux.o -c ../src/objetsNiveaux.c -I ../include