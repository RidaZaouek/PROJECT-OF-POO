#pragma once
#include <iostream>
#include "Moyennedepaiement.h"
using namespace std;
class Wallet
{
protected:

	int capacite;
	Moyennedepaiement** moy_paiement;
	int nbr_moy;

	
public:
	 Wallet(int c,int nbr_moy);
	 void add_moy_paiement(Moyennedepaiement*);
	 void afficher()const;
	 ~Wallet();


};

