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

void Nationality::addNationalityHoliday() {
    string name = "Day of San Dwynwen";
    string description = "Maybe it's the lofty mountain views that do it, but they're a romantic bunch here!"
                         "They even have our own patron saint of lovers. Forget Valentine's Day,"
                         "January 25 is the most romantic day of the year in Wales. They give romantic gifts"
                         "to loved ones to remind them that St Dwynwen was a girl who became a nun after her father"
                         "forbade her to marry the man she loved.";
    NationalHolidays * NationalityHolidayGales = new NationalHolidays(name, description);
    natHd.push_back(NationalityHolidayGales);
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