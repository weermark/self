#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

int main(void)
{
	string str;
	
	int b=0,t=0,l=0,z=0;
	cout << "Input:";
	cin >> str;
	
	l=str.length();
	
	string str1[l];
	
	for(int j=0; j<l; j++){
		str1[j].assign(str, z, 1);
		z++;
	}
	cout << "Result:";
	for(int j=l-1; j>=0; j--){
		cout << str1[j];
	}
}
