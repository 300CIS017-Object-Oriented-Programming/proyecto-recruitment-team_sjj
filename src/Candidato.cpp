//
// Created by JOSUE DAVID on 28/09/2022.
//

#include "Candidato.h"
#include <iostream>

Candidato::Candidato() {
    this->name = "";
    this->age = 0;
    this->correo = "";
    this->urlLinkedIn = "";
    this->urlGitHub = "";
    this->numPassport = 0;
    this->position = "";
    this->nationality = NULL;
    this->resum = "";
    //inicializarDatos();
}
//Función que ayuda a guardar los datos ingresados por el usuario.
void Candidato::mostrarDatos() {
    cout << "The name is: " << name << endl;
    cout << "The age is: " << age << endl;
    cout << "The mail is: " << correo << endl;
    cout << "LinkedIn url is: " << urlLinkedIn << endl;
    cout <<  "The GitHub url is:" << urlGitHub << endl;
    cout << "the passport number is: " << numPassport << endl;
    cout << "Your position is: " << position << endl;
    cout << "his nationality is: " << nationality << endl;
    cout << "abstract: " << resum << endl;
    cout << endl;
}


const string &Candidato::getName() const {
    return name;
}

void Candidato::setName(const string &name) {
    Candidato::name = name;
}

int &Candidato::getAge() {
    return age;
}

void Candidato::setAge(int age) {
    Candidato::age = age;
}

const string &Candidato::getCorreo() const {
    return correo;
}

void Candidato::setCorreo(const string &correo) {
    Candidato::correo = correo;
}

const string &Candidato::getUrlLinkedIn() const {
    return urlLinkedIn;
}

void Candidato::setUrlLinkedIn(const string &urlLinkedIn) {
    Candidato::urlLinkedIn = urlLinkedIn;
}

const string &Candidato::getUrlGitHub() const {
    return urlGitHub;
}

void Candidato::setUrlGitHub(const string &urlGithub) {
    Candidato::urlGitHub = urlGitHub;
}

int &Candidato::getNumPassport(){
    return numPassport;
}

void Candidato::setNumPassport(int numPassport) {
    Candidato::numPassport = numPassport;
}

Candidato::Candidato(string name, int age, string urlLinkedIn, string urlGitHub, int numPassport,
                     Nationality *nacionality) : name(name), age(age), urlLinkedIn(urlLinkedIn), urlGitHub(urlGitHub), numPassport(numPassport) {
    this->nationality = nacionality;
}

Nationality *Candidato::getNationality() const {
    return nationality;
}

void Candidato::setNationality(Nationality *nacionality) {
    Candidato::nationality = nacionality;
}



