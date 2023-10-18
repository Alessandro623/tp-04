#include <stdio.h>

int main(){
    int dinero_ingresado = 0;
    int stock_gaseosa = 1 ;
    int stock_agua = 10 ;
    int stock_energizante = 3 ;
    int eleccion_compra;
    int comprar_si_no;
    printf("Desea Comprar algo\n1:Si\n2:No\n=");
    scanf("%d", &comprar_si_no);
    while (comprar_si_no == 1)
    {
        printf("Usted Ingreso a La Maquina Expendedora\n");
        printf("----------------------------------------\n");
        printf("Ingrese el Dinero = ");
        scanf("%d", &dinero_ingresado);

        if (stock_agua > 0 || stock_gaseosa > 0 || stock_energizante > 0)
        {
            if (dinero_ingresado > 300)
            {
                printf("Que desea comprar? PRODUCTOS\n1:GASEOSA $350, %d UNIDADES\n2:AGUA $300, %d UNIDADES\n3:Energizante $600, %d UNIDADES \n=", stock_gaseosa, stock_agua, stock_energizante);
                scanf("%d", &eleccion_compra);

                switch (eleccion_compra)
                {
                case 1:
                    printf("Usted compro una Gaseosa\n");
                    stock_gaseosa--;
                    dinero_ingresado -= 350;
                    printf("Su vuelto es %d\n", dinero_ingresado);
                break;
                case 2:
                    printf("Usted compro Agua\n");
                    stock_agua--;
                    dinero_ingresado -= 300;
                    printf("Su vuelto es %d\n", dinero_ingresado);
                break;
                case 3:
                    printf("Usted compro un Energizante\n");
                    stock_energizante--;
                    dinero_ingresado -= 600;
                    printf("Su vuelto es %d\n", dinero_ingresado);
                break;
                }
            } else {
                printf("No es suficiente el Dinero");
            }
            
        } else {
            printf("La Maquina no Funciona por Falta de Stock");
            break;
        }
        printf("Desea Seguir Comprando?\n1:Si\n2:No\n=");
        scanf("%d", &comprar_si_no);
    }
    
    return 0;
}