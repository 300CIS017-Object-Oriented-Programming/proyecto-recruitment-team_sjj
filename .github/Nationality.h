//
// Created by Pipe on 28/09/2022.
//
#ifndef GITHUB_NATIONALITY_H
#define GITHUB_NATIONALITY_H

#include <iostream>

using std::vector;
using std::endl;
using std::cin;
using std::cout;

class Nacionality {

private:
    string name;
    string demonym;
    bool typeExpressive;
    string eyeContact;
    string touch;
    string distanceLevel;
    //comunication style;
    //vector<NationalHolidays*> natHd;

public:
    Nacionality();
    ~Nacionality();

    void setName(const string &name);
    void setDemonym(const string &demonym);
    void setTypeExpressive(bool typeExpressive);
    void setEyeContact(const string &eyeContact);
    void setTouch(const string &touch);
    void setDistanceLevel(const string &distanceLevel);

    const string &getName() const;
    const string &getDemonym() const;
    bool isTypeExpressive() const;
    const string &getEyeContact() const;
    const string &getTouch() const;
    const string &getDistanceLevel() const;

    Nacionality(string name, string demonym, bool typeExpressive, string eyeContact, sring touch, string distanceLevel);

};

#endif