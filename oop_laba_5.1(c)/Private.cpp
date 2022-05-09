#include "Private.h"

Private::Private()
	: Fraction(0, 0)
{}

Private::Private(long a, unsigned short b)
	: Fraction(a, b)
{}

Private::Private(Fraction& a)
	: Fraction(a.get_a(), a.get_b())
{}

ostream& operator << (ostream& out, const Private& f)
{
	out << string(f);
	return out;
}

istream& operator >> (istream& in, Private& a)
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

Private::operator string() const
{
	stringstream ss;

	ss << "Chuslo = " << this->get_a() << "," << this->get_b() << endl;

	return ss.str();
}

Private operator - (const Private& a, const Private& b)
{
	Fraction u(a.get_a() - b.get_a(), a.get_b() - b.get_b());
	return u;
}

Private& Private:: operator ++()
{
	this->set_a(this->get_a() + 1);
	return *this;
}
Private& Private:: operator --()
{
	this->set_a(this->get_a() - 1);
	return *this;
}
Private Private:: operator ++(int)
{
	Private p(*this);
	this->set_a(this->get_a() + 1);
	return p;
}
Private Private:: operator --(int)
{
	Private p(*this);
	this->set_a(this->get_a() - 1);
	return p;
}

bool operator < (Private& f, Private& s)
{
	return f.get_a() < s.get_a() || f.get_a() == s.get_a() && f.get_b() < s.get_b();
}

bool operator == (Private& f, Private& s)
{
	return f.get_a() == s.get_a() && f.get_b() == s.get_b();
}

bool operator > (Private& f, Private& s)
{
	return f.get_a() > s.get_a() || f.get_a() == s.get_a() && f.get_b() > s.get_b();
}
bool operator <= (Private& f, Private& s)
{
	return !(f.get_a() < s.get_a() || f.get_a() == s.get_a() && f.get_b() < s.get_b());
}
bool operator != (Private& f, Private& s)
{
	return !(f.get_a() == s.get_a() && f.get_b() == s.get_b());
}

bool operator >= (Private& f, Private& s)
{
	return !(f.get_a() > s.get_a() || f.get_a() == s.get_a() && f.get_b() > s.get_b());
}
