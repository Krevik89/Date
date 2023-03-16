#pragma once
#include<iostream>
using namespace std;

class Date
{
	int _year;
	int _month;
	int _day;
public:
	Date(int y, int m, int d) :_year{ y }, _month{ m }, _day{d} {}
	Date() :Date(1111,1,1) {}
	//функция-член, которая увеличивает день на 1.
	Date& dayIncrBy1( Date& p) {
		p._day +=1;
		return p;
	}

	//перегруженные операторы (>>) и (<<)
	friend ostream& operator<<(ostream& out, Date& s) {
		out << s._year << "." << s._month << "." << s._day;
		return out;
	}
	friend istream& operator>>(istream& in, Date& s) {
		in >> s._year >>s._month>> s._day;
		return in;
		
	}

	//++ --
	Date& operator++() {
		this->_day++;
		return *this;
	}
	Date& operator--() {
		this->_day--;
		return *this;
	}
	
	//!= ==
	friend bool operator!=(Date& p, Date& p1) {
		return p._year!=p1._year || p._month!=p1._month || p._day!= p1._day;
	}
	bool operator==(Date& p) {
		return p._year == this->_year && p._month == this->_month && p._day == this->_day;
	}

	//> <
	friend bool operator>(Date& p, Date& p1) {
		return p._year > p1._year || p._month > p1._month || p._day > p1._day;
	}
	bool operator<(Date& p) {
		return   this->_year < p._year ||  this->_month < p._month || this->_day < p._day;
	}

	//=,+=,-=
	Date& operator=(Date&p){
		this->_year = p._year;
		this->_month = p._month;
		this->_day = p._day;
		return p;
	}
	//не работает
	Date& operator+=(Date& p){
		if (this->_day + p._day < 32) {
			this->_day + p._day;
		}
		else {
			this->_month++;
			this->_day == 0;
		}
		return *this;
	}
	//работает
	Date& operator-=(Date&p){
		if (this->_day != 0) {
			this->_day -= 2;
		}
		else {
			this->_month--;
			this->_day = 28;
		}
		
		return p;
	}

	//()
	Date& operator()(Date& p) {
		return p;
	}
	
};

