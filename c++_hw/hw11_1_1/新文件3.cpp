#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

int main(void)
{
	string str,a="a", e="e", i="i", o="o", u="u";
	string A="A",E="E",I="I", O="O", U="U";
	int b=0,t=0,l=0,z=0;
	cout << "Input:";
	cin >> str;
	
	l=str.length();
	
	string str1[l];
	for(int j=0; j<l; j++){
		str1[j].assign(str, z, 1);
		z++;
	}
	
	for(int j=0; j<l; j++){
		if(str1[j]==a || str1[j]==A){
			t++;
		}	
	}
	cout << "A:"<<t;
	z=0;
	t=0;
	cout << endl;
	for(int j=0; j<l; j++){
		if(str1[j]==e || str1[j]==E){
			t++;
		}
	}
	cout << "E:"<<t;
	z=0;
	t=0;
	cout << endl;
	for(int j=0; j<l; j++){
		if(str1[j]==i || str1[j]==I){
			t++;
		}
	}
	cout << "I:"<<t;
	z=0;
	t=0;
	cout << endl;
	for(int j=0; j<l; j++){
		if(str1[j]==o || str1[j]==O){
			t++;
		}
	}
	cout << "O:"<<t;
	z=0;
	t=0;
	cout << endl;
	for(int j=0; j<l; j++){
		if(str1[j]==u || str1[j]==U){
			t++;
		}
	}
	cout << "U:"<<t;
	z=0;
	t=0;
	
	
	return 0;
	
}

