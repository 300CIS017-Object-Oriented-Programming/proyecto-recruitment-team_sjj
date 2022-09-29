//
// Created by JOSUE DAVID on 28/09/2022.
//

#ifndef PROYECTO_RECRUITMENT_TEAM_SJJ_CANDIDATO_H
#define PROYECTO_RECRUITMENT_TEAM_SJJ_CANDIDATO_H

class Candidato {
private:
    string name;
    int age;
    string position;
    string nationality;
    string resum;
public:
    Candidato(); //constructor
    ~Candidato(); //destructor
    const string &getName() const;
    int &getAge() const;
    const string &getPosition() const;
    const string &getNationality() const;
    const string &getResum() const;

    void setName(const string name);
    void setAge(int age);
    void setPosition(const string position);
    void setNationality(const string nationality);
    void setResum(const string resum);

    void mostrarDatos();
};
#endif //PROYECTO_RECRUITMENT_TEAM_SJJ_CANDIDATO_H
