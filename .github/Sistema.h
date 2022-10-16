//
// Created by JOSUE DAVID on 28/09/2022.
//

#ifndef PROYECTO_RECRUITMENT_TEAM_SJJ_SISTEMA_H
#define PROYECTO_RECRUITMENT_TEAM_SJJ_SISTEMA_H

#include "Nationality.h"
#include <iostream>
#include <vector>

using std::string;
using std::vector;
using std::endl;
using std::cout;
using std::cin;

class Sistema {
private:
    vector<Nationality*> Nals;
    void initializarDatos();

public:
    Sistema();
    virtual ~Sistema();
    void agrgarCandidato();
    void InfoNacionalidadGales();

};


#endif //PROYECTO_RECRUITMENT_TEAM_SJJ_SISTEMA_H
