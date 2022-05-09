#include "Fraction.h"
#include "Exception.h"
using namespace std;
Fraction::Fraction()
	: first(0), second(0)
{}

Fraction::Fraction(long first, short second) throw (invalid_argument, bad_exception, Exception, const char*)
{
	this->first = first;
	this->second = second;
}

Fraction::Fraction(const Fraction& f)
{
	*this = f;
}

Fraction::operator string() const
{
	stringstream ss;

	ss << "Chuslo = " << first << "," << second << endl;

	return ss.str();
}

ostream& operator << (ostream& out, const Fraction& f)
{
	out << string(f);
	return out;
}

istream& operator >> (istream& in, Fraction& a)
{
	int c;
	int b;
	cout << "Zila chastuna = "; in >> c;
	cout << "Drobova chastuna = "; in >> b;

	if (c == 0 && b < 0)
		throw invalid_argument("Invalid_argument");
	else if (c < 0 && b < 0)
		throw bad_exception();
	else if (c > 0 && b < 0)
		throw Exception("My exception");
	else if (c == 0 && b == 0)
		throw "Exception";

	cout << endl;
	a.set_a(c);
	a.set_b(b);

	return in;
}

