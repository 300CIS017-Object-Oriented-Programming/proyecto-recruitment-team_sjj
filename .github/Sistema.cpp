//
// Created by JOSUE DAVID on 28/09/2022.
//

#include "Sistema.h"
#include <fstream>
#include <stdlib.h>
#include <iostream>

using namespace std;

void Sistema::agrgarCandidato() {
    string name;
    int age;
    string correo;
    string urlLinkedIn;
    string urlGitHub;
    int numPassport;
    string position;
    int nationality;
    string resum;

    fflush(stdin); cout << "Enter your name: " << endl; getline(cin,name);
    cout << "Enter your age: " << endl; cin >> age;
    fflush(stdin); cout << "Enter your email: " << endl; getline(cin, correo);
    fflush(stdin); cout << "Enter your urlLinkedIn: " << endl; getline(cin, urlLinkedIn);
    fflush(stdin); cout << "Enter your urlGithub: " << endl; getline(cin, urlGitHub);
    cout << "Enter your passport number: " << endl; cin >> numPassport;
    cout << "Choose if you are from 1. Gales\t2. Madagascar\t3. dow" << endl; cin >> nationality;

    Candidato * candidateProfile = new Candidato(name, age, urlLinkedIn, urlGitHub, numPassport, nationality);
    candidate.push_back(candidateProfile);

    if (nationality = 1){
        for (int i = 0; i < Nals.size(); i++){
            if(Nals[i]->getName() == "Gales"){
                Nals[i]->mostrarDatos();
            }
        }
    }
    else if(nationality = 2){
        for (int i = 0; i < Nals.size(); i++){
            if(Nals[i]->getName() == "Madagascar"){
                Nals[i]->mostrarDatos();
            }
        }
    }
    else {
        for (int i = 0; i < Nals.size(); i++){
            if(Nals[i]->getName() == "dow"){
                Nals[i]->mostrarDatos();
            }
        }
    }

}


void Sistema::InfoNacionalidadGales() {
    string name = "Gales";
    string demonym = "Galés";
    string eyeContact = "They maintains a good eye contact at the star and ending of the meeting";
    string touch = "They only shake their hands";
    string distanceLevel = "They usually maintanis certenly distance between people they meet recently";
    bool typeExpressive = true;

    Nationality * NationalityGales = new Nationality(name, demonym, typeExpressive, eyeContact, touch, distanceLevel);
    Nals.push_back(NationalityGales);
}

void Sistema::InfoNacionalidadMadagascar() {
    string name = "Madagascar";
    string demonym = "Malgache";
    string eyeContact = "His communication style is direct and eye contact is limited.\n"
                        "Prolonging it is considered disrespectful";
    string touch = "the greeting between men, between women and between both,\n"
                   "consists of shaking the right hand, while the right hand\n"
                   "The left hand holds the right arm of its counterpart below the\n"
                   "elbow";
    string distanceLevel = "There is physical contact when talking and personal space is reduced,\n"
                           "even between women and men";
    bool typeExpressive = true;

    Nationality * NationalityMadagascar = new Nationality(name, demonym, typeExpressive, eyeContact, touch, distanceLevel);
    Nals.push_back(NationalityMadagascar);
}

void Sistema::interviewGuide() {
        string name;
        ofstream archivo;
        string nombreArchivo,frase;
        char rpt;

        cout<<"Digite el nombre del archivo: ";
        getline(cin,nombreArchivo);

        archivo.open(nombreArchivo.c_str(),ios::out); //Creamos el archivo

        if (archivo.fail()) { //Si a ocurrido algun error
            cout<<"No se pudo abrir el archivo";
            exit(1);
        }

        else {
            for (int i = 0; i < candidate.size(); i++){
                if (candidate[i]->getName() == name){

                }
                archivo << "The candidate's name is: " <<
            }
        }

        archivo.close(); //Cerramos el archivo

}