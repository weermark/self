#include <iostream>
#include <cstdlib>

using namespace std;

void run(int a)
{
	int sum=0, b, c, d, last;
	
	while(1)
	{
		a=a*a;
		b=a%1000/100*10;
		c=a%100/10;
		
//		cout << a << endl;
		
		a=b+c;
		cout <<  " " <<a;
		if(last==a)
		{
			sum++;
		}
//		if(last!=a)
//		{
//			sum=0;
//		}
		if(last!=a)
		{
			d++;
		}
		if(d==1)
		{
			sum=0;
		}
		if(sum==1)
		{
			break;
		}
		last=a;
	}
}

int main(void)
{
	int a,b;
	
	cout << "Integer1:";
	cin >> a;
	cout << "Integer2:";
	cin >> b;
	
	cout << "Result1:" << a; 
	run(a);
	cout << endl;
	cout << "Result2:" << b;
	run(b);
	return 0;
}
