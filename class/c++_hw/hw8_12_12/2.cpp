#include <iostream>
#include <cstdlib>

using namespace std;

void gcd(int a)
{
	int count=0,time=0,q=0;
	for(int i=2; i<=a; i++)
	{
		
		for(int j=2; j<i; j++)
		{
			if(i%j==0)
				count++;
		}
		
		if(count==0)
		{
			if(a%i==0)
			{
				
				for(int k=1; k<=a; k++)
				{
					if(a%i!=0)
						break;
					a/=i;
					time++;
				}
				cout  << i <<" " << time;
				if(a!=1)
					cout << " "<<a<<" ";
			}
		}
		time=0;
		count=0;
	}
}

int main(void)
{
	int a,b;
	cout << "Integer1:";
	cin >> a;
	cout << "Integer2:";
	cin >> b;
	
	cout << "Result1:";
	gcd(a);
	cout << "\nResult2:";
	gcd(b);
	
	return 0;
}
