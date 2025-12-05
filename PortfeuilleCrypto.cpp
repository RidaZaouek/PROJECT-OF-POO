#include "PortfeuilleCrypto.h"
#include"Wallet.h"
PortfeuilleCrypto::PortfeuilleCrypto(float balance,string titu,string paie,string email,string key):Moyennedepaiement(paie,titu), balance(balance),email(email),cle(key)
{
	cout << "CALL FOR PortfeuilleCrypto CONSTRUCTOR   " <<this->titulaire<< endl;

	

}

bool PortfeuilleCrypto::authentification()
{
	string CLEprivee;
	cout << "DONNER LA VALEUR DU CLE : " << endl;
	cin >> CLEprivee;
	if (CLEprivee == this->cle) {
		return true;
	}
	return false;
}
void PortfeuilleCrypto::payer()
{
	float Montant;
	cout << "DONNER LE MONTANT  " << endl;
	cin >> Montant;
	if (authentification() == true) {
		if (Montant>0 && Montant <= this->balance)
		{
			this->balance -= Montant;
			cout << "LE PAIEMENT EST AUTORISE  " << endl;
		}
		else
		{
			cout << "LA TRANSACTION EST REFUSEE POUR UN SOLDE INSUFFISANT OU UN MONTANT INVALIDE  " << endl;
		}
	}
	else {
		cout << "L'AUTHENTIFICATION EST ECHOUEE POUR PORTOFEUILLECRYPTO  "  << endl;
	}
}
void PortfeuilleCrypto::recharger_solde()
{
	float Solde;
	cout << "DONNER LE SOLDE :" << endl;
	cin >> Solde;
	if (Solde > 0) {
		this->balance += Solde;
	}
	else {
		cout << "LE SOLDE EST INVALIDE" << endl;
	}
}


void PortfeuilleCrypto::afficher() const
{
	Moyennedepaiement::afficher();
	cout << "ADRESSE :" << this->email
		 << endl << "LA BALANCE :" << this->balance<<" BTC"
		 << endl;
}

PortfeuilleCrypto::~PortfeuilleCrypto()
{
	cout << "CALL FOR PortfeuilleCrypto DESTRUCTOR   " << this->titulaire << endl;
}

