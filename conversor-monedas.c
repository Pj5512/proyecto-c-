#include <stdio.h>

int main() {
    float quetzales, dolares, euros;
    printf("Ingrese la cantidad en quetzales: ");
    scanf("%f", &quetzales);
    dolares = quetzales * 0.13;  
    euros = quetzales * 0.11;    
    printf("%.2f quetzales son %.2f dólares\n", quetzales, dolares);
    printf("%.2f quetzales son %.2f euros\n", quetzales, euros);

    return 0;
}