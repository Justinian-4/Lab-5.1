// Lab_05.1.cpp
// < Дубленич Назар Романович >
// Функції, що містять
// арифметичний вираз
// формулою: функція однієї змінної.
// Варіант 16
// Lab 5_1
#include <iostream>
#include <cmath>
using namespace std;
double h(const double a, const double b); // прототип h
double h2(const double a, const double b);// прототип h^2
int main()
{
	double s, t;

	cout << "g = "; cin >> t;
	cout << "s = "; cin >> s;
	double c = (h(s*s, 1+t) + h(1, s*t)) / (1 + h2(s,t));
	cout << "c = " << c << endl;
	return 0;
}
double h(const double a, const double b) // визначення h
{
	return (a+b+a*a*b*b)/(a*a+b*b);
}
double h2(const double a, const double b) // визначення h^2
{
	 return pow((a + b + a * a * b * b) / (a * a + b * b) , 2);
}