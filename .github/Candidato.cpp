//
// Created by JOSUE DAVID on 28/09/2022.
//

#include "Candidato.h"
#include <iostream>

Candidato::Candidato() {

    name = "";
    age = 0;
    position = "";
    nationality = "";
    resum = "";
}

void Candidato::mostrarDatos() {
    cout << "El nombre es: " << name << "\n";
    cout << "la edad es: " << age << "\n";
    cout << "Su posicion es: " << position << "\n";
    cout << "su nacionalidad es:  " << nationality << "\n";
    cout << "resumen:  " << resum << "\n";
    cout << "\n";
}

