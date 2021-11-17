#include <iostream>
#include <cstdlib>

using namespace std;

void so(int n)
{
	int a[n];

	a[0]=1; a[1]=1; a[2]=1;
	
	for(int i=3; i<n; i++){
		a[i]=a[i-1]+a[i-2]+a[i-3];
//		cout << a[i]<< endl;
	}
	cout << "Result:" <<a[n-1];
}


int main(void)
{
	int n,n1;
	cout << "n:";
	cin >> n;
	so(n);
	cout << endl;
	cout << "n:";
	cin >> n1;
	so(n1);
	
	return 0;
	
	
}
