#include <iostream>
#include"Date.h"

using namespace std;

int main()
{
	setlocale(0, "");
	Date p{ 2012,4,10 };
	Date p2{ 2012,4,10 };
	Date p1{ 2019,8,21 };

	cout << p << endl;
	p.dayIncrBy1(p);
	cout<< p << endl;
	p=(++p);
	cout << p <<endl;
	p = (--p);
	cout << p << endl;
	if (p != p1) {
		
		cout << "Даты\n"<<p<< " и "<<p1<<"\nразные\n";
	}
	if (p == p2) {
		cout << "Даты\n" << p << " и " << p2 << "\nодинаковые\n";
	}
	if (p1 > p) {
		cout<< "Дата\n" << p1 << " > " << p <<endl;
	}
	if (p < p1) {
		cout << "Дата\n" << p << " < " << p1<<endl;
	}

	cout << p1 << endl;
	p1 = p;
	cout << p1<<endl;

	cout << p << endl;
	(p+=p1);
	cout << p<<endl;

	Date p3=(p);
	cout << p3<<endl;
	Date p4;
	cout << p4;
}

