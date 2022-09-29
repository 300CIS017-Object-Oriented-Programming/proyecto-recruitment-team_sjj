//
// Created by Pipe on 29/09/2022.
//
#ifndef GITHUB_NATIONALHOLIDAYS_H
#define GITHUB_NATIONALHOLIDAYS_H

#include <iostream>
#include <string>

class NationalHolidays {
private:
    string name;
    string description;
    vector<int> startDate;
    vector<int> endDate;

public:
    NationalHolidays();
    ~NationalHolidays();

    void setName(const string &name);
    void setDescription(const string &description);

    const string &getName() const;
    const string &getDescription() const;


};

#endif //GITHUB_NATIONALHOLIDAYS_H