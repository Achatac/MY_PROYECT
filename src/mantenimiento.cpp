#include "mantenimiento.h"
#include "globals.h"

#include <iostream>
#include <string>

using namespace std;

void pisos()
{
    do{
        cout << "======================= PISOS ========================" << endl;
        cout << " 1. Mostrar pisos" << endl;
        cout << " 2. Anadir pisos" << endl;
        cout << " 3. Eliminar pisos" << endl;
        cout << " 0. Salir" << endl;
        cout << "======================================================" << endl;
        cout << " Seleccione una opcion: "; cin >> opcion;

        switch (opcion)
        {
            case 1:
            mostrarPisos();
            break;
            case 2:
            anadirPisos();
            break;
            case 3:
            eliminarPisos();
            default:
            cout<<">>> [ OPCION NO VALIDA ] <<<" << endl;
        }
    } while (opcion != 0);
}

void habitaciones()
{
    do
    {
        cout << "=================== HABITACIONES =====================" << endl;
        cout << " 1. Mostrar habitaciones" << endl;
        cout << " 2. Anadir habitaciones" << endl;
        cout << " 3. Eliminar habitaciones" << endl;
        cout << " 0. Salir" << endl;
        cout << "======================================================" << endl;
        cout << " Seleccione una opcion: "; cin >> opcion;

        switch (opcion)
        {
            case 1:
            mostrarHabitaciones();
            break;
            case 2:
            anadirHabitaciones();
            break;
            case 3:
            eliminarHabitaciones();
            default:
            cout<<">>> [ OPCION NO VALIDA ] <<<" << endl;
        }
    } while (opcion != 0);
}

void categorias()
{
    do
    {
        cout << "===================== CATEGORIAS =====================" << endl;
        cout << " 1. Mostrar categorias" << endl;
        cout << " 2. Anadir categorias" << endl;
        cout << " 3. Eliminar categorias" << endl;
        cout << " 0. Salir" << endl;
        cout << "======================================================" << endl;
        cout << " Seleccione una opcion: "; cin >> opcion;

        switch (opcion)
        {
            case 1:
            mostrarCategorias();
            break;
            case 2:
            anadirCategorias();
            break;
            case 3:
            eliminarCategorias();
            default:
            cout<<">>> [ OPCION NO VALIDA ] <<<" << endl;
        }
    } while (opcion != 0);
}




void mostrarPisos()
{
    if (CantidadPiso >= 1)
    {
        cout << "===================== MOSTRAR PISOS =====================" << endl;
        cout << " Pisos:";
        for (int i = 0; i < CantidadPiso; i++)
        {
            cout << " Piso #" << i + 1 << endl;
        }
    }
    else 
    {
        cout << ">>> [ ANADE AL MENOS UN PISO ] <<<" << endl;
    }
}

void anadirPisos()
{
    if (CantidadPiso <= MAX_PISO)
    {
        do
        {
            cout << "===================== ANADIR PISOS =====================" << endl;
            cout << " 0 para salir" << endl;
            cout << " Cantidad de pisos a anadir: "; cin >> opcion;
            if (opcion >= 1 && opcion <= MAX_PISO - CantidadPiso)
            {
                cout << " " << opcion << " piso/s anadido/s correctamente" << endl;
                CantidadPiso += opcion;
            }
            else if (opcion == 0)
            {
                break;
            }
            else 
            {
                cout << ">>> [ OPCION NO VALIDA ] <<<" << endl;
            }
        } while ((opcion < 1 && opcion > MAX_PISO - CantidadPiso) || opcion != 0);
    }
    else 
    {
        cout << ">>> [ CANTIDAD DE PISOS MAXIMA ] <<<" << endl;
    }
}

