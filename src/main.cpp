#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>

#include "inicio.h"
#include "mantenimiento.h"
#include "gestion.h"
#include "panel.h"
#include "cafeteria.h"
#include "reportes.h"
#include "globals.h"

using namespace std;

int main()
{
    inicio();

    do
    {
        cout << "================== GESTION DE HOTEL ==================" << endl;
        cout << "======================= INICIO =======================" << endl;
        cout << " 1. Panel" << endl;
        cout << " 2. Gestion" << endl;
        cout << " 3. Mantenimiento" << endl;
        cout << " 4. Cafeteria" << endl;
        cout << " 5. Reportes" << endl;
        cout << " 0. Salir" << endl;
        cout << "======================================================" << endl;
        cout << "Seleccione una opcion:"; cin >> opcion;
    
        switch (opcion)
        {
            case 1:
            panel();
            break;
            case 2:
            gestion();
            break;
            case 3:
            mantenimiento();
            break;
            case 4:
            cafeteria();
            break;
            case 5:
            reportes();
            break;
            case 0:
            break;
            default:
            cout << ">>> [ OPCION NO VALIDA ] <<<" << endl;
        }
    } while (opcion != 0);

    return 0;
}