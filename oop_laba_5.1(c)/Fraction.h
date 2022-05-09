#pragma once

#include <iostream>
#include <string>
#include <sstream>
#include"Exception.h"

using namespace std;

class Fraction
{
private:

	long first;
	short second;

public:
	int get_a() const { return first; }
	int get_b() const { return second; }
	void set_a(unsigned int value) { first = value; }
	void set_b(unsigned int value) { second = value; }

	Fraction();
	Fraction(long, short) throw (invalid_argument, bad_exception, Exception, const char*);
	Fraction(const Fraction&);

	operator string() const;

	friend ostream& operator << (ostream&, const Fraction&);
	friend istream& operator >> (istream&, Fraction&);
};

