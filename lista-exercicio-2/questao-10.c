/**
 * Considerando a estrutura
   struct Vetor{
        float x;
        float y;
        float z; };
para representar um vetor no R3 , implemente um algoritmo que calcule a soma de dois vetores.
*/
#include <stdio.h>
#include <stdlib.h>

struct vetor{
    float x;
    float y;
    float z;
};

int main() {
    struct vetor vetor1,vetor2,vetorRes;
    
    printf(" ----- Dados Vetor 1 ----- \n");
    printf("Coordenada x: ");
    scanf("%f", &vetor1.x);
    printf("Coordenada y: ");
    scanf("%f", &vetor1.y);
    printf("Coordenada z: ");
    scanf("%f", &vetor1.z);
    
    printf("\n");
    
    printf(" ----- Dados Vetor 2 ----- \n");
    printf("Coordenada x: ");
    scanf("%f", &vetor2.x);
    printf("Coordenada y: ");
    scanf("%f", &vetor2.y);
    printf("Coordenada z: ");
    scanf("%f", &vetor2.z);
    
    printf("\n");
    
    vetorRes.x = vetor1.x + vetor2.x;
    vetorRes.y = vetor1.y + vetor2.y;
    vetorRes.z = vetor1.z + vetor2.z;
    
    printf(" ----- Dados Vetor Resultante ----- \n");
    printf("Coordenada x resultante: %.2f\n", vetorRes.x);
    printf("Coordenada y resultante: %.2f\n", vetorRes.y);
    printf("Coordenada z resultante: %.2f", vetorRes.z);
    
    return (EXIT_SUCCESS);
}
