//
// Created by JOSUE DAVID on 28/09/2022.
//

#ifndef PROYECTO_RECRUITMENT_TEAM_SJJ_INTERVIEW_H
#define PROYECTO_RECRUITMENT_TEAM_SJJ_INTERVIEW_H

#include <iostream>
#include <vector>
#include "Candidato.h"

using std::string;
using std::vector;
using std::endl;
using std::cin;
using std::cout;

class Interview {
private:
    Candidato * candidato;
    vector<int *> date;
    bool hired;
public:
    Interview();
    ~Interview();

    bool getHired() const;
    
    void setHired(bool hired);

    void mostrarDatos();

    const vector<int *> getDate() const;

    Candidato *getCandidato() const;
};


#endif //PROYECTO_RECRUITMENT_TEAM_SJJ_INTERVIERW_H
