#include <iostream>
#include <cstdlib>
using namespace std;
int main(void)
{
	int kg,cm;
	cout << "Weight(kg):" ;
	cin >> kg;
	cout << "Height(cm):" ;
	cin >> cm;
	double m;
	m=(double)cm/100;
	cout << "BMI:" << kg/(m*m);
	
	return 0;
}
