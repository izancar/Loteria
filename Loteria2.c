#include <stdlib.h> // llibreria estàndar
#include <stdio.h> //llibreria estàndar entrada
#include <time.h> //Acede a tiempo real del reloj para función random

void main (){

//Declaro y inicialitzo las variables numericas del usuario
int numHuma1,numHuma2, numHuma3 = 0;
//Declaro y inicializo las variables numèricas de la cpu
int numCpu1,numCpu2, numCpu3 = 0;
//Declaro y inicializo las variables tipo caracter para la respuesta usuario, seguir = s, no seguir = n
char continuar = 's';

while (continuar == 's'){

system("clear");

printf("Dona'n el primer numero\n");
scanf("%i",&numHuma1);

printf("Dona'n el segon numero\n");
scanf("%i",&numHuma2);

printf("Dona'n el tercer numero\n");
scanf("%i",&numHuma3);

time_t t;

srand((unsigned) time(&t));

//Genera un número aleatori entre 0 i 9

numCpu1 = rand() % 10;

numCpu2 = rand() % 10;

numCpu3 = rand() % 10;

//Repte;
//Comprovar si heu acertat algun número i ho dieu.
//Imprimiu els valors aleatoris que doni la màquina i els vostres.

if (numCpu1==numHuma1) {
printf("Has acertat el primer número.\n");
}
else
{ printf("No has acertat el primer número.\n");	
}

if (numCpu2==numHuma2) {
printf("Has acertat el segon número.\n");
}
else
{ printf("No has acertat el segon número.\n");	
}

if (numCpu3==numHuma3) {
printf("Has acertat el tercer número.\n");
}
else
{ printf("No has acertat el tercer número.\n");	
}

getchar();

printf("Vols tornar a executar el programa?\n");

scanf("%c",&continuar);

}

}


