#include "ComptePaypal.h"
#include"Wallet.h"


ComptePaypal::ComptePaypal(float solde,string titulaire,string paieme,string email):Moyennedepaiement(paieme, titulaire),solderechargeable(solde),Email(email)
{
	cout << "CALL FOR ComptePaypal CONSTRUCTOR " <<this->titulaire<< endl;
	
}

void ComptePaypal::payer()
{
	float Montant;
	cout << "DONNER LE MONTANT  " << endl;
	cin >> Montant;
	cout<<endl;
	if (this->solderechargeable >= Montant) {

		this->solderechargeable -= Montant;
	}
	else {
		cout << "SOLDE INSUFFISANT  " << endl;
	}

}

void ComptePaypal::recharger_solde()
{
	float Solde;
	cout << "DONNER LE SOLDE  " << endl;
	cin >> Solde;
	if (Solde > 0) {
		this->solderechargeable += Solde;
	}
	else {
		cout << "LE SOLDE EST INVALIDE" << endl;
	}
}

void ComptePaypal::afficher() const
{
	Moyennedepaiement::afficher();
	cout << "EMAIL :" << this->Email << endl;
	cout << "LE SOLDE RECHARGEABLE :"
		 << this->solderechargeable << " DH " << endl;;

}

ComptePaypal::~ComptePaypal()
{
	cout << "CALL FOR ComptePaypal DESTRUCTOR   " << this->titulaire << endl;

}
