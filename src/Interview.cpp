//
// Created by JOSUE DAVID on 28/09/2022.
//

#include "Interview.h"
#include <iostream>

Interview::Interview() {
    hired = false;
}

bool Interview::getHired() const{
    return hired;
}

void Interview::setHired(bool hired) {
    Interview::hired= hired;
}

Candidato *Interview::getCandidato() const{
    return candidato;
}

const vector<int *> Interview::getDate() const {
    return date;
}
