#include<iostream>
#include<cstdlib>
using namespace std;
int main(void)
{
	int a;
	cout << "Integer:" ;
	cin >> a;
	char b;
	cout << "Char:";
	cin >> b;
	cout << "Result:";
	for(int i=1; i<=a; i++) {
		cout << b;
	}
	return 0;
}
