#include <iostream>
#include <cstdlib>

using namespace std;

void per(int a)
{
	int sum=0;
	for(int i=1; i<a; i++)
	{
		if(a%i==0)
		{
			sum+=i;
		}
	}
	//cout << sum<< endl;
	if(sum==a)
	{
		cout << "Yes";
		for(int i=1; i<a; i++)
		{
			if(a%i==0)
			{
				cout<< " " << i;
			}
		}
					
	}
	else
		cout << "No";
	
	return;
}

int main(void)
{
	int a1,a2,a3;
	cout << "Integer1:";
	cin >> a1;
	cout << "Integer2:";
	cin >> a2;
	cout << "Integer3:";
	cin >> a3;
	
	cout << "Result1:";
	per(a1);
	cout << endl;
	cout << "Result2:";
	per(a2);
	cout << endl;
	cout << "Result3:";
	per(a3);
	
	return 0;
}
