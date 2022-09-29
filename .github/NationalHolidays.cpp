//
// Created by Pipe on 29/09/2022.
//

#include "NationalHolidays.h"
#include <iostream>

NationalHolidays::NationalHolidays() {
    name = "";
    description = "";
}

void NationalHolidays::setName(const int &name) {
    NationalHolidays::name = name;
}

const string &NationalHolidays::getName() const {
    return name;
}

void NationalHolidays::setDescription(const int &description) {
    NationalHolidays::description = description;
}

const string &NationalHolidays::getDescription() const {
    return description;
}