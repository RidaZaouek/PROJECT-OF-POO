#pragma once
#include "Compte.h"
#include "CarteBancaire.h"
class CompteCourant :public Compte
{
protected:
	double plafond;
	CarteBancaire* cartebancaire;
public:
	CompteCourant(string devise, double solde, double plafond, string titu, string paiem, float plafond_de_paiement);
	void debiter(double montant)override;
	void afficher()const override;
	~CompteCourant();
};

