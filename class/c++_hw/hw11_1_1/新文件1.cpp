#include <iostream>
#include <cstdlib>

using namespace std;

int main(void)
{
	int n,time=0;
	
	cout << "n:";
	cin >> n;
	
	int p[n], t[n];
	
	cout << "Peter" <<endl;
	for(int i=0; i<n; i++){
		cout << "Input:";
		cin >> p[i];
	}
	cout << "Tom" <<endl;
	for(int i=0; i<n; i++){
		cout << "Input:";
		cin >> t[i];
	}
	//
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			if(p[i]==t[j]){
				time++;
			}
		}
	}
	cout << "Result:" << time;
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			if(p[i]==t[j]){
				cout << " " <<p[i];
			}
		}
	}
	
	
	return 0;
}
