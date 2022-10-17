//
// Created by Pipe on 29/09/2022.
//

#include "NationalHolidays.h"
#include <iostream>

NationalHolidays::NationalHolidays() {
    name = "";
    description = "";
    //inicializarDatos();
}

void NationalHolidays::setName(const string &name) {
    NationalHolidays::name = name;
}

const string &NationalHolidays::getName() const {
    return name;
}

void NationalHolidays::setDescription(const string &description) {
    NationalHolidays::description = description;
}

const string &NationalHolidays::getDescription() const {
    return description;
}

NationalHolidays::NationalHolidays(string name, string description) : name(name), description(description) {

}