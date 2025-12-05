#include "Utilisateur.h"
int Utilisateur::count = 1;
Utilisateur::Utilisateur(string FName, string LName, string CIN, string NumberPhone, string Adress,string Email,int Taille, int number_account,Wallet*wallet)
	:Personne( FName,  LName,  CIN,  NumberPhone,  Adress),Email(Email), TAILLE(Taille),number_account(number_account),wallet(wallet)
{
	cout << "CALL FOR UTILISATEUR CONSTRUCTOR " << this->FirstName << " " << this->LastName << endl;
	this->IdC = count++;
	this->Comptes = new Compte * [this->TAILLE];
	for (int i = 0; i < this->TAILLE; i++) {
		this->Comptes[i] = nullptr;
	}
}



void Utilisateur::update_informations(string FName, string LName, string CIN, string NumberPhone, string Adress)
{
	string Gmail;

		this->FirstName = FName;
		this->LastName = LName;
		this->CIN = CIN;
		this->NUMBERPHONE = NumberPhone;
		this->ADRESS = Adress;
		cout << "DONNER L'EMAIL " << endl;
		cin >> Gmail;
		this->Email = Gmail;
}


void Utilisateur::add_account(Compte* c)
{
	if (this->number_account < this->TAILLE) 
	{
		this->Comptes[number_account++] = c;
	}
	else 
	{
		cout << "LA TAILLE EST INSUFFISANTE" << endl;
	}
}

void Utilisateur::delete_account(int NumCompte)
{
	bool trouver=false;
	if (number_account == 0) 
	{
		cout << "IL N'EXISTE AUCUN COMPTE " << endl;
		return;
	}

		for ( int i = 0; i < this->number_account; i++) 
		{

			if ( Comptes[i] != nullptr &&  Comptes[i]->NUMCOMPTE == NumCompte)
			{

				trouver = true;

				delete Comptes[i];

				cout << "LE COMPTE " << NumCompte << " EST SUPPRIME CORRECTEMENT DE L'UTILISATEUR "<<this->IdC<<endl;

				for (int k = i; k < number_account - 1; k++) 
				{

					Comptes[k] = Comptes[k + 1];
				}
				Comptes[number_account - 1] = nullptr;
				number_account--;
				break;
			}
		}
	if (trouver == false) 
	{
		cout << "LE COMPTE " <<NumCompte << "N'EXISTE PAS DANS LES COMPTES DE L'UTILISATEUR "<<this->IdC << endl;
	}
}

Compte* Utilisateur::search_account(int NumCompte) const
{
	for (int i = 0; i < number_account; i++)
	{
		if ( Comptes[i]!=nullptr && Comptes[i]->NUMCOMPTE == NumCompte) 
		{
			return this->Comptes[i];
		}	
	}
	return nullptr;

}

void Utilisateur::afficher() const
{
	Personne::afficher();
	cout << "ID UTILISATEUR :" 
		<< this->IdC
		  << endl
		<< "GMAIL :" 
		<< this->Email 
		  << endl;
	for (int i = 0; i < number_account; i++) {
		cout << "COMPTE N" 
			 << (i + 1) 
			 << ": " 
			 << endl;
		if (this->Comptes[i] != nullptr) {
			this->Comptes[i]->afficher();
		}
		
   }
	if (this->wallet != nullptr) {
		this->wallet->afficher();
	}
	
}
Utilisateur::~Utilisateur()
{
	// DANS LE DIAGRAMME DE CLASSE JE FAIS UN ERREUR , LA RELATION ENTRE L'UTILISATEUR ET LE COMPTE EST UNE COMPOSITION
	for (int i = 0; i < number_account; i++) {
		delete this->Comptes[i];
	}
	delete[]this->Comptes;
	cout << "CALL FOR Utilisateur DESTRUCTOR " <<"("
		 << this->IdC <<"," << this->FirstName 
		 << "," << this->LastName <<")" 
		 << endl;


}
