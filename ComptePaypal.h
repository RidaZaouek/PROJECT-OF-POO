#pragma once
#include "Moyennedepaiement.h"
#include"IRechargeable.h"
#include <iostream>
using namespace std;
class ComptePaypal :public Moyennedepaiement , public IRechargeable
{
protected:
	string Email;
	float solderechargeable;
public:
	ComptePaypal(float,string,string,string);
	void payer() override;
	void recharger_solde() override;
	void afficher()const override;
	 ~ComptePaypal();
};

