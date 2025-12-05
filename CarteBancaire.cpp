#include "CarteBancaire.h"
#include "Wallet.h"
int CarteBancaire::number = 0;
int CarteBancaire::password = 2486;


CarteBancaire::CarteBancaire( string titu , string paiem, float plafond_de_paiement)
	:Moyennedepaiement(paiem,titu), plafond_de_paiement(plafond_de_paiement)
{
	cout << "CALL FOR CarteBancaire CONSTRUCTOR   " <<this->titulaire<< endl;

	this->numero = ++number;
	this->code = password++;
}

void CarteBancaire::afficher() const
{
	Moyennedepaiement::afficher();
	cout << "LE NUMERO DU CARTE BANCAIRE : " << this->numero << endl;
	cout << "LE PLAFOND_DE_PAIEMENT : " << this->plafond_de_paiement << " DH" << endl;

}

bool CarteBancaire::authentification()
{
	int PIN;
	cout << "DONNER LE CODE PIN " << endl;
	cin >> PIN;
	if (PIN == this->code) {
		return true;
	}
	return false;

	//return(PIN==this->code) ? true : false;
}

void CarteBancaire::payer() 
{
	float Montant;
	cout << "DONNER LE MONTANT  " << endl;
	cin >> Montant;
	cout << endl;
	
	if (authentification() == true) {
		if (Montant>0 && Montant <= plafond_de_paiement) {
			cout << "LE PAIEMENT EST AUTORISE  " << endl;
		}
		else
		{
			cout << "LE PAIEMENT EST ANNULE CAR LE MONTANT EST INVALIDE OU LE PLAFOND DE PAIEMENT EST DEPASSE  " << endl;
		}
	}
	else {
		cout << "L'AUTHENTIFICATION EST ECHOUEE POUR LA CARTE BANCAIRE  " << endl;
	}
}

CarteBancaire::~CarteBancaire()
{
	cout << "CALL FOR CarteBancaire DESTRUCTOR   " << this->titulaire << endl;
}

