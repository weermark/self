#include <iostream>
#include <cstdlib>

using namespace std;

int main(void)
{
    int a,sum=0,b=0;
    do{
    	cout << "Input:";
		cin >> a;
		if(a>=0)
		sum+=a;
		b++;
	}while(a != 0);
	cout << "Sum:" << sum <<endl;
    cout << "Count:" << b-1;
    
    return 0;
}
