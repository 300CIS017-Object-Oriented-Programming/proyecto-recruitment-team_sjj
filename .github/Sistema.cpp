//
// Created by JOSUE DAVID on 28/09/2022.
//

#include "Sistema.h"
#include <iostream>

void Sistema::agrgarCandidato() {
    string name;
    int age;
    string correo;
    string urlLinkedIn;
    string urlGitHub;
    int numPassport;
    string position;
    int nationality;
    string resum;

    cout << "Digite su nombre: " << endl; cin >> name;
    cout << "Digite su edad: " << endl; cin >> age;
    cout << "Digite su correo: " << endl; cin >> correo;
    cout << "Digite su urlLinkedIn: " << endl; cin >> urlLinkedIn;
    cout << "Digite su urlGithub: " << endl; cin >> urlGitHub;
    cout << "Digite si usted es de 1. Gales\t2. Madagascar\t3. dow" << endl; cin >> nationality;

    if (nationality = 1){
        for (int i = 0; i < Nals.size(); i++){
            if(Nals[i]->getName() == "Gales"){
                Nals[i]->mostrarDatos();
            }
        }
    }
    else if(nationality = 2){
        for (int i = 0; i < Nals.size(); i++){
            if(Nals[i]->getName() == "Madagascar"){
                Nals[i]->mostrarDatos();
            }
        }
    }
    else {
        for (int i = 0; i < Nals.size(); i++){
            if(Nals[i]->getName() == "dow"){
                Nals[i]->mostrarDatos();
            }
        }
    }

}

void Sistema::InfoNacionalidadGales() {
    string name = "Gales";
    string demonym = "Galés";
    string eyeContact = "They maintains a good eye contact at the star and ending of the meeting";
    string touch = "They only shake their hands";
    string distanceLevel = "They usually maintanis certenly distance between people they meet recently";
    bool typeExpressive = true;

    Nationality * NationalityGales = new Nationality(name, demonym, typeExpressive, eyeContact, touch, distanceLevel);
    Nals.push_back(NationalityGales);
}