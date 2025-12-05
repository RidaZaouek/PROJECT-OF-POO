#pragma once
class IRechargeable
{ 
public:

	virtual void recharger_solde() =0;
	virtual~IRechargeable() = default;

};

