//
// Created by JOSUE DAVID on 28/09/2022.
//

#include <iostream>
#include <string>
#include "Sistema.h"

using std::string;
using std::vector;
using std::endl;
using std::cin;
using std::cout;

void displayMenu(){
    cout << "\n" << "****************Welcome to ParkingSoft****************" << endl;
    cout << "Please, select an option:" << endl;
    cout << "   1. Create candidate" << endl;
    cout << "   2. Schedule interview" << endl;
    cout << "   3. Create approval letter" << endl;
    cout << "   0. Exit" << endl;
    cout << "Option: ";
}

int &inputValidation(const string &action) {
    int * opt;
    do {
        vector<string> msg{"Do", "you", "want", action + "?"};
        for (const string &word : msg){
            cout << word << " ";
        }
        cout << endl;
        cout << "  1. Yes" << endl;
        cout << "  2. No" << endl;
        cin >> *opt;
        if (*opt != 1 and *opt != 2)
            cout << "Please, select a valid option." << endl;
    } while (*opt != 1 and *opt != 2);
    return * opt;
}

void menu(Sistema &sistema){
    int opt1, opt2;
    string action;
    do{
        displayMenu();
        cin >> opt1;
        switch( opt1 ){
            case 0:
                action = "to exit";
                opt2 = inputValidation(action);
                if(opt2 == 1)
                    cout << " Thank you for using our software, " << endl;
                    system("exit");
                break;
            case 1:
                action = "to add a new candidate";
                opt2 = inputValidation(action);
                if( opt2 == 1 )
                    sistema.addCandidate();
                break;
            case 2:
                action = "to schedule an interview";
                opt2 = inputValidation(action);
                if(opt2 == 1)
                    sistema.scheduleInterview();
                break;
            case 3:
                action = "to create an approval letter?";
                opt2 = inputValidation(action);
                if(opt2 == 1)
                    sistema.createAprovalLetter();
                break;
            default:
                cout << "Please select a valid option" << endl;
        }
    } while(true);
}

int main(){
    Sistema sistema;
    menu(sistema);
    return 0;
}

