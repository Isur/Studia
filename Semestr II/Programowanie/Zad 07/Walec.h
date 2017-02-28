#pragma once
template <class MainType, class SecondType> 
class Walec
{
public:
	MainType r;
	SecondType h;
	MainType field();
	Walec(MainType r, SecondType h);
	~Walec();
};

