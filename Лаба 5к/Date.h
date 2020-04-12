#pragma once
#include "Triad.h"
#include <iostream>


class Date :public Triad
{
public:
	Date(void);


public:
	~Date(void);
	Date(int, int, int);
	Date(const Date&);
	Date& operator = (const Date&);
	friend istream& operator>>(istream& in, Date& d);
	friend ostream& operator<<(ostream& out, const Date& d);
	Date& operator++();
	Date operator++(int);
	Date& foo_day(int);
	Date& foo_month(int);

	friend bool operator>(const Date& m1, const Date& m2);
	friend bool operator<=(const Date& m1, const Date& m2);
	friend bool operator<(const Date& m1, const Date& m2);
	friend bool operator>=(const Date& m1, const Date& m2);
	friend bool operator==(const Date& m1, const Date& m2);

};


