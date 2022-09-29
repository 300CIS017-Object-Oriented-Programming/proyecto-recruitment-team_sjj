//
// Created by JOSUE DAVID on 28/09/2022.
//

#ifndef PROYECTO_RECRUITMENT_TEAM_SJJ_INTERVIERW_H
#define PROYECTO_RECRUITMENT_TEAM_SJJ_INTERVIERW_H

using std::cin;
using std::cout;
using std::string;
using std::vector;

class Intervierw {
private:
    vector<Candidato*> CandidateProfile;
    vector<int>date;
    bool hired;
public:
    Intervierw();
    ~Intervierw();

    bool &getHired() const;
    void setHired(bool hired);

    void mostrarDatos();
};


#endif //PROYECTO_RECRUITMENT_TEAM_SJJ_INTERVIERW_H
