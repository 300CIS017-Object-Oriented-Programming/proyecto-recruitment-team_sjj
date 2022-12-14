//
// Created by JOSUE DAVID on 28/09/2022.
//

#include "Sistema.h"
#include <string.h>
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
    string resume;
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
        if (nationality < 1 || nationality > 3)
            cout << "Please, select a valid option." << endl;
    } while (nationality < 1 || nationality > 3);

    candidateProfile = new Candidato(name, age, urlLinkedIn, urlGitHub, numPassport, 
        getNationalities()[nationality-1]);

    candidates.push_back(candidateProfile);


    /*Recorremos el vector para poder acceder a la información en la posición en la que la está guardando dependiendo del nuemro que
    digite el usuario.*/
    if (nationality = 1){
        for (int i = 0; i < nationalities.size(); i++){
            if(nationalities[i]->getName() == "Gales"){
                nationalities[i]->mostrarDatos();
            }
        }
    }
    else if(nationality = 2){
        for (int i = 0; i < nationalities.size(); i++){
            if(nationalities[i]->getName() == "Madagascar"){
                nationalities[i]->mostrarDatos();
            }
        }
    }
    else {
        for (int i = 0; i < nationalities.size(); i++){
            if(nationalities[i]->getName() == "Lebanon"){
                nationalities[i]->mostrarDatos();
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
    nationalities.push_back(nationalityGales);

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
    nationalities.push_back(NationalityMadagascar);

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
    nationalities.push_back(nationalityLebanon);

}

void Sistema::scheduleInterview(){
    int opt, i, j;
    string candidate = "";
    fflush(stdin); cout << "Write the name of the candidate for set an interview: " << endl; getline(cin,candidate);
    for (i = 0; i < candidates.size(); i++){
        if(candidates[i]->getName() == candidate){
            break;
        } else
            if(i == candidates.size()){
                cout << "Candidate not found" << endl;
                return;
            }
    }
    for (j = 0; j < interviews.size(); j++){
        if(interviews[j]->getCandidato()->getName() == candidates[i]->getName()){
            do {
                cout << "The candidate already has an interview date, replace it?" << endl;
                cout << "  1. Yes" << endl;
                cout << "  2. No" << endl;
                cin >> opt;
                if (opt != 1 && opt != 2)
                    cout << "Please, select a valid option." << endl;
            } while (opt != 1 && opt != 2);
            if(opt == 2)
                return;
            break;
        }
    }
    Interview * interview = new Interview();
    interviews.push_back(interview);
    if(j == interviews.size() - 1)
        j++;
    cout << "Set year for the interview: " << endl;
    cin >> *interviews[j]->getDate()[0];
        do{
            cout << "Set month for the interview: " << endl;
            cin >> *interviews[j]->getDate()[1];
            if(*interviews[j]->getDate()[1] > 12 || *interviews[j]->getDate()[1] < 1)
                cout << "Invalid month" << endl;
        } while(*interviews[j]->getDate()[1] <= 12 || *interviews[j]->getDate()[1] >= 1);
        do{
            cout << "Set day for the interview: " << endl;
            cin >> *interviews[j]->getDate()[2];
            if(*interviews[j]->getDate()[2] > 31 || *interviews[j]->getDate()[2] < 1)
                cout << "Invalid day" << endl;
        } while(*interviews[j]->getDate()[2] <= 31 || *interviews[j]->getDate()[2] >= 1);
        do{
            cout << "Set hour for the interview: " << endl;
            cin >> *interviews[j]->getDate()[3];
            if(*interviews[j]->getDate()[3] > 24 || *interviews[j]->getDate()[3] < 1)
                cout << "Invalid hour" << endl;
        } while(*interviews[j]->getDate()[3] <= 23 || *interviews[j]->getDate()[3] >= 1);
        do{
            cout << "Set minute for the interview: " << endl;
            cin >> *interviews[j]->getDate()[4];
            if(*interviews[j]->getDate()[4] > 59 || *interviews[j]->getDate()[4] < 1)
                cout << "Invalid minute" << endl;
        } while(*interviews[j]->getDate()[4] <= 59 || *interviews[j]->getDate()[4] >= 1);
    cout << "Interviews's date correctly scheduled" << endl;
}

void Sistema::interviewGuide(){
    int opt, i;
    string candidate = "";
    fflush(stdin); cout << "Write the name of the candidate for look for a guide: " << endl; getline(cin,candidate);
    for (i = 0; i < candidates.size(); i++){
        if(candidates[i]->getName() == candidate){
            break;
        } else
            if(i == candidates.size()){
                cout << "Candidate not found" << endl;
                return;
            }
    }
    for(int j = 0; j < interviews.size(); j++)
        if(interviews[j]->getCandidato()->getName() == candidates[i]->getName()){
            cout << "Date of the interview: " << interviews[j]->getDate()[0] << "/" 
            << interviews[j]->getDate()[1] << "/" << interviews[j]->getDate()[2] << " " 
            << interviews[j]->getDate()[3] << ":" << interviews[j]->getDate()[4];
        } else{
            cout << "Not scheduled interview" << endl;
        }
    cout << "Personal data:" << endl;
    cout << "   Name: " << candidates[i]->getName() << endl;
    cout << "   Age: " << candidates[i]->getAge() << endl;
    cout << "   Correo: " << candidates[i]->getCorreo() << endl;
    cout << "   LinkedIn url: " << candidates[i]->getUrlLinkedIn() << endl;
    cout << "   GitHub url: " << candidates[i]->getUrlGitHub() << endl;
    cout << "   Passport num: " << candidates[i]->getNumPassport() << endl;
    cout << "   Aspirated position: " << candidates[i]->getPosition() << endl;
    cout << "   Nationality: " << candidates[i]->getNationality()->getName() << endl;
    cout << "Country of origin information:" << endl;
    cout << "   Demonym: " << candidates[i]->getNationality()->getDemonym() << endl;
    if( candidates[i]->getNationality()->isTypeExpressive() )
        cout << "   Is expressive?: " << "Yes" << endl;
    else
        cout << "   Is expressive?: " << "No" << endl;
    cout << "   Eye contact: " << candidates[i]->getNationality()->getEyeContact() << endl;
    cout << "   Touching: " << candidates[i]->getNationality()->getTouch() << endl;
    cout << "   Distance level: " << candidates[i]->getNationality()->getDistanceLevel() << endl;
    cout << "Country of origin holiday:" << endl;
    for(i = 0; i <= candidates[i]->getNationality()->getHolidays().size(); i ++){
        cout << "   Name: " << candidates[i]->getNationality()->getHolidays()[i]->getName() << endl;
        cout << "   Description: " << candidates[i]->getNationality()->getHolidays()[i]->getName() << endl;
    }
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

const vector<Nationality*> &Sistema::getNationalities() const {
    return nationalities;
}
const vector<Candidato*> &Sistema::getCandidates() const {
    return candidates;
}
const vector<Interview*> &Sistema::getInterviews() const {
    return interviews;
}