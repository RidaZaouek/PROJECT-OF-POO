#pragma once
#include<iostream>

using namespace std;

class Compte
{
	friend class Utilisateur;
protected:
	double SOLDE;
	int NUMCOMPTE;
	int static countcompte;
	string DEVISE;


public:
	Compte( string, double);
	virtual void debiter(double montant);
	virtual void crediter(double montant);
	virtual void afficher() const;
	virtual ~Compte();
};

