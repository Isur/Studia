#include "max.h"
template <class Type>
Type max(Type a, Type b)
{
	return (a > b) ? a : b;
}
template <class Type>
Type max(Type a, Type b, Type c)
{
	return (max(a, b) > c) ? max(a, b) : c;
}
