//
// Created by JOSUE DAVID on 28/09/2022.
//

#include "Intervierw.h"
#include <iostream>

Intervierw::Intervierw() {
    hired = false;
}

bool Intervierw::getHired() const{
    return hired;
}

void Intervierw::setHired(bool hired) {
    Intervierw::hired= hired;
}
