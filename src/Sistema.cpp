//
// Created by JOSUE DAVID on 28/09/2022.
//

#include "Sistema.h"
#include <fstream>
#include <stdlib.h>
#include <iostream>

using namespace std;
//Función donde los reclutadores podrán utilizarla para crear candidatos con todos los atributos deseados y gurdarlos.
void Sistema::addCandidate() {
    string name;
    int age;
    string correo;
    string urlLinkedIn;
    string urlGitHub;
    int numPassport;
    string position;
    int nationality;
    string resum;
    Candidato * candidateProfile;

    //Pedimos los datos del candidato y los metemos en un vector para poder acceder más fácil a ellos.
    fflush(stdin); cout << "Enter your name: " << endl; getline(cin,name);
    cout << "Enter your age: " << endl; cin >> age;
    fflush(stdin); cout << "Enter your email: " << endl; getline(cin, correo);
    fflush(stdin); cout << "Enter your urlLinkedIn: " << endl; getline(cin, urlLinkedIn);
    fflush(stdin); cout << "Enter your urlGithub: " << endl; getline(cin, urlGitHub);
    cout << "Enter your passport number: " << endl; cin >> numPassport;
    do {
        cout << "Choose your nationality:" << endl;
        cout << "  1. Gales" << endl;
        cout << "  2. Madagascar" << endl;
        cout << "  3. Lebanon" << endl;
        cin >> nationality;
        if (nationality < 1 or nationality > 3)
            cout << "Please, select a valid option." << endl;
    } while (nationality < 1 or nationality > 3);

    candidateProfile = new Candidato(name, age, urlLinkedIn, urlGitHub, numPassport, nationality);
    candidate.push_back(candidateProfile);

    /*Recorremos el vector para poder acceder a la información en la posición en la que la está guardando dependiendo del nuemro que
    digite el usuario.*/
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
            if(Nals[i]->getName() == "Lebanon"){
                Nals[i]->mostrarDatos();
            }
        }
    }

}

/* Estas funciones se implementa para poder guardar la información de cada pais elegido por los miembros del equipo.
 Para poder guradar toda la informacion se crea un vector.*/
void Sistema::infoNacionalidad() {
    string name = "Wales";
    string demonym = "Welsh";
    string eyeContact = "They maintains a good eye contact at the star and ending of the meeting";
    string touch = "They only shake their hands";
    string distanceLevel = "They usually maintanis certenly distance between people they meet recently";
    bool typeExpressive = true;

    auto * nationalityGales = new Nationality(name, demonym, typeExpressive, eyeContact, touch, distanceLevel);
    Nals.push_back(nationalityGales);

    string name2 = "Madagascar";
    string demonym2 = "Malagasy";
    string eyeContact2 = "His communication style is direct and eye contact is limited.\n"
                        "Prolonging it is considered disrespectful";
    string touch2 = "the greeting between men, between women and between both,\n"
                   "consists of shaking the right hand, while the right hand\n"
                   "The left hand holds the right arm of its counterpart below the\n"
                   "elbow";
    string distanceLevel2 = "There is physical contact when talking and personal space is reduced,\n"
                           "even between women and men";
    bool typeExpressive2 = true;

    auto * NationalityMadagascar = new Nationality(name2, demonym2, typeExpressive2, eyeContact2, touch2, distanceLevel2);
    Nals.push_back(NationalityMadagascar);

    string name3 = "Lebanon";
    string demonym3 = "Lebanese";
    string eyeContact3 = "The Lebanese maintain eye contact during interactions, but not for long durations of time. " 
                         "It is important to meet their gaze in order to indicate sincerity and engagement.\n";

    string touch3 = "The Lebanese are generally very tactile people when surrounded by their friends and family. " 
                    "People often hug and kiss one another and walk hand in hand or with linked arms. "
                    "However, public displays of affection between people of the opposite gender may be disapproved " 
                    "of in some places.\n";
    string distanceLevel3 = "Some Lebanese may stand at proximities that Westerners are uncomfortable with. In this case, "
                            "keep in mind that they may not have been made aware of the Australian standard of personal "
                            "space and the awkwardness standing in someone else’s personal space can create.\n";

    bool typeExpressive3 = true;

    auto * nationalityLebanon = new Nationality(name3, demonym3, typeExpressive3, eyeContact3, touch3, distanceLevel3);
    Nals.push_back(nationalityLebanon);

}

void Sistema::scheduleInterview(){

}

void Sistema::judgeInterview(){

}

void Sistema::interviewGuide(){

}

void Sistema::createAprovalLetter(){
    int opc1;
    ifstream archivo;
    string texto;
    cout<<"Does the user pass the tests? 1.Yes/2.No"<<endl; cin>>opc1;
    if(opc1=1){
        archivo.open("Welcome Letter.txt", ios::in);//se abre el archivo en modo lectura
        if(archivo.fail()){
            cout<<"could not open the file";
            exit(1);
        }
        while(!archivo.eof()){//mientras no sea el final del archivo
            getline(archivo,texto);
            cout<<texto<<endl;
        }
        archivo.close();//se cierra el archivo
    }else{
        exit(1);
    }
}

//Esta función nos ayuda a crear un archivo donde se guardaran todos los datos del candidato y el estado de la entrevista.
/*
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
                if (candidate[i]->getName() == name) {

                }
                archivo << "The candidate's name is: " <<
            }
        }

        archivo.close(); //Cerramos el archivo

}
 */