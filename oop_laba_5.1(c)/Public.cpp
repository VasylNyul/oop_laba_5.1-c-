#include "Public.h"

Public::operator string() const
{
	stringstream ss;

	ss << "Chuslo = " << this->get_a() << "," << this->get_b() << endl;

	return ss.str();
}

Public operator - (const Public& a, const Public& b)
{
	Public u(a.get_a() - b.get_a(), a.get_b() - b.get_b());
	return u;
}

Public& Public:: operator ++()
{
	this->set_a(this->get_a() + 1);
	return *this;
}
Public& Public:: operator --()
{
	this->set_a(this->get_a() - 1);
	return *this;
}
Public Public:: operator ++(int)
{
	Public p(*this);
	this->set_a(this->get_a() + 1);
	return p;
}
Public Public:: operator --(int)
{
	Public p(*this);
	this->set_a(this->get_a() - 1);
	return p;
}

bool operator < (Public& f, Public& s)
{
	return f.get_a() < s.get_a() || f.get_a() == s.get_a() && f.get_b() < s.get_b();
}

bool operator == (Public& f, Public& s)
{
	return f.get_a() == s.get_a() && f.get_b() == s.get_b();
}

bool operator > (Public& f, Public& s)
{
	return f.get_a() > s.get_a() || f.get_a() == s.get_a() && f.get_b() > s.get_b();
}
bool operator <= (Public& f, Public& s)
{
	return !(f.get_a() < s.get_a() || f.get_a() == s.get_a() && f.get_b() < s.get_b());
}

bool operator != (Public& f, Public& s)
{
	return !(f.get_a() == s.get_a() && f.get_b() == s.get_b());
}

bool operator >= (Public& f, Public& s)
{
	return !(f.get_a() > s.get_a() || f.get_a() == s.get_a() && f.get_b() > s.get_b());
}
