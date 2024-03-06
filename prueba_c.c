#include <stdio.h>

    #define tipoCambioDolar 7.8
    #define tipoCambioEuro 8.46

    int main () {
        int opcion;
        float cantidad;

        printf ("Bienvenido al conversor de moneda\n");
        printf ("Seleccione la opción:\n");
        printf ("1. Convertir de dólares a quetzales\n");
        printf ("2. Convertir de quetzales a dólares\n");
        printf ("3. Convertir de euros a quetzales\n");
        printf ("4. Convertir quetzales a euros\n");
        scanf ("%d", &opcion);


    switch(opcion) {
        case 1:
            printf ("Ingrese la cantidad en dólares: ");
            scanf ("%f", &cantidad);
            printf ("%.2f dólares equivale a %.2f quetzales", cantidad, cantidad * tipoCambioDolar);
            break;
        case 2:
            printf ("Ingrese la cantidad en quetzales: ");
            scanf ("%f", &cantidad);
            printf ("%.2f dólares equivale a %.2f quetzales", cantidad, cantidad / tipoCambioDolar);
            break;
        case 3:
            printf ("Ingrese la cantidad en euros: ");
            scanf ("%f", &cantidad);
            printf ("%.2f dólares equivale a %.2f quetzales", cantidad, cantidad * tipoCambioEuro);
            break;
        case 4:
            printf ("Ingrese la cantidad en quetzales: ");
            scanf ("%f", &cantidad);
            printf ("%.2f dólares equivale a %.2f quetzales", cantidad, cantidad / tipoCambioEuro);
            break;
        default:
            printf ("Ingrese una opcion valida\n");

    }

    return 0;

}