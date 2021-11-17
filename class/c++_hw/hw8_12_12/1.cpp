#include <iostream>
#include <cstdlib>

using namespace std;

int gcd(int n,int m)
{
	if(m>0)
		return gcd(m,n%m);
	else
		return n;	
}

int main(void)
{
	int n, m, n1, m1;
	cout << "Test1" << endl;
	cout << "m:";
	cin >> m;
	cout << "n:";
	cin >> n;
	cout << "Result:" << gcd(n,m) << endl;
	
	cout << "Test2" << endl;
	cout << "m:";
	cin >> m1;
	cout << "n:";
	cin >> n1;
	cout << "Result:" << gcd(n1,m1);
	return 0;
}
