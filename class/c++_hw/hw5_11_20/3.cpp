#include <iostream> 
#include <cstdlib>

using namespace std;

void sign(int a)
{
	int sum=0;
	for(int i=1; i<a; i++)
	{
		if(a%i==0)
		{
			sum+=i;
		}
	}
	if(sum==a)
	{
		cout << "Yes";
		for(int i=1; i<a; i++)
		{
			if(a%i==0)
			{
				cout << " " <<i ;
			}
		}
	}
	else
	{
		cout << "No";
	}
	
	
	return;
	
}
int main(void)
{
	int a,b,c;
	cout << "Integer1:";
	cin >> a;
	cout << "Integer2:";
	cin >> b;
	cout << "Integer3:";
	cin >> c;
	cout << "Result1:";
	sign(a);
	cout << endl;
	cout << "Result2:";
	sign(b);
	cout << endl;
	cout << "Result3:";
	sign(c);
	return 0;
}
