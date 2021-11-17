#include<iostream>
#include<cstdlib>
using namespace std;
int main(void)
{
	int a,c;
	double b,d;
	cout << "input1:";
	cin >> a;
	cout << "input2:";
	cin >> c;
	if(a<=800)
	{
		 b=(double)a*0.6;
	}
	if(1500>=a && a>800)
	{
		 b=800*0.6+((double)a-800)*0.45;
	}
	if(a>1500)
	{
		 b=800*0.6+700*0.45+((double)a-1500)*0.3;
	}
	
	if(b<=200)
	{
		cout << "output1:" << b <<endl;
	}
	if(b<=500 && b>200)
	{
		cout << "output1:" << b*0.95 <<endl;
	}
	if(b<=900 && b>500)
	{
		cout << "output1:" << b*0.8 <<endl;
	}
	if(b>900)
	{
		cout << "output1:" << b*0.6 <<endl;
	}
	//
	if(c<=800)
	{
		 d=(double)c*0.6;
	}
	if(1500>=c && c>800)
	{
		 d=800*0.6+((double)c-800)*0.45;
	}
	if(c>1500)
	{
		 d=800*0.6+700*0.45+((double)c-1500)*0.3;
	}
	
	if(d<=200)
	{
		cout << "output2:" << d ;
	}
	if(d<=500 && d>200)
	{
		cout << "output2:" << d*0.95 ;
	}
	if(d<=900 && d>500)
	{
		cout << "output2:" << d*0.8 ;
	}
	if(d>900)
	{
		cout << "output2:" << d*0.6 ;
	}
	return 0;
}
