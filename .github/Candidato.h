//
// Created by JOSUE DAVID on 28/09/2022.
//

#ifndef PROYECTO_RECRUITMENT_TEAM_SJJ_CANDIDATO_H
#define PROYECTO_RECRUITMENT_TEAM_SJJ_CANDIDATO_H

#include <iostream>
#include <vector>

using std::string;
using std::vector;
using std::endl;
using std::cin;
using std::cout;

class Candidato {
private:
    string name;
    int age;
    string correo;
    string urlLinkedIn;
    string urlGitHub;
    int numPassport;
    string position;
    int nationality;
    string resum;
    void inicializarDatos();
public:
    Candidato(); //constructor
    ~Candidato(); //destructor

    const string &getName() const;
    int &getAge();
    const string &getCorreo() const;
    const string &getUrlLinkedIn() const;
    const string &getUrlGitHub() const;
    int &getNumPassport();
    const string &getPosition() const;
    const string &getNationality() const;
    const string &getResum() const;

    void setName(const string &name);
    void setAge(int age);
    void setCorreo(const string &correo);
    void setUrlLinkedIn(const string &urlLinkedIn);
    void setUrlGitHub(const string &urlGitHub);
    void setNumPassport(int numPassport);
    void setPosition(const string &position);
    void setNationality(const string &nationality);
    void setResum(const string &resum);

    Candidato(string name, int age, string urlLinkedIn, string urlGitHub, int numPassport, int nationality);

    void mostrarDatos();
};
#endif //PROYECTO_RECRUITMENT_TEAM_SJJ_CANDIDATO_H
