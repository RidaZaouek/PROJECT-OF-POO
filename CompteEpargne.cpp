#include"CompteEpargne.h"

CompteEpargne::CompteEpargne(string devise, double solde, double tauxinteret, string titu, string paiem, float plafond_de_paiement) :Compte(devise, solde)
{

	cout << "CALL FOR COMPTE_EPARGNE CONSTRUCTOR  " << this->NUMCOMPTE<< endl;
	this->TauxInteret = tauxinteret;
	this->cartebancaire = new CarteBancaire(titu, paiem, plafond_de_paiement);
}

void CompteEpargne::crediter(double montant) 
{
	if (montant > 0) {
		this->SOLDE += montant;
		this->SOLDE +=this->SOLDE* (this->TauxInteret / 100);
	}
	else {
		cout << " LE MONTANT EST INCOHERENTE  " << endl;
	}

}

void CompteEpargne::afficher() const
{
	cout << "**** Compte Epargne ****" << endl;
	Compte::afficher();
	cout << "LE TAUX D'INTERET EST  : " << this->TauxInteret << endl;
	this->cartebancaire->afficher();
}


CompteEpargne::~CompteEpargne()
{
	cout << "CALL FOR CompteEpargne DESTRUCTOR   " << this->NUMCOMPTE << endl;

	delete cartebancaire;
}
