#ifndef DATA_H_INCLUDED
#define DATA_H_INCLUDED
#include "societe.h"
#include <string>
#include <vector>

// ce qu'on a essayer de faire ici c'est de cree un tableau redimmensionable avec vector, ensuite grace a ca mettre les données
vector<Societe> datas() {
    vector<Societe> liste;

    Societe wilfried;
    wilfried.ID = 1;
    wilfried.societyName = "GoldenFarm";
    wilfried.tautInteret = 0.1;
    wilfried.investMini = 35000;
    wilfried.investMaxi = 500000000;
    wilfried.anneMiniDeSortiDuMarche = 2;

    Societe Zi;
    Zi.ID = 2;
    Zi.societyName = "Zi et Frere";
    Zi.tautInteret = 0.05;
    Zi.investMini = 500000;
    Zi.investMaxi = 900000000;
    Zi.anneMiniDeSortiDuMarche = 5;

    // On ajoute dans le vecteur
    liste.push_back(wilfried);
    liste.push_back(Zi);

    return liste;
}


#endif // DATA_H_INCLUDED
