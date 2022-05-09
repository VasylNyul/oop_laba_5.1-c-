#include "Fraction.h"

#pragma once
class Private :
	private Fraction
{
public:
	Private();
	Private(long, unsigned short);
	Private(Fraction&);

	using Fraction::get_a;
	using Fraction::get_b;
	using Fraction::set_a;
	using Fraction::set_b;

	friend ostream& operator << (ostream&, const Private&);
	friend istream& operator >> (istream&, Private&);
	operator string() const;

	friend Private operator - (const Private&, const Private&);
	friend bool operator < (Private&, Private&);
	friend bool operator == (Private&, Private&);
	friend bool operator > (Private&, Private&);
	friend bool operator <= (Private&, Private&);
	friend bool operator != (Private&, Private&);
	friend bool operator >= (Private&, Private&);

	Private& operator ++();
	Private& operator --();
	Private operator ++(int);
	Private operator --(int);
};


