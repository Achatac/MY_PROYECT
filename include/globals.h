#ifndef GLOBALS_H 
#define GLOBALS_H 

#define MAX_PRODUCTO 100
#define MAX_ADMINISTRADOR 100
#define MAX_PISO 100
#define MAX_HUESPED 100
#define MAX_FACTURA 100

#include <string>

//administador
struct ADMINISTRADOR
{
    std:: string NombreAdministrador;
    std:: string ContrasenaAdministrador;
};

extern ADMINISTRADOR administador[MAX_ADMINISTRADOR];

extern int CantidadIntentos;

//piso
struct PISO 
{
    std:: string HabitacionHotel[100];
    std:: string CategoriaHotel[100];
    float PrecioHotel[100];
};

extern PISO piso[MAX_PISO];

extern int CantidadHabitacion[50];
extern int CantidadCategoria;
extern int CantidadPiso;

//huesped
struct HUESPED
{
    std:: string NombreHuesped;
    std:: string ApellidoHuesped;
    std:: string DNIHuesped;
    std:: string CorreoHuesped;
    std:: string NumeroHuesped;
    int PisoHuesped;
    std:: string HabitacionHuesped;
    std:: string CategoriaHuesped;
    float PrecioHuesped;
    std:: string IDHuesped;
};

extern HUESPED huesped[MAX_HUESPED];

extern int CantidadHuesped;

//producto
struct PRODUCTO
{
    std:: string NombreProducto;
    float PrecioProducto;
    std:: string IDProducto;
};

extern PRODUCTO producto[MAX_PRODUCTO];

extern int CantidadProducto;

//factura
struct FACTURA 
{  
    float PagototalHuesped;
};

extern FACTURA factura[MAX_FACTURA];

//adicionales
extern int opcion;
extern int opcion2;

#endif