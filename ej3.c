#include <stdio.h>
int main(){
    char oracion;
    int tamanio_palabra = 0;
    int palabra_inicial = 0;
    int p_grande = 0;
    int p_chica = __INT_MAX__;
    printf("escriba su oracion terminada en un .:");
    oracion = getchar();
    while (oracion != '.')
    {
        while (oracion != ' ' && oracion != '.')
        {
            tamanio_palabra++;
            oracion = getchar();
        }
        if (tamanio_palabra > p_grande) {
            p_grande = tamanio_palabra;
        }
        if (tamanio_palabra < p_chica) {
            p_chica = tamanio_palabra;
        }
        tamanio_palabra = 0;
        oracion = getchar();
    }

    printf("palabra mas grande: %d\n", p_grande);
    printf("palabra mas chica: %d\n", p_chica);
    
    return 0;
}