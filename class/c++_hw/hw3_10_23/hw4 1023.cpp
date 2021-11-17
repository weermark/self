#include<iostream>
#include<cstdlib>
using namespace std;
int main(void)
{
	int n,m,a,b;
	cout << "Integer1:" ;
	cin >> n;
	cout << "Integer2:" ;
	cin >> a;
	cout << "Result1" <<endl;
	for(int i=1;i<=n;i++)
	{
		if(i%7==0 && i%3!=0)
		{
		cout << i <<endl;
		m = m + 1;
		}
		
	}
	cout << m <<endl;
	//
	b=0;
	cout << "Result2" <<endl;
	for(int i=1;i<=a;i++)
	{
		if(i%7==0 && i%3!=0)
		{
		cout << i <<endl;
		b = b + 1;
		}
		
	}
	cout << b;
	return 0;
}
