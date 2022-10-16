//
// Created by JOSUE DAVID on 28/09/2022.
//

#include "Sistema.h"
#include <iostream>

void Sistema::agrgarCandidato() {

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