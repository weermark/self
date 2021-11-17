#include <iostream>
#include <cstdlib>
using namespace std;
int main(void)
{
	int a,b,c;
	
	cout << "Integer1:";
	cin >> a;
	
	cout << "Integer2:";
	cin >> b;
	
	cout << "Integer3:";
	cin >> c;
	
	// 1
	if(a%3 == 0 && a%5 == 0 && a%7 != 0)
	{
		cout << "Result1:" << 0 << endl;
	} 
	else 
	{
		cout << "Result1:" << 1 << endl;
	}
	
	// 2
	if(b%3==0 && b%5==0 && b%7!=0)
	{
		cout << "Result2:" << 0 << endl;
	} 
	else 
	{
		cout << "Result2:" << 1 << endl;
	}
	
	// 3
	if(c%3==0 && c%5==0 && c%7!=0)
	{
		cout << "Result3:" << 0 ;
	} 
	else 
	{
		cout << "Result3:" << 1 ;
	}
	
	return 0;
}
