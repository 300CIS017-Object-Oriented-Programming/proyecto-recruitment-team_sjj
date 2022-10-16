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

void Sistema::InfoNacionalidadMadagascar() {
    string name = "Madagascar";
    string demonym = "Malgache";
    string eyeContact = "His communication style is direct and eye contact is limited.\n"
                        "Prolonging it is considered disrespectful";
    string touch = "the greeting between men, between women and between both,\n"
                   "consists of shaking the right hand, while the right hand\n"
                   "The left hand holds the right arm of its counterpart below the\n"
                   "elbow";
    string distanceLevel = "There is physical contact when talking and personal space is reduced,\n"
                           "even between women and men";
    bool typeExpressive = true;

    Nationality * NationalityMadagascar = new Nationality(name, demonym, typeExpressive, eyeContact, touch, distanceLevel);
    Nals.push_back(NationalityMadagascar);
}