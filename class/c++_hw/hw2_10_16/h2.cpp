#include <iostream>
#include <cstdlib>
using namespace std;
int main(void)
{
	int a,b;
	cout << "Integer1:" ;
	cin >> a;
	cout << "Integer2:" ;
	cin >> b;
	cout << a/100 << endl;
	cout << a%100/10 << endl;
	cout << a%10 << endl;
	cout << b/100 << endl;
	cout << b%100/10 << endl;
	cout << b%10;
	return 0;
}
