#pragma once
#include "Moyennedepaiement.h"
#include"IRechargeable.h"
#include"IAuthentifiable.h"
#include <iostream>
using namespace std;
class PortfeuilleCrypto :public Moyennedepaiement , public IRechargeable ,public IAuthentifiable
{
protected:
	string email;
	string cle;
	float balance;
public:
	PortfeuilleCrypto(float,string,string,string,string);
	void payer()override;
	void recharger_solde( ) override;
	bool authentification()override;
	void afficher()const override;
	~PortfeuilleCrypto();

};

