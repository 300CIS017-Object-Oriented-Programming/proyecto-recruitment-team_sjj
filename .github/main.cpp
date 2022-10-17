//
// Created by JOSUE DAVID on 28/09/2022.
//

#include <iostream>
#include <string>
#include "Sistema.h"

using namespace std;

void displayMenu(){
    cout << "\n" << "****************Welcome to ParkingSoft****************" << endl;
    cout << "Please, select an option:" << endl;
    cout << "   1. Create candidate" << endl;
    cout << "   2. Schedule interview" << endl;
    cout << "   3. Judge candidates" << endl;
    cout << "   4. Create approval letter" << endl;
    cout << "   0. Exit" << endl;
    cout << "Option: ";
}

void menu( Sistema & sistema ){
    int opt, opc;
    do{
        displayMenu();
        cin >> opt;
        switch( opt )
        {
            case 0:
                do{
                    cout << "Do you want to exit?" << endl;
                    cout << "  1. Yes" << endl;
                    cout << "  2. No" << endl;
                    cin >> opc;
                    if( opc != 1 and opc != 2 )
                        cout << "Please, select a valid option." << endl;
                } while( opc != 1 and opc != 2);
                if( opc == 1 )
                    cout << " Thank you for using our software, " << endl;
                    system( "exit" );
                break;
            case 1:
                do{
                    cout << "Do you want to add a new candidate?" << endl;
                    cout << "  1. Yes" << endl;
                    cout << "  2. No" << endl;
                    cin >> opc;
                    if( opc != 1 and opc != 2 )
                        cout << "Please, select a valid option." << endl;
                } while( opc != 1 and opc != 2);
                if( opc == 1 )
                    sistema.agregarCandidato();
                break;
            case 2:
                do{
                    cout << "would you like to schedule an interview?" << endl;
                    cout << "  1. Yes" << endl;
                    cout << "  2. No" << endl;
                    cin >> opc;
                    if( opc != 1 and opc != 2 )
                        cout << "Please, select a valid option." << endl;
                } while( opc != 1 and opc != 2);
                if( opc == 1 )
                    sistema.scheduleInterview();
                break;
            case 3:
                do{
                    cout << "Do you want to judge a candidate?" << endl;
                    cout << "  1. Yes" << endl;
                    cout << "  2. No" << endl;
                    cin >> opc;
                    if( opc != 1 and opc != 2 )
                        cout << "Please, select a valid option." << endl;
                } while( opc != 1 and opc != 2);
                if( opc == 1 )
                    sistema.judgeInterview();
                break;
            case 4:
                do{
                    cout << "Do you want to create an approval letter?" << endl;
                    cout << "  1. Yes" << endl;
                    cout << "  2. No" << endl;
                    cin >> opc;
                    if( opc != 1 and opc != 2 )
                        cout << "Please, select a valid option." << endl;
                } while( opc != 1 and opc != 2);
                if( opc == 1 )
                    sistema.welcomeLetter();
                break;
            default:
                cout << "Please select a valid option" << endl;
        }
    } while( true );
}

int main(){
    Sistema sistema;
    menu( sistema );
    return 0;
}

