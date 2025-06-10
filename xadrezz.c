#include <stdio.h>
 
int main() {
//Mover bispo 5 casas diagonal cima direita.
int i=1;

while (i<=5){
    printf ("BISPO: Direita cima\n");
    i++;
}

//Mover rainha 8 casas para esquerda 
int o=1;

do {
    printf("RAINHA: Esquerda\n");
    o++;
}while (o<=8);


//Mover torre 5 casas para direita
for (int u=1;u<=5;u++){
    printf ("TORRE: Direita\n");
}

}