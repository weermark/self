#include <iostream>
#include <cstdlib>
//#include <cmath>

using namespace std;

//double power(int);

void aa(int a)
{
	int a1=a,a3=a,a4=a,a5=a,b=0,c=1,d=10,sum;
	
	while(a5!=0)
	{
		a5/=10;
		b++;          // b琌碭计 
	}
	
	for(int k=1; k<b; k++)
	{
		c*=10;
		d*=10;
	}
	//c=1*(10*pow(int b));
	//d=10*(10*pow(int b));
	//cout <<"D"<<b<<" " <<c << " " << d << endl;
	for(int i=b; i>=1; i--)
	{
		a1=a%d/c;
		//cout << "a1=" << a1<< endl;//
		
		int a2=a1;
		
		for(int j=1; j<b; j++)
		{
			a2*=a1;
		}
		cout << " " << a2;
		
		c/=10;
		d/=10;
		a1=a;
	}
}

void arm(int a)
{
	int a1=a,a3=a,a4=a,a5=a,b=0,sum=0,c=1,d=10;
	
	while(a5!=0)
	{
		a5/=10;
		b++;          // b琌碭计 
	}
	
	for(int i=1; i<=b; i++)
	{
		a1=a%d/c;     //a╊秨 
		//cout << "a1=" << a1<< endl;//
		
		int a2=a1;
		
		for(int j=1; j<b; j++)
		{
			a2*=a1;  //╊秨计暗Ωよ 
		}
		//cout << "a2=" << a2<< endl;//
		sum+=a2;	//sum场暗ЧΩよ计 
		//cout << "sum=" << sum << endl;//
		c*=10;
		d*=10;
		a1=a;
		
	}
	
	if(sum==a3)
	{
		cout << "Yes";
		aa(a4);
	}
	else
		cout << "No";
	
	return;
}

int main(void)
{
	int a,a1,a2;
	cout << "Integer1:";
	cin >> a;
	cout << "Integer2:";
	cin >> a1;
	cout << "Integer3:";
	cin >> a2;
	cout << "Result1:";
	arm(a);
	cout << endl;
	cout << "Result2:";
	arm(a1);
	cout << endl;
	cout << "Result3:";
	arm(a2);
	
	return 0;
}
