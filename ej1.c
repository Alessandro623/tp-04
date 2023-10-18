#include <stdio.h>

int main(){
    int numero;
    int valor_actual = 1;
    printf("Ingrese un numero entero positivo:");
    scanf("%d", &numero);
    for (int i = 0 ; i < numero; i++)
    {
        for (int j = 0; j < numero; j++)
        {
            printf("%d ", valor_actual);
            valor_actual++;
        }
        printf("\n");
    }
    return 0;
}

// #include <stdio.h>

// int main() {
//     int n;
//     printf("Ingrese un número entero positivo n: ");
//     scanf("%d", &n);

//     int valor_actual = 1;
//     int fila_actual = 1;

//     while (fila_actual <= n) {
//         int columna_actual = 1;
//         while (columna_actual <= n) {
//             printf("%d ", valor_actual);
//             valor_actual++;
//             columna_actual++;
//         }
//         printf("\n");
//         fila_actual++;
//     }

//     return 0;
// }
