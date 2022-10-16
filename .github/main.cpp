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
    cout << "   1. Create candidate\n";
    cout << "   2. schedule interview\n";
    cout << "   3. Create approval letter\n";
    cout << "   0. Back\n";
    cout << "Option: ";
    cout << "-1. Exit\n";
}
//comprobar el conflicto
void menu(Sistema & sistema){
    int opt;
    do{
        menuReclutador();
        cin >> opt;
        switch(opt)
        {
            case 0:
                break;
            case 1:
                cout<<"desea agregar un nuevo usuario 1.si/2.no?"<<endl; cin>>opc;
                if(opc=1) {
                    sistema.agrgarCandidato();
                }
                break;
            case 2:

                break;
            case 3:

                break;
            default:
                cout << "Please select a valid option\n";
        }
    } while( opt != -1);
}
