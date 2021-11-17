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
	string str;
	string space=" ",no="";
	int z=0, time=0,p=0;
	
	cout << "Input:";
	getline(cin, str);		
//	cout << str <<endl;
	int l=str.length();
	
	string str1[l],str2[l];
	
	for(int j=0; j<l; j++){				//str拆到陣列str1 
		str1[j].assign(str, j, 1);
		
	}
	z=0;
	for(int k=0; k<str.length(); k++){	//str1大寫轉小寫 
		for(int j=0; j<26; j++){
			if(str1[k]==A[j]){
				str1[k]=a[j];
				break;
			}
		}
	}
//	if(str1[2]==space)
//		cout << "yes";
	
	for(int k=0; k<str.length(); k++){	//str1分單字轉給str2 
		for(int j=0; j<26; j++){
			if(str1[k]==a[j])
				str2[z]+=a[j];
			else if(str1[k]==space){
				z++;
				break;
			}
				
//			cout << "one"<<j<<endl;
		}
//		cout << "time"<<k <<":"<<z<<endl;
	}
	
	
	
	
	
	for(int j=0; j<l; j++){				//比較 
		time=0;
		p=0;
		if(str2[j]==no)
			break;
		for(int k=j; k<l; k++){

			if(str2[j]==str2[k])
				time++;
//			if(time>0)
//				str2[k]=f;
			
		}
		for(int m=j-1; m>=0; m--){		//輸出 
			if(str2[j]==str2[m]){
				p++;	
			}
		}
		if(p>0)
			continue;
		cout <<str2[j]<< " " <<time<<endl;
		
	}
	
	
//	cout << "Result:";			
//	for(int j=0; j<l; j++){
//		cout << str2[j] <<endl;
//	}
	
	return 0;
}
