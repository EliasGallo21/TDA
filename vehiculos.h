#ifndef VEHICULOS_H_INCLUDED
#define VEHICULOS_H_INCLUDED
// Patente: Menos de 8 caracteres.
// Año: Mayor a 0.
// Color: Menos de 10 caracteres.
// Precio: Mayor a 0.
struct Vehiculo;

typedef struct Vehiculo * VehiculoPtr;

/// PRE: Necesita una variable de tipo VehiculoPtr para guardar el retorno.
/// POST: Devuelve un vehiculo con los datos completos.
VehiculoPtr cargarVehiculo();

/// PRE: Necesita un array de vehiculos.
/// POST: Devuelve el array de vehiculos con los datos completos.
void cargarVehiculos(VehiculoPtr v[], int t);

/// PRE: El vehiculo enviado por parametro debe estar cargado.
/// POST: Muestra por pantalla la estructura vehiculo.
void mostrarVehiculo(VehiculoPtr v);

/// PRE: El array de vehiculos enviado por parametro debe estar cargado.
/// POST: Muestra por pantalla un array de estructuras de vehiculo.
void mostrarVehiculos(VehiculoPtr v[], int t);

/// PRE: El vehiculo enviado por parametro debe tener patente cargado.
/// POST: Retorna la patente del vehiculo.
char * getPatente(VehiculoPtr v);

/// PRE: El vehiculo enviado por parametro debe tener anio cargado.
/// POST: Retorna el anio del vehiculo.
int getAnio(VehiculoPtr v);

/// PRE: El vehiculo enviado por parametro debe tener color cargado.
/// POST: Retorna el color del vehiculo.
char * getColor(VehiculoPtr v);

/// PRE: El vehiculo enviado por parametro debe tener patente.
/// POST: Retorna el precio del vehiculo.
float getPrecio(VehiculoPtr v);

/// PRE: La patente enviada por parametro debe cumplir con el formato LLLNNN o LLNNNLL.
/// POST: Modifica la patente del vehiculo.
void setPatente(VehiculoPtr v, char p[8]);

/// PRE: El año enviado por parametro debe ser mayor a 0.
/// POST: Modofica el año del vehiculo.
void setAnio(VehiculoPtr v, int anio);

/// PRE: El color enviado por parametro debe ser menor a 10 caracteres.
/// POST: Modifica el color del vehiculo.
void setColor(VehiculoPtr v, char c[10]);

/// PRE: El precio enviado por parametro debe ser mayor a 0.
/// POST: Modifica el precio del vehiculo.
void setPrecio(VehiculoPtr v, float p);

#endif // VEHICULOS_H_INCLUDED
