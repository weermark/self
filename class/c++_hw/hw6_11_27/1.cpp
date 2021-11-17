#include <iostream>
#include <cstdlib>

using namespace std;

int rev(int n)
{
	int  b,c,reverse=0, rem;    
	
 	while(n!=0)
	{
		rem=n%10;
	    reverse=reverse*10+rem;
	    n/=10;
	}
	 
	return reverse;  
}

void judg(int n)
{
	int c=0;
	do{
		n+=rev(n);
		c++;
	}while(n!=rev(n));
	cout<< c << " " << n;
	return ;
}

int main(void)
{
	int a,b;
	cout << "Input1:";
	cin >> a;
	cout << "Input2:";
	cin >> b;
	
	cout << "Result1:";
	judg(a);
	cout << endl;
	cout << "Result2:";
	judg(b);
	
	return 0;
}
