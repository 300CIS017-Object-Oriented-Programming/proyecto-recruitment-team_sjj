//
// Created by JOSUE DAVID on 28/09/2022.
//

#include <iostream>
#include "Sistema.h"

using std::cin;
using std::cout;
using std::string;

void menuReclutador(){
    cout << "\n" << "********Bienvenido a ParkingSoft********\n";
    cout << "   1. Crear candidato\n";
    cout << "   2. Programar entrevista\n";
    cout << "   3. Crear carta de aprobacion \n";
    cout << "   0. Regresar\n";
    cout << "Opción: ";
    cout << "-1. salir\n";
}

void rmenu(Sistema & sistema){
    int opt;
    do{
        printMenuReclutador();
        cin >> opt;
        switch(opt)
        {
            case 0:
                break;
            case 1:

                break;
            case 2:

                break;
            case 3:

                break;
            default:
                cout << "Por favor, seleccione una opción válida\n";
        }
    } while( opt != -1);
}
