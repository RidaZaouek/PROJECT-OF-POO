#include "Moyennedepaiement.h"

Moyennedepaiement::Moyennedepaiement(string p,string titulaire):titulaire(titulaire),paiement(p)
{

	cout << "CALL FOR Moyennedepaiement CONSTRUCTOR   " << this->titulaire << endl;

}
void Moyennedepaiement::afficher()const 
{

	cout << "****INFORMATIONS****" << endl;
	cout << "LE TITULAIRE :" <<this->titulaire<< endl;
	cout << "LE PAIEMENT :" <<this->paiement<< endl;

}



Moyennedepaiement::~Moyennedepaiement()
{
	cout << "CALL FOR MOYENNEDEPAIEMENT DESTRUCTOR   " << this->titulaire << endl;
}
