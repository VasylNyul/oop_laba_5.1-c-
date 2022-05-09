#include "Fraction.h"

#pragma once
class Public : public Fraction
{
public:
	Public(long a = 0, short b = 0) :Fraction(a, b) {}
	

	operator string() const;

	friend Public operator - (const Public&, const Public&);

	friend bool operator < (Public&, Public&);
	friend bool operator == (Public&, Public&);
	friend bool operator > (Public&, Public&);
	friend bool operator <= (Public&, Public&);
	friend bool operator != (Public&, Public&);
	friend bool operator >= (Public&, Public&);

	Public& operator ++();
	Public& operator --();
	Public operator ++(int);
	Public operator --(int);
};