#include <iostream>
#include "data.h"
#include "societe.h"
#include <vector>
using namespace std;



long invest(int valeur, int periode, float taux){

	long total = 0;

	for (int i = 1; i <= periode; i++){
		total += valeur;
		total = total * (1 + taux);
		cout<<"=================\n";
		cout<<"Année("<<i<<"): "<<total<<" fcfa\n";
		cout<<"=================\n";
	}

	return total;
}

void retrait(long &total, string retirer){

	if(retirer == "oui" or  retirer == "o" ){
		long sommes;
		cout<<"	entrez la somme a retirer :\n";
		cin >> sommes;
		if(sommes <= total){
			long values = total - sommes;
			cout<<"Somme_retiré: "<<sommes<<" fcfa\n";
			cout<<"Wallet_rest: "<<values<<" fcfa\n";
		}else{
			cout<<"Erreur sommes inssuffisant\n";
		}
	}else{
		cout<<"Pas de retrait aurevoir!!\n";
	}

}

int main(){


    /** \brief
     int somme, temps;
	float taux_interet;
	string retirer;

	cout<<"===========================================================\n";
	cout<<"========================================================\n";

	cout<<"entrez la somme annuel a investir : \n";
	cin>> somme;
	cout<<"=======================================\n";
	cout<<"entrez le taux d'interêt annuel : \n";
	cin>> taux_interet;
	cout<<"=======================================\n";
	cout<<"entrez la periode de l'investissement : \n";
	cin>> temps;
	cout<<"=====================================================\n";

	long result = invest(somme, temps, taux_interet);

	cout<<"Somme_Invest_Annuel: "<<somme<<" fcfa\n";
	cout<<"Temps_Invest: "<<temps<<" ans\n";
	cout<<"Taux_Intérêt_Annuel: "<<taux_interet * 100<<"%\n";
	cout<<"Somme_Total_invest: "<<somme * temps<<" fcfa\n";
	cout<<"Bénef_Total: "<<result -(somme * temps)<<" fcfa\n";
	cout<<"Wallet: "<<result<<" fcfa\n";
	cout<<"===========================================================\n";
	cout<<"===============================================================\n";
	cout<<"voulez vous faire un retrait(o/n) :?\n";
	cin>> retirer;
	retrait(result, retirer);
     */
	vector<Societe> mesSocietes = datas();

    for (const auto &s : mesSocietes) {
        cout << "ID: " << s.ID << endl;
        cout << "Nom: " << s.societyName << endl;
        cout << "Taux d'intérêt: " << s.tautInteret << endl;
        cout << "Investissement minimum: " << s.investMini << endl;
        cout << "Investissement maximum: " << s.investMaxi << endl;
        cout << "Années minimum de sortie du marché: " << s.anneMiniDeSortiDuMarche << endl;
        cout << "---------------------------" << endl;
    }
	return 0;


}
