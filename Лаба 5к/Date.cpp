#include "Date.h"

Date::Date(void) :Triad()
{
}

Date::~Date(void)
{
}

Date::Date(int f, int s, int t) :Triad(f, s, t)
{
}

Date::Date(const Date& d)
{
	first = d.first;
	second = d.second;
	third = d.third;

}

Date& Date::operator=(const Date& d)
{
	if (&d == this)return *this;
	first = d.first;
	second = d.second;
	third = d.third;
	return *this;

}

istream& operator>>(istream& in, Date& d)
{
	cout << "\nYears: "; in >> d.first;
	cout << "Months: "; in >> d.second;
	cout << "Days: "; in >> d.third;

	if (d.third > 31)
	{
		d.second += (d.third - 1) / 31;
		d.third = d.third % 31;
	}

	if (d.second > 12)
	{
		d.first += (d.second - 1) / 12;
		d.second = d.second % 12;
	}


	return in;
}

ostream& operator<<(ostream& out, const Date& d)
{
	out << "\nYears: " << d.first;
	out << "\nMonths: " << d.second;
	out << "\nDays: " << d.third << "\n";
	return out;
}

Date& Date::operator++()
{
	first++;
	second++;
	third++;
	return *this;
}

Date Date::operator++(int)
{
	first++;
	second++;
	third++;
	Date t(first, second, third);
	return t;
}


bool operator>(const Date& m1, const Date& m2)
{
	return (m1.first + m1.second * 31 + m1.third * 365 > m2.first + m2.second * 31 + m2.third * 365);
}

bool operator>=(const Date& m1, const Date& m2)
{
	return (m1.first + m1.second * 31 + m1.third * 365 >= m2.first + m2.second * 31 + m2.third * 365);
}

bool operator<(const Date& m1, const Date& m2)
{
	return (m1.first + m1.second * 31 + m1.third * 365 < m2.first + m2.second * 31 + m2.third * 365);
}

bool operator<=(const Date& m1, const Date& m2)
{
	return (m1.first + m1.second * 31 + m1.third * 365 <= m2.first + m2.second * 31 + m2.third * 365);
}


bool operator==(const Date& m1, const Date& m2)
{
	return (m1.first + m1.second * 31 + m1.third * 365 == m2.first + m2.second * 31 + m2.third * 365);
}