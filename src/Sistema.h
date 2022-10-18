//
// Created by JOSUE DAVID on 28/09/2022.
//

#ifndef PROYECTO_RECRUITMENT_TEAM_SJJ_SISTEMA_H
#define PROYECTO_RECRUITMENT_TEAM_SJJ_SISTEMA_H

#include "Nationality.h"
#include "Candidato.h"
#include "Interview.h"
#include <iostream>
#include <vector>

using std::string;
using std::vector;
using std::endl;
using std::cout;
using std::cin;

class Sistema {
private:
    vector<Nationality*> Nationalities;
    vector<Candidato*> candidates;
    vector<Interview*> interviews;
    void initializarDatos();

public:
    Sistema(); //Constructor
    virtual ~Sistema();//Destructor

    void addCandidate();
    void scheduleInterview();
    void infoNacionalidad();
    void interviewGuide();
    void createAprovalLetter();

};

#endif //PROYECTO_RECRUITMENT_TEAM_SJJ_SISTEMA_H
