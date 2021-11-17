#include <iostream>
#include <cstdlib>

using namespace std;

int myfun(int x,int y)
{
	if(x<0 || y<0)
		return y-x;
	else
		return 3*myfun(x,y-1)-2*myfun(x-1,y);
}

int main(void)
{
	int x1,y1,x2,y2;
	
	cout << "Inputx1:";
	cin >> x1;
	cout << "Inputy1:";
	cin >> y1;
	cout << "Inputx2:";
	cin >> x2;
	cout << "Inputy2:";
	cin >> y2;
	cout << "Result1:" << myfun(x1,y1) << endl;
	cout << "Result2:" << myfun(x2,y2);
	return 0;
}
