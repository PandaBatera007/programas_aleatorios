#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#define PI 3.141592

int main(){
    setlocale(LC_ALL, "Portuguese");

    float raio, volume, altura;

    printf("Qual � a Altura do Cilindro? ");
    scanf("%f", &altura);

    printf("Qual � o raio do Cilindro? ");
    scanf("%f", &raio);

    volume = PI * pow(raio,2) * altura;

    printf("A Volume do Cilindro �: %.2f\n\n", volume);


    system("pause");
    return 0;
}
