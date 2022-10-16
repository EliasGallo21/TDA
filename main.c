#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>
#include "vehiculos.h"

int main()
{
    /*
    VehiculoPtr v[2];
    cargarVehiculos(v,2);
    mostrarVehiculos(v,2);
    ordenarVehiculosPorPatente(v,2);
    printf("\n ------------------------------------------------ \n");
    mostrarVehiculos(v,2);
    */

    VehiculoPtr v;
    v = cargarVehiculo();

    printf("\n%s\n", getPatente(v));

    setPatente(v, "ua");

    printf("\n%s\n", getPatente(v));


    return 0;
}
