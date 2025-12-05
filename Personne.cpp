#include "Personne.h"

Personne::Personne(string FName, string LName, string Cin,string NumberPhone,string Adress )
{

	this->FirstName = FName;
	this->LastName = LName;
	this->CIN = Cin;
	this->NUMBERPHONE = NumberPhone;
	this->ADRESS = Adress;
	cout << "CALL FOR PERSON CONSTRUCTOR " << this->FirstName << " " << this->LastName << endl;
}

void Personne::afficher() const
{
	cout << "****INFO OF PERSON****" << endl;
	cout << "FIRSTNAME: " << this->FirstName
		 << endl << "LASTNAME :" << this->LastName
		 << endl << "ADRESS :" << this->ADRESS
		 << endl << "NUMBERPHONE :" << this->NUMBERPHONE << endl;
}

Personne::~Personne()
{
	cout << "CALL FOR PERSON DESTRUCTOR " << this->FirstName << " " << this->LastName << endl;


}
