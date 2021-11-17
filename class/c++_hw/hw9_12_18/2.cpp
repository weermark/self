#include <iostream>
#include <cstdlib>

using namespace std;

int main(void)
{
	int a[5], j=0;
	
//	cout <<  "Integer1:";
//	cin >> a[0];
//	cout <<  "Integer2:";
//	cin >> a[1];
//	cout <<  "Integer3:";
//	cin >> a[2];
//	cout <<  "Integer4:";
//	cin >> a[3];
//	cout <<  "Integer5:";
//	cin >> a[4];
	for(int i=0; i<5; i++){
		do{
			cout <<  "Integer"<<i+1<<":";
			cin >> a[i];
		}while((a[i]>=10));
	}
	cout << "Array:";
	for(int i=0; i<5; i++){
		if(i==0)
			cout << a[i];
		if(i>0)
			cout << " " <<a[i];
	}
	cout << endl;
	cout << "Reverse:";
	for(int i=4; i>=0; i--){
		if(i==4)
			cout << a[i];
		else
			cout << " " <<a[i];
	}
	cout << endl;
	cout << "Arrayeven:";
	for(int i=0; i<5; i++){
		if(j==0 && a[i]%2==0){
			cout << a[i];
			j++;
		}
		else if(a[i]%2==0)
			cout << " " <<a[i];
	}
	j=0;
	cout << endl;
	cout << "Arraysame:";
	for(int i=0; i<5; i++){
		if(j==0 && a[i]==i){
			cout << a[i];
			j++;
		}
		else if(a[i]==i)
			cout << " " <<a[i];
//		if(i=0)
//			cout << a[i];
//		if(i>0 && a[i]==i)
//			cout << " " <<a[i];
	}
	cout << endl;
	cout << "Min:";
	int min=10;
	for(int i=0; i<5; i++){
		if(a[i]<min)
			min=a[i];
	}
	cout << min;
	return 0;
}
