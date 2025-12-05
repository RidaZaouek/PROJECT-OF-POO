#include "CompteCourant.h"

CompteCourant::CompteCourant(string devise, double solde, double plafond, string titu, string paiem, float plafond_de_paiement)
	          :Compte(devise,solde)
{
	cout << "CALL FOR COMPTE_COURANT CONSTRUCTOR " << this->NUMCOMPTE<< endl;
	this->plafond = plafond;
	this->cartebancaire = new CarteBancaire( titu,  paiem,  plafond_de_paiement);


}
void CompteCourant::debiter(double montant) {

	if (montant > this->cartebancaire->plafond_de_paiement) 
	{
		cout << "LE PAIEMENT EST IMPOSSIBLE CAR LE PLAFOND DU CARTE BANCAIRE EST DEPASSE " << endl;
	}
	else {
		if (SOLDE - montant >= plafond) {

			 Compte::debiter(montant);
		}
		else {

			cout << "LE MIN DU PLAFOND DU COMPTE EST DEPASSE !!!!! " << endl;
		}
	}
}





void CompteCourant::afficher()const {

	cout << "**** Compte Courant ****" << endl;
	this->Compte::afficher();
	cout << "LE PLAFOND EST  : " << this->plafond << endl;
	this->cartebancaire->afficher();
}

CompteCourant::~CompteCourant()
{
	cout <<"CALL FOR CompteCourant DESTRUCTOR  " << this->NUMCOMPTE << endl;
	delete cartebancaire;
}
