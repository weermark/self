#include <iostream>
#include <cstdlib>

using namespace std;

int main(void)
{
    int a,b;
    cout << "Input1:";
    cin >> a;
    cout << "Input2:";
    cin >> b;
    cout << "Result1:" <<endl;
    for(int i=1 ; i<=a ; i++){
        for(int j=1 ; j<=i ; j++){
        	cout << "*";
		}cout << endl;
    }
    //
    cout << "Result2:" <<endl;
    for(int i=1 ; i<=b ; i++){
        for(int j=1 ; j<=i ; j++){
        	cout << "*";
		}cout << endl;
    }
    return 0;
}
