#include<iostream>
#include<cstdlib>
using namespace std;
int main(void)
{
	int a,b;
	cout << "Integer1:";
	cin >>a;
	cout << "Integer2:";
	cin >>b;
	cout << "Result1:1";
	for(int i=3; i<=a; i+=2) {
		cout << " "<< i ;
	}
	cout << "\nResult2:1";
	for(int i=3; i<=b; i+=2) {
		cout << " "<< i ;
	}
	return 0;
}
