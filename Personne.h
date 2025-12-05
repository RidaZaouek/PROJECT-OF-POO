#pragma once
#include <iostream>
using namespace std;
class Personne
{
protected:
	string FirstName;
	string LastName;
	string CIN;
	string NUMBERPHONE;
	string ADRESS;
public:
	Personne(string FName, string LName,string CIN,string NumberPhone,string Adress);
	virtual void update_informations(string FName, string LName, string CIN, string NumberPhone, string Adress) = 0;
	virtual void afficher()const;
	virtual ~Personne();
};

