#include <iostream>
#include <cstdlib>

using namespace std;

int nosame(int);

int twoblock(int a)
{
	int a1=a,a5=a,b=0,c=1,d=10,zero=0,one=0,two=0,three=0,four=0,five=0,six=0,seven=0,eight=0,nine=0;
	
	while(a5!=0)
	{
		a5/=10;
		b++;          // b是幾位數 
	}
	
	for(int i=1; i<=b; i++)
	{
		a1=a%d/c;     //a拆開 
//		cout << "a1:" << a1 << endl;
		if(a1==0)
			zero++;
		if(a1==1)
			one++;
		if(a1==2)
			two++;
		if(a1==3)
			three++;
		if(a1==4)
			four++;
		if(a1==5)
			five++;
		if(a1==6)
			six++;
		if(a1==7)
			seven++;
		if(a1==8)
			eight++;
		if(a1==9)
			nine++;
		
		c*=10;
		d*=10;
		
		a1=a;
	}
//	cout <<zero<<one<<two<<three<<four<<five<<six<<seven<<eight<<nine<<endl;
	if(zero>1||one>1||two>1||three>1||four>1||five>1||six>1||seven>1||eight>1||nine>1)
		return 1;	
	else
		return 0;
	
}

int nosame(int a)
{
	int a1=a,a5=a,b=0,c=1,d=10,before=10,time=0;
	
	while(a5!=0)
	{
		a5/=10;
		b++;          // b是幾位數 
	}
	
	for(int i=1; i<=b; i++)
	{
		a1=a%d/c;     //a拆開 
//		cout << a1<<endl;
//		cout << before<<endl;
		
		c*=10;
		d*=10;
		if(a1==before)
			break;
		before=a1;
//		cout << "a1:"<<a1<<endl;
		a1=a;
		time++;
//		cout << "time:"<<time<<endl;
	}
	
	if(time!=b)
		return 0;
	else
		return 1;
	
}

int main(void)
{
	int a,a1,a2,add,add1,add2;
	
	cout << "Test1" << endl;
	cout << "Input:";
	cin >> a;
	add=nosame(a)+twoblock(a);
	
	if(add==2)
		cout << "Yes";
	else
		cout << "No";
	cout << endl;
	//
	cout << "Test2" << endl;
	cout << "Input:";
	cin >> a1;
	add1=nosame(a1)+twoblock(a1);
	
	if(add1==2)
		cout << "Yes";
	else
		cout << "No";
	cout << endl;
	//
	cout << "Test3" << endl;
	cout << "Input:";
	cin >> a2;
	add2=nosame(a2)+twoblock(a2);
	
	if(add2==2)
		cout << "Yes";
	else
		cout << "No";
		
	return 0;
}
