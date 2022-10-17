//
// Created by JOSUE DAVID on 28/09/2022.
//

#ifndef PROYECTO_RECRUITMENT_TEAM_SJJ_SISTEMA_H
#define PROYECTO_RECRUITMENT_TEAM_SJJ_SISTEMA_H

#include "Nationality.h"
#include "Candidato.h"
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
    vector<Candidato*> candidate;
    void initializarDatos();

public:
    Sistema(); //Constructor
    virtual ~Sistema();//Destructor
    void agrgarCandidato();
    void InfoNacionalidad();
    void welcomeLetter();
    void interviewGuide();
};

#endif //PROYECTO_RECRUITMENT_TEAM_SJJ_SISTEMA_H
