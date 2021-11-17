#include <iostream>
#include <cstdlib>

using namespace std;

int main(void)
{
    int a,b,i=0;
    
    cout << "Input1:";
	cin >> a;
	cout << "Input2:";
	cin >> b;
	cout << "Output1:" <<endl;
	cout << a <<endl;
    while(a>1){
    	if(a%2==0){
    		a=a/2;
		}
		else{
    		a=a*3+1;
		}
		cout << a <<endl;
	}
	//
	cout << "Output2:" <<endl;
	cout << b <<endl;
    while(b>1){
    	if(b%2==0){
    		b=b/2;
		}
		else{
    		b=b*3+1;
		}
		cout << b <<endl;
	}
    return 0;
}
