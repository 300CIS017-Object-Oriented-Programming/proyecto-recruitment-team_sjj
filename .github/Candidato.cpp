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
    nationality = "";
    resum = "";
}

void Candidato::mostrarDatos() {
    cout << "El nombre es: " << name << "\n";
    cout << "la edad es: " << age << "\n";
    cout << "El correo es: " << correo << "\n";
    cout << "la url de LinkedIn es: " << urlLinkedIn << "\n";
    cout << "la url de GitHub es: " << urlGitHub << "\n";
    cout << "el numero del pasaporte es: " << numPassport << "\n";
    cout << "Su posicion es: " << position << "\n";
    cout << "su nacionalidad es:  " << nationality << "\n";
    cout << "resumen:  " << resum << "\n";
    cout << "\n";
}


string Candidato::getName() const {
    return name;
}

void Candidato::setName(string name) {
    Candidato::name = name;
}

int Candidato::getAge() const{
    return age;
}

void Candidato::setAge(int age) {
    Candidato::age = age;
}

string Candidato::getCorreo() const {
    return correo;
}

void Candidato::setCorreo(string correo) {
    Candidato::correo = correo;
}

string Candidato::getUrlLinkedIn() const {
    return urlLinkedIn;
}

void Candidato::setUrlLinkedIn(string urlLinkedIn) {
    Candidato::urlLinkedIn = urlLinkedIn;
}

string Candidato::getUrlGitHub() const {
    return urlGitHub;
}

void Candidato::setUrlGitHub(string urlGithub) {
    Candidato::urlGitHub = urlGitHub;
}

int Candidato::getNumPassport() const{
    return numPassport;
}

void Candidato::setNumPassport(int numPassport) {
    Candidato::numPassport = numPassport;
}



