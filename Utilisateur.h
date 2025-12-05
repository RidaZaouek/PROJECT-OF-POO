#pragma once
#include"Personne.h"
#include "Compte.h"
#include "Wallet.h"
class Utilisateur:public Personne
{
protected:
	 int IdC;
	 static int count;
	 string Email;
	 Compte** Comptes;
	 int number_account;
	 int TAILLE;
	 Wallet *wallet;

	

public:
	Utilisateur(string FName, string LName, string CIN, string NumberPhone, string Adress, string Email,int Taille, int number_account,Wallet*wallet);
	void update_informations(string FName, string LName, string CIN, string NumberPhone, string Adress)override;
	void add_account(Compte* c);
	void delete_account(int NumCompte);
	Compte* search_account(int NumCompte)const;
	void afficher()const override;
	~Utilisateur();
};

