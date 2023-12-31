#include <iostream>
#include <cmath>
using namespace std;
double h(const double x, const double y); 
int main()
{
	double s, t;
	
	cout << "s = "; cin >> s;
	cout << "t = "; cin >> t;
	double c = h(s*s, t*t) + pow(h(s + t, 1), 2)/(1+pow(h(s*t, 2), 2));
	cout << "c = " << c << endl;
	return 0;
}
double h(const double x, const double y) 
{
	return ((x*y)/(1+x*x*y*y));
}