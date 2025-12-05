#pragma once
#include <iostream>
using namespace std;
class Moyennedepaiement 
{
protected:
	string titulaire;
	string paiement;
public:
	Moyennedepaiement(string p, string titulaire);
	virtual void payer()=0;
	virtual void afficher()const;
	virtual ~Moyennedepaiement();
};

