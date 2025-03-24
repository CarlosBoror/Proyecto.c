#include <stdio.h>

#define USD_TO_GTQ 7.75    // Tasa de cambio fija para USD a GTQ
#define EUR_TO_GTQ 8.41    // Tasa de cambio fija para EUR a GTQ
#define GTQ_TO_USD 0.129    // Tasa de cambio fija para GTQ a USD
#define GTQ_TO_EUR 0.119    // Tasa de cambio fija para GTQ a EUR

void convertir_moneda(double cantidad, int opcion);

int main() {
    double cantidad;
    int opcion;

    printf("Conversor de Monedas\n");
    printf("1. Quetzales a Dólares\n");
    printf("2. Quetzales a Euros\n");
    printf("3. Dólares a Quetzales\n");
    printf("4. Euros a Quetzales\n");
    printf("Seleccione una opción (1-4): ");
    scanf("%d", &opcion);

    printf("Ingrese la cantidad a convertir: ");
    scanf("%lf", &cantidad);

    convertir_moneda(cantidad, opcion);

    return 0;
}

void convertir_moneda(double cantidad, int opcion) {
    double resultado;

    switch(opcion) {
        case 1:
            resultado = cantidad * GTQ_TO_USD;
            printf("%.2f Quetzales son %.2f Dólares.\n", cantidad, resultado);
            break;
        case 2:
            resultado = cantidad * GTQ_TO_EUR;
            printf("%.2f Quetzales son %.2f Euros.\n", cantidad, resultado);
            break;
        case 3:
            resultado = cantidad * USD_TO_GTQ;
            printf("%.2f Dólares son %.2f Quetzales.\n", cantidad, resultado);
            break;
        case 4:
            resultado = cantidad * EUR_TO_GTQ;
            printf("%.2f Euros son %.2f Quetzales.\n", cantidad, resultado);
            break;
        default:
            printf("Opción no válida.\n");
    }
}
