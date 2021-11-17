#include <iostream>
#include <cstdlib>

using namespace std;


unsigned long long int abs1=0;
unsigned long long int t10=10;
unsigned long long int t1=1;
//unsigned long long int one=100;
//long long int n1;
//long long int time=0;

void run(int,int);

void ab(int,int);

void answer(unsigned long long int s) //³Ì«á042002©î¶} __2 0     0 2      4 0 
{
	int q1=1, q10=10; //,q100=100;
	while(!(s<100))
	{
//		cout << "s:" << s << endl;
		cout << (s-q1)%q10/q1 << "A";
		q10*=10;
		q1*=10;
		cout << (s-q1)%q10/q1 << "B"<< endl;
		s/=100;
		
		q10/=10;
		q1/=10;
		
	}
	cout << (s-q1)%q10/q1 << "A";
	q10*=10;
	q1*=10;
	cout << (s-q1)%q10/q1 << "B";
//	cout << "s:" << s << endl;
//	
//	cout << (s-q1)%q10/q1 << "A";
//	q10*=10;
//	q1*=10;
//	cout << (s-q1)%q10/q1 << "B";

//	one/=1000;
//	t10/=100;
//	t1/=10;
//	
//	cout << "s:" << s << endl;
//	cout << "t10:" << t10 << endl;
//	cout << "t1:" << t1 << endl;
//	cout << "one:" << one << endl;
//	while(!(s==0))
//	{
//		s/=one;
//		cout << (s-t1)%t10/t1 << "A";
//		
//		t10/=10;
//		t1/=10;
//		
//		cout << (s-t1)%t10/t1 << "B"<< endl;
//		one/=100;
//	}
}

void run(int asum,int bsum) //042002
{
//	abs1+=one;
	abs1+=(asum+1)*t1;
	abs1+=(bsum+1)*t10;
//	time++;
//	if(time=n1)
//		break;
	
//	one*=1000;
	t10*=100;
	t1*=100;
	
//	cout << "abs1:" <<abs1 << endl;
}

void ab(int a,int b)
{
	int asum=0;
	int bsum=0;
	asum=0;
	bsum=0;
	
	int a1, a2, a3, a4, b1, b2, b3, b4;
	a4=a%10000/1000;
	a3=a%1000/100;
	a2=a%100/10;
	a1=a%10/1;
	
	b4=b%10000/1000;
	b3=b%1000/100;
	b2=b%100/10;
	b1=b%10/1;
	
	if(a4==b4)
		asum++;
	if(a3==b3)
		asum++;
	if(a2==b2)
		asum++;
	if(a1==b1)
		asum++;
	
	if(a4==b4)
		bsum++;
	if(a4==b3)
		bsum++;
	if(a4==b2)
		bsum++;
	if(a4==b1)
		bsum++;
	
	if(a3==b4)
		bsum++;
	if(a3==b3)
		bsum++;
	if(a3==b2)
		bsum++;
	if(a3==b1)
		bsum++;
		
	if(a2==b4)
		bsum++;
	if(a2==b3)
		bsum++;
	if(a2==b2)
		bsum++;
	if(a2==b1)
		bsum++;
		
	if(a1==b4)
		bsum++;
	if(a1==b3)
		bsum++;
	if(a1==b2)
		bsum++;
	if(a1==b1)
		bsum++;
	
	bsum-=asum;
	
//	cout << "Asum:" << asum << " " << "Bsum:" << bsum << endl;
	
	run(asum, bsum);
	

	
	
}

int main(void)
{
	int ans, n, a, b, c;
	
	cout << "Ans:";
	cin >> ans;
	cout << "n:";
	cin >> n;
//	n1=n;
	for(int i=1; i<=n; i++)
	{
		cout << "Input:";
		cin >> a;
		ab(ans,a);
	}
	answer(abs1);
	return 0;
}
