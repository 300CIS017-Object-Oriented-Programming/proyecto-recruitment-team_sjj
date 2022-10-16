//
// Created by JOSUE DAVID on 28/09/2022.
//

#include "Candidato.h"
#include <iostream>

Candidato::Candidato() {
    name = "";
    age = 0;
    correo = "";
    urlLinkedIn = "";
    urlGitHub = "";
    numPassport = 0;
    position = "";
    nationality = 0;
    resum = "";
    inicializarDatos();
}
//Función que ayuda a guardar los datos ingresados por el usuario.
void Candidato::mostrarDatos() {
    cout << "The name is: " << name << "\n";
    cout << "The age is: " << age << "\n";
    cout << "The mail is: " << correo << "\n";
    cout << "LinkedIn url is: " << urlLinkedIn << "\n";
    cout <<  "The GitHub url is:" << urlGitHub << "\n";
    cout << "the passport number is: " << numPassport << "\n";
    cout << "Your position is: " << position << "\n";
    cout << "his nationality is: " << nationality << "\n";
    cout << "abstract: " << resum << "\n";
    cout << "\n";
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



