#include "Walec.h"

template<class MainType, class SecondType>
MainType Walec<MainType, SecondType>::field()
{
	return 2*3.14*this->r*this->r+2*3.14*this->r*this->h;
}

template <class MainType, class SecondType>
Walec<MainType, SecondType>::Walec(MainType r, SecondType h)
{
	this->r = r;
	this->h = h;
}

template <class MainType, class SecondType>
Walec<MainType, SecondType>::~Walec()
{

}
