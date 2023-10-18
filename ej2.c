#include <stdio.h>
int main(){
    char oracion;
    int cant_a = 0,cant_e = 0,cant_o = 0;
    int total_cerradas = 0, total_abiertas = 0;
    printf("Ingrese una oracion terminada en un .:");
    oracion = getchar();
    while (oracion != '.')
    {
        switch (oracion)
        {
        case 'a': cant_a++, total_cerradas++;
        break;
        case 'e': cant_e++, total_cerradas++;
        break;
        case 'i': total_abiertas++;
        break;
        case 'o': cant_o++, total_cerradas++;
        break;
        case 'u': total_abiertas++;
        break;
        }
        oracion = getchar();
    }
    printf("La cantidad de a que se repitio es %d\n", cant_a);
    printf("La cantidad de e que se repitio es %d\n", cant_e);
    printf("La cantidad de o que se repitio es %d\n", cant_o);
    printf("La cantidad de vocales cerradas %d\n", total_cerradas);
    printf("La cantidad de vocales abierrtas %d\n", total_abiertas);
    return 0;
}