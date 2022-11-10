//
// Created by Pipe on 29/09/2022.
//
#ifndef GITHUB_NATIONALHOLIDAYS_H
#define GITHUB_NATIONALHOLIDAYS_H

#include <iostream>
#include <string>
#include <vector>

using std::string;
using std::vector;
using std::endl;
using std::cin;
using std::cout;

class NationalHolidays {
private:
    string name;
    string description;
    vector<int> startDate;
    vector<int> endDate;
    void inicializarDatos();

public:
    NationalHolidays();//Constructor
    ~NationalHolidays();//Destructor

    void mostrarDatos();

    void setName(const string &name);
    void setDescription(const string &description);
    NationalHolidays(string name, string description);

    const string &getName() const;
    const string &getDescription() const;


};

#endif //GITHUB_NATIONALHOLIDAYS_H