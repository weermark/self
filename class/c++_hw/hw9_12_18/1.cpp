#include <iostream>
#include <cstdlib>

using namespace std;

int main(void)
{
	int a[10], b[10]={0,1,2,3,4,5,6,7,8,9},c[10]={0};
	

	for(int i=0; i<10; i++){
		cout <<  "Integer:";
		cin >> a[i];
		for(int j=0; j<10; j++){
			if(b[j]==a[i]){
				c[j]++;
			}
		}
	}
//	for(int i=0; i<10; i++){
//		cout << c[i];
//	}
	int max=0, j=0;
	for(int i=0; i<10; i++){
		if(c[i]>max)
			max=c[i];
//			cout <<"max:" <<max<<endl;
	}
	cout << "Result:";
	for(int i=0; i<10; i++){
		if(j==0 && c[i]==max){
			cout << b[i];
			j++;
		}
		else if(j>0 && c[i]==max)
			cout << " " <<b[i];
	}
	
	
	return 0;
}

