#include <iostream>
#include <cstdlib>

using namespace std;

int main(){
	int a = 0, b = 1, c;
	c = a++ + b;
	
	cout << "a = " << a << endl;
	cout << "c = " << c << endl;
	
	return 0; 
}
