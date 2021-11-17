#include <iostream>
#include <cstdlib>

using namespace std;

int main(void)
{
	int a[5];
	

	for(int i=0; i<5; i++){
		
		cout <<  "Integer"<<i+1<<":";
		cin >> a[i];
		for(int j=0; j<i; j++){
			while(a[i]==a[j]){
				cout << "Duplicate!"<< endl;
				cout <<  "Integer"<<i+1<<":";
				cin >> a[i];
				j=0;
			}
			
		}
		
	}
	cout << "Result:";
	for(int i=0; i<5; i++){
		if(i==0)
			cout << a[i];
		if(i>0)
			cout << " " <<a[i];
	}
	
	return 0;
}

