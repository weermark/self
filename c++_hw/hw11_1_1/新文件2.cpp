#include <iostream>
#include <cstdlib>

using namespace std;

int main(void)
{
	int a[50], n, z=0, q=0;
	
	for(int i=0; i<50; i++){
		a[i]=i+1;
	}
	while(1){
		cout << "n:";
		cin >> n;
		if(n==0){				//n=0
			for(int i=0; i<50; i++){
				if(a[i]==0)
					break;
				if(q!=0){
					cout << " ";
				}
				cout << a[i];
				q++;
			}
			break;
		}
			
		for(int i=0; i<50; i++){	//a[i]=0			
			if(a[i]%n==0){
				a[i]=0;
			}
		}
//		cout <<"one";
		for(int i=0; i<50; i++){	//§â0¥h±¼ 
			while(a[z]==0){
				z++;
			}
			if(z<=50){
				a[i]=a[z];
				z++;	
			}
			if(z>50){
				a[i]=0;
				z++;	
			}
		}
		
		z=0;
		for(int i=0; i<50; i++){	//cout a[i]
			if(a[i]==0)				//1 3 7 0 0 0 1 3 7 
				break;	
			if(q!=0){
				cout << " ";
			}
			cout << a[i];
			q++;
		}
		q=0;
		cout << endl;
	}
	
	
	return 0;
}
