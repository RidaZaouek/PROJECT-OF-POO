#pragma once
class IAuthentifiable
{
public:
	virtual bool authentification()=0;
	virtual~IAuthentifiable() = default;
};

