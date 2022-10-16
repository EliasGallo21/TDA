#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>
#include "vehiculos.h"

struct Vehiculo{

    char patente[8];
    int anio;
    char color[10];
    float precio;

};

VehiculoPtr cargarVehiculo(){

    VehiculoPtr v = malloc(sizeof(struct Vehiculo));

    while(validarPatente(v)==0){
    printf("Ingrese la patente del vehiculo: \n");
    fflush(stdin);
    gets(v->patente);

    validarPatente(v);

    if(validarPatente(v)==0){
        printf("PATENTE INVALIDA, PORFAVOR INGRESE UNA PATENTE EN EL FORMATO LLLNNN O LLNNNLL\n");
    }

    }
    printf("Ingrese el anio del vehiculo: \n");
    scanf("%d", &(v->anio));

    printf("Ingrese el color del vehiculo: \n");
    fflush(stdin);
    gets(v->color);

    printf("Ingrese el precio del vehiculo: \n");
    scanf("%f", &(v->precio));

    system("cls");

    return v;
};

void cargarVehiculos(VehiculoPtr v[], int t){

    for(int i=0;i<t;i++){
        v[i]=cargarVehiculo();
    }

};

void mostrarVehiculo(VehiculoPtr v){

    printf("\t CARACTERISTICAS DEL VEHICULO: \n\n");
    printf("PATENTE: %s\n", v->patente);
    printf("ANIO DEL VEHICULO: %d\n", v->anio);
    printf("COLOR DEL VEHICULO: %s\n", v->color);
    printf("PRECIO DEL VEHICULO: %.2f\n\n", v->precio);

};

void mostrarVehiculos(VehiculoPtr v[], int t){

    for(int i=0;i<t;i++){
        mostrarVehiculo(v[i]);
    }

};

int validarPatente(VehiculoPtr v){ // 0 = invalida ; 1 = valida

    int val = 0;
    char p[8];
    strcpy(p,v->patente);

    ///PATENTE LLLNNN

    if(isalpha(p[0]) && isalpha(p[1]) && isalpha(p[2]) && isdigit(p[3]) && isdigit(p[4]) && isdigit(p[5])){
        val = 1;
    }

    ///PATENTE LLNNNLL

    if(isalpha(p[0]) && isalpha(p[1]) && isdigit(p[2]) && isdigit(p[3]) && isdigit(p[4]) && isalpha(p[5]) && isalpha(p[6])){
        val = 1;
    }

    return val;
};

int buscarVehiculo(VehiculoPtr v[], int t, char p[8]){

    int posVehiculo=-1;

    for(int i=0;i<t;i++){
        if(strcmp(v[i]->patente, p) == 0){
            posVehiculo = i;
            i = 100;
        }
    }

    return posVehiculo;
};

void ordenarVehiculosPorPatente(VehiculoPtr v[], int t){
    VehiculoPtr aux;

    for(int i=0;i<t;i++){
        for(int j=0;j<t-1;j++){
            if(strcmp(v[i]->patente, v[j]->patente) < 0){
                aux = v[i];
                v[i] = v[j];
                v[j] = aux;
            }
        }
    }
}

char * getPatente(VehiculoPtr v){
    return v->patente;
};

int getAnio(VehiculoPtr v){
    return v->anio;
};

char * getColor(VehiculoPtr v){
    return v->color;
};

float getPrecio(VehiculoPtr v){
    return v->precio;
};

void setPatente(VehiculoPtr v, char p[8]){
    strcpy(v->patente,p);
};

void setAnio(VehiculoPtr v, int anio){
    v->anio = anio;
};

void setColor(VehiculoPtr v, char c[10]){
    strcpy(v->color, c);
};

void setPrecio(VehiculoPtr v, float p){
    v->precio = p;
};







































































