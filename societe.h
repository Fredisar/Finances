#ifndef SOCIETE_H_INCLUDED
#define SOCIETE_H_INCLUDED

#include <iostream>
#include <string>
using namespace std;
#include "data.h"
struct Societe{
    int ID;
    string societyName;
    double tautInteret;
    double investMini;
    double investMaxi;
    int anneMiniDeSortiDuMarche;
} ;

#endif // SOCIETE_H_INCLUDED
