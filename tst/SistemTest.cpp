//
// Created by Pipe on 17/10/2022.
//
#include "gtest/gtest.h"
//#include "../src/Sistema.cpp"
#include "../src/Sistema.h"


TEST(SistemTest, infoNacionalidad){
    Sistema N;
    auto * nationality = new Nationality();
    nationality->setName("Brasileño");

    EXPECT_TRUE("Brasileño");
}

TEST(SistemTest, addCandidate){
    Sistema sujetoPrueba;
    auto * candidateA = new Candidato();
    candidateA->setName("Pedro");

    EXPECT_TRUE("Pedro");

}