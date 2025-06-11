#include <stdio.h>
 
int main() {
//Mover bispo 5 casas diagonal cima direita.
int i=1;
printf ("BISPO:\n");
while (i<=5){
    printf ("Direita cima\n");
    i++;
}

//Mover rainha 8 casas para esquerda 
int j=1;
printf("RAINHA:\n");
do {
    printf("Esquerda\n");
    j++;
}while (j<=8);


//Mover torre 5 casas para direita
printf ("TORRE:\n");
for (int k=1;k<=5;k++){
    printf ("Direita\n");
}


//Mover cavalo 2 casas para baixo e 1 para esquerda
int cavalo=1;

printf ("CAVALO:\n");
while (cavalo--)
{
    for (int l=0; l<2;l++){
        printf ("Baixo\n");
    }
    printf ("Esquerda\n");
}

}
