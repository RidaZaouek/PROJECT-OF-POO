#pragma once
#include "Compte.h"
#include "CarteBancaire.h"
class CompteEpargne :public Compte
{
protected:
	double TauxInteret;
	CarteBancaire* cartebancaire;
public:
	CompteEpargne(string devise, double solde, double tauxinteret, string titu, string paiem, float plafond_de_paiement);
	void crediter(double montant) override;
	void afficher()const override;
	~CompteEpargne();


};

