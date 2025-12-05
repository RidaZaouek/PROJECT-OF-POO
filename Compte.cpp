#include "Compte.h"
int Compte::countcompte = 0;
Compte::Compte( string devise, double solde) :DEVISE(devise), SOLDE(solde)
{
	
	this->NUMCOMPTE = ++countcompte;
	cout << "CALL FOR ACCOUNT CONSTRUCTOR " << this->NUMCOMPTE<< endl;
}



void Compte::debiter(double montant)
{

	if (this->SOLDE >= montant && montant > 0) {
		this->SOLDE -= montant;
		cout << "LE DEBIT PASSE AVEC SUCCEES" << endl;

	}
	else {
		cout << "solde insuffi ou montant invalide" << endl;
	}

}

void Compte::crediter(double montant)
{
	if (montant > 0) {

		this->SOLDE += montant;
		cout << "LE CREDIT PASSE AVEC SUCCEES" << endl;
	}
	else {
		cout << "montant invalide " << endl;
	}
}
void Compte::afficher() const
{
	cout << "*****INFO OF ACCOUNT***** " << endl;

	cout << "NUMCOMPTE :  " << this->NUMCOMPTE << endl;
	cout << "DEVISE :  " << this->DEVISE << endl;
	cout << "SOLDE : " << this->SOLDE << endl;

}

Compte::~Compte()
{
	cout << "CALL FOR ACCOUNT DESTRUCTOR  " << this->NUMCOMPTE << endl;
}
