#include <iostream>//X
#include <cstdlib>

using namespace std;

int main(void)
{
	int n, t=0, s=0, z=0,w,posi,q=0; //n-s
	cout << "N:";
	cin >> n;
	int a[n];
	for(int i=0; i<n; i++){	//1,2,3,...,500 �� 
		a[i]=i+1;
		
	}
	for(int i=0; i<n; i++){	//1,3,5,...,500 �_�� 
		if(a[i]%2==0)
			a[i]=0;
			s++;
	}
	for(int i=0; i<n; i++){	//��0�h�� 
		while(a[z]==0){
			z++;
		}
		if(z<=n){
			a[i]=a[z];
			z++;	
		}
		if(z>n){
			a[i]=0;
			z++;	
		}
	}
	z=0;
//	cout << posi << endl;	//
	for(int i=1; i<n; i++){	//��m2�O3�A��m3�O7...
		if(a[i]==0)			//? || a[i]>n 
			break;
		posi=a[i];
//		cout << posi << endl; //
		for(int j=0; j<n; j++){
//			w=j;
			if((j+1)%posi==0){
				a[j]=0;
			}	
		}
		for(int k=0; k<n; k++){	//��0�h�� 
			while(a[z]==0){
				z++;
			}
			if(z<=n){
				a[k]=a[z];
				z++;	
			}
			if(z>n){
				a[k]=0;
				z++;	
			}
		}
		z=0;
	}
	
	for(int i=0; i<n; i++){
//		if(a[i]==0)
//			break;
		if(q!=0){
			cout << " ";
		}
		cout << a[i];
		q++;
	}

	return 0;
}
