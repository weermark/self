#include <iostream> 
#include <cstdlib>

using namespace std;

void sign(int a,char b)
{
	for(int i=1; i<=a; i++)
	{
		for(int j=1; j<=a; j++)
		{
			cout << b;
		}cout << endl;
	}
	return;
}
int main(void)
{
	int a,c;
	char b,d;
	cout << "Integer1:";
	cin >> a;
	cout << "Char1:";
	cin >> b;
	cout << "Integer2:";
	cin >> c;
	cout << "Char2:";
	cin >> d;
	cout <<"Result1:"<< endl;
	sign(a,b);
	cout << "Result2:"<< endl;
	sign(c,d);
	return 0;
}
