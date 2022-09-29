//
// Created by Pipe on 28/09/2022.
//
#include <iostream>
#include <string>
#include "Nationality.h"

Nacionality::Nacionality() {
    name = "";
    demonym = "";
    typeExpressive = false;
    eyeContact = "";
    touch = "";
    distanceLevel = "";
}

void Nacionality::setName(const string &name) {
    Nacionality::name = name;
}

const string &Nacionality::getName() const {
    return name;
}

void Nacionality::setDemonym(const string &demonym) {
    Nacionality::demonym = demonym;
}

const string &Nacionality::getDemonym() const {
    return demonym;
}

bool Nacionality::isTypeExpressive() const {
    return typeExpressive;
}

void Nacionality::setTypeExpressive(bool typeExpressive) {
    Nacionality::typeExpressive = typeExpressive;
}

void Nacionality::setEyeContact(const string &eyeContact) {
    Nacionality::eyeContact = eyeContact;
}

const string &Nacionality::getEyeContact() const {
    return eyeContact;
}

void Nacionality::setTouch(const string &touch) {
    Nacionality::touch = touch;
}

const string &Nacionality::getTouch() const {
    return touch;
}

void Nacionality::setDistanceLevel(const string &distanceLevel) {
    Nacionality::distanceLevel = distanceLevel;
}

const string &Nacionality::getDistanceLevel() const {
    return distanceLevel;
}