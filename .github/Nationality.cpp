//
// Created by Pipe on 28/09/2022.
//
#include <iostream>
#include <string>
#include "Nationality.h"

Nationality::Nationality() {
    name = "";
    demonym = "";
    typeExpressive = false;
    eyeContact = "";
    touch = "";
    distanceLevel = "";
}
//Función que ayuda a guardar los datos ingresados por el usuario.
void Nationality::mostrarDatos(){
    cout << "The country name is: " << name << endl;
    cout << "The country demonym is: " << demonym << endl;
    cout << "the country type expression is: " << typeExpressive << endl;
    cout << "The way the country permit eye contact is: " << eyeContact << endl;
    cout << "They way they interact is: " << touch << endl;
    cout << "The distance level permit by them is: "<< distanceLevel << endl;
}
//Funciones donde se guardan los dias especiales de cada pais seleccionado por los miembros del equipo.
void Nationality::addNationalityHolidayGales() {
    string name = "Day of San Dwynwen";
    string description = "Maybe it's the lofty mountain views that do it, but they're a romantic bunch here!"
                         "They even have our own patron saint of lovers. Forget Valentine's Day,"
                         "January 25 is the most romantic day of the year in Wales. They give romantic gifts"
                         "to loved ones to remind them that St Dwynwen was a girl who became a nun after her father"
                         "forbade her to marry the man she loved.";
    NationalHolidays * NationalityHolidayGales = new NationalHolidays(name, description);
    natHd.push_back(NationalityHolidayGales);
}

void Nationality::addNationalityHolidayMadagascar() {
    string name = "christmas or krsmasy";
    string description = "In December the locals celebrate Christmas or Krsmasy in style. Christmas is for local "
                         "residents one of their most important holidays, on that day they sing hymns and organize "
                         "performances and concerts.";
    NationalHolidays * NationalityHolidayMad = new NationalHolidays(name, description);
    natHd.push_back(NationalityHolidayMad);
}

void Nationality::setName(const string &name) {
    Nationality::name = name;
}

const string &Nationality::getName() const {
    return name;
}

void Nationality::setDemonym(const string &demonym) {
    Nationality::demonym = demonym;
}

const string &Nationality::getDemonym() const {
    return demonym;
}

bool Nationality::isTypeExpressive() const {
    return typeExpressive;
}

void Nationality::setTypeExpressive(bool typeExpressive) {
    Nationality::typeExpressive = typeExpressive;
}

void Nationality::setEyeContact(const string &eyeContact) {
    Nationality::eyeContact = eyeContact;
}

const string &Nationality::getEyeContact() const {
    return eyeContact;
}

void Nationality::setTouch(const string &touch) {
    Nationality::touch = touch;
}

const string &Nationality::getTouch() const {
    return touch;
}

void Nationality::setDistanceLevel(const string &distanceLevel) {
    Nationality::distanceLevel = distanceLevel;
}

const string &Nationality::getDistanceLevel() const {
    return distanceLevel;
}