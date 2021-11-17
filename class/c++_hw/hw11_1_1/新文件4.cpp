#include <iostream>
#include <cstdlib>
#include <string>
#include <cstring>
#include <cctype>

using namespace std;

int main(void)
{
	string a[26]={"a","b","c","d","e","f","g","h","i","j","k","l","m","n","o","p","q","r","s","t","u","v","w","x","y","z"};
	string A[26]={"A","B","C","D","E","F","G","H","I","J","K","L","M","N","O","P","Q","R","S","T","U","V","W","X","Y","Z"};
	int m, n, i=0,z=0;
	string str,str1;
	
	cout << "Input:";
	cin >> str;
	cout << "m:";
	cin >> m;
	cout << "n:";
	cin >> n;
	
	str1.assign(str, m-1, n-m+1);
	
	int l=str1.length();
	
	string str2[l];
	
	for(int j=0; j<l; j++){
		str2[j].assign(str1, z, 1);
		z++;
	}
	
	
	for(int k=0; k<n-m+1; k++){
		for(int j=0; j<26; j++){
			if(str2[k]==a[j]){
				str2[k]=A[j];
				break;
			}
			if(str2[k]==A[j]){
				str2[k]=a[j];
				break;
			}
		}
	}
	
	cout << "Result:";
	for(int j=0; j<l; j++){
		cout << str2[j];
	}
	
	
	return 0;
}
