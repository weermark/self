#include <iostream>
#include <cstdlib>

using namespace std;

int main(){
	int a = (2 != 6);
	int b = !(3 == 3);
	int c = (5 == 3);
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	cout << "c = " << c << endl;
	
	return 0;
}
