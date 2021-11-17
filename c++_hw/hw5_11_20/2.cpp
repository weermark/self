#include <iostream>
#include <cstdlib>

using namespace std;

int main(void)
{
	long long int n,m,sum1=1,sum2=1,n1,m1,sum3=1,sum4=1;
	cout << "Test1" <<endl;
	cout << "N:";
	cin >> n;
	cout << "M:";
	cin >> m;
	cout << "Test2" <<endl;
	cout << "N:";
	cin >> n1;
	cout << "M:";
	cin >> m1;
	for(int j=n-m+1; j<=n; j++)
	{
		sum1*=j;
	}

	for(int k=1; k<=m; k++)
	{
		sum2*=k;
	}
	int a = sum1/sum2;
	cout << "Result1:" << a <<endl;
	//
	for(int j=n1-m1+1; j<=n1; j++)
	{
		sum3*=j;
	}

	for(int k=1; k<=m1; k++)
	{
		sum4*=k;
	}
	int b = sum3/sum4;
	cout << "Result2:" << b;
	return 0;
}
