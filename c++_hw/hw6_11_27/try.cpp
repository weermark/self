#include <iostream>
#include <cstdlib>

using namespace std;

int main(void)
{
	int a,a1=a,a2=a,c=1,d=10;
	cin >> a;     //要四位數 
	for(int i=1; i<=4; i++)
	{
		
		a1=a%d/c;
		cout << a1 << endl;
		c*=10;
		d*=10;
	}
	return 0;
}
