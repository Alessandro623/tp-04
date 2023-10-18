#include <stdio.h>
int main(){
    int recorrido_inicial = 0,recorrido_total, carbon_incial, agua_inicial;
    float c_k_carbon = 0.3;
    float c_k_agua = 0.2;
    printf("ingrese el recorrido que hara: ");
    scanf("%d", &recorrido_total);
    printf("\ningrese el carbon con el que iniciara: ");
    scanf("%d", &carbon_incial);
    printf("\ningrese el agua con el que iniciara: ");
    scanf("%d", &agua_inicial);

    while (recorrido_inicial < recorrido_total && carbon_incial > c_k_carbon && agua_inicial > c_k_agua)
    {
        carbon_incial -= c_k_carbon;
        agua_inicial -= c_k_agua;
        recorrido_inicial++;
        printf("carbon restante en el %d kilometro\n", carbon_incial);
        printf("agua restante en el %d kilometro\n", agua_inicial);
    }

    if (recorrido_inicial == recorrido_total)
    {
        printf("el tren llego a su destino\n");
    } else if(carbon_incial <= c_k_carbon) {
        printf("el tren no llego a su destino por falta de carbon\n");
    } else {
        printf("el tren no llego a su destino por falta de agua\n");

    }
    

    printf("total de carbon: %d kilos\n", carbon_incial);
    printf("total de agua: %d litros\n", agua_inicial);
    printf("el total recorrido fue %d km", recorrido_inicial);    
    
    return 0;
}