void eliminarPisos()
{
    if (CantidadPiso >= 1)
    {
        cout << "===================== ELIMINAR PISOS =====================" << endl;
        do 
        {
            cout << " 0 para salir" << endl;
            cout << " Piso a eliminar: "; cin >> opcion;
            if (opcion >= 1 && opcion <= CantidadPiso)
            {
                cout << " Piso #" << opcion << " eliminado" << endl;
                CantidadPiso--;
                for (int i = 0; i < 50; i++)
                {
                    piso[opcion - 1].HabitacionHotel[i] = piso[opcion].HabitacionHotel[i];
                    piso[opcion - 1].CategoriaHotel[i] = piso[opcion].CategoriaHotel[i];
                    piso[opcion - 1].PrecioHotel[i] = piso[opcion].PrecioHotel[i];
                }

            }
            else if (opcion == 0)
            {
                break;
            }
            else 
            {
                cout << ">>> [ OPCION NO VALIDA ] <<<" << endl;
            }

        } while (opcion < 1 && opcion > CantidadPiso || opcion != 0);

    }
    else 
    {
        cout << ">>> [ ANADE AL MENOS UN PISO ] <<<" << endl;
    }
}


void mostrarHabitaciones()
{
    if (CantidadPiso >= 1 || CantidadPiso <= 100)
    {
        cout << "===================== MOSTRAR HABITACIONES =====================" << endl;
    }
    else 
    {
        cout << ">>> [ ANADE AL MENOS UNA HABITACION ] <<<" << endl;
    }
}

void anadirHabitaciones()
{
    if (CantidadPiso >= 1 || CantidadPiso <= 100)
    {
        do
        {
            cout << "===================== ANADIR HABITACIONES =====================" << endl;
            cout << " 0 para salir" << endl;
            cout << " Ingrese el piso: "; cin >> opcion;
            if (opcion >= 1 && opcion <= CantidadPiso)
            {
                do {
                    cout << " 0 para salir" << endl;
                    cout << " Cantidad de habitaciones: "; cin >> opcion2;
                    if (opcion2 >= 1 && opcion2 <= 50)
                    {

                    }
                    else if (opcion2 == 0)
                    {
                        break;
                    }
                    else 
                    {
                        cout << ">>> [ OPCION NO VALIDA ] <<<" << endl;
                    }
                    
                } while (opcion2 != 0);
            }
            else if (opcion == 0)
            {
                break;
            }
            else 
            {
                cout << ">>> [ OPCION NO VALIDA ] <<<" << endl;
            }
            
        } while ((opcion < 1 && opcion > CantidadPiso) || opcion != 0);

    } 
    else 
    {
        cout << ">>> [ ANADE AL MENOS UN PISO ] <<<" << endl;
    }
}

void eliminarHabitaciones()
{
    bool HayHabitacion = false;
    for (int i = 0; i < 50; i++){
        if (CantidadHabitacion[i] >= 1)
        {
            HayHabitacion = true;
            break;
        }
    }
    if (!HayHabitacion)
    {
        cout << "===================== ELIMINAR HABITACIONES =====================" << endl;
    }
    else 
    {
        cout << ">>> [ ANADE AL MENOS UNA HABITACION ] <<<" << endl;
    }
    
}


void mostrarCategorias()
{
    cout << "===================== MOSTRAR CATEGORIAS =====================" << endl;
}

void anadirCategorias()
{
    cout << "===================== MOSTRAR CATEGORIAS =====================" << endl;
}

void eliminarCategorias()
{
    cout << "===================== MOSTRAR CATEGORIAS =====================" << endl;
}


void mantenimiento()
{
	do
    {
		cout << "=================== MANTENIMIENTO ====================" << endl;
		cout << " 1. Pisos" << endl;
		cout << " 2. Habitaciones" << endl;
		cout << " 3. Categorias" << endl;
		cout << " 0. Salir" << endl;
		cout << "======================================================" << endl;
		cout << " Seleccione una opcion: ";cin >> opcion;
		
		switch(opcion)
        {
			case 1:
			pisos();
			break;
			case 2:
            habitaciones();
            break;
			case 3:
			categorias();
			break;
			default:
			cout<<">>> [ OPCION NO VALIDA ] <<<" << endl;
			break;
		}
	} while(opcion != 0);
}

//for (int i = 0; i < opcion)
    //{
        //piso[0].
        //do
        //{
            //cout << " Cantidad de habitaciones del piso ";
            //cout << "#" << contador << " : "; cin >> opcion2;
            //if (opcion2) 
        //} while ();
    //}