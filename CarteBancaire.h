#pragma once
#include "Moyennedepaiement.h"
#include"IAuthentifiable.h"
class CarteBancaire :public Moyennedepaiement ,public IAuthentifiable
{
	friend class CompteCourant;
	friend class CompteEpargne;
protected:
	int numero;
	static int number;
	int code;
	static int password;
	float plafond_de_paiement;
public:
	CarteBancaire(string , string,float plafond_de_paiement);
	bool authentification()override;
	void payer()override;
	void afficher()const override;
    ~CarteBancaire();


};