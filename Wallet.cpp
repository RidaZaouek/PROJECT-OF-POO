#include "Wallet.h"


Wallet::Wallet(int cap,int nbr_moy):capacite(cap),nbr_moy(nbr_moy)
{
	
	cout << " CALL FOR WALLET CONSTRUCTOR " << endl;
	this->moy_paiement = new Moyennedepaiement * [this->capacite];
	for (int i = 0; i < this->capacite; i++) {
		this->moy_paiement[i] = nullptr;
	}
	
	
}

void Wallet::add_moy_paiement(Moyennedepaiement* m) 
{
	if (m == nullptr) {

		cout << "LE MOYEN DE PAIEMENT A INSERE EST N EXISTE PAS" << endl;
	}
	else {



		if (nbr_moy < this->capacite) {

			this->moy_paiement[nbr_moy++] = m;
		}
		else {

			cout << "LA CAPACITE EST INSUFFISANTE " << endl;
		}
	}

}
void Wallet::afficher()const
{
	cout << "****WALLET****" << endl;
		for (int i = 0; i < this->nbr_moy; ++i) {
			if (this->moy_paiement[i] != nullptr) {
				this->moy_paiement[i]->afficher();
			}
			
	    }




}


Wallet::~Wallet()
{
	cout << "CALL FOR WALLET DESTRUCTOR  " << endl;
	delete[]this->moy_paiement;
	this->moy_paiement = nullptr;
}
