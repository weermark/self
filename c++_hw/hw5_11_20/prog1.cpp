#include <iostream>
#include <cstdlib>
#include <cmath>

using namespace std;

void getResult(int n)
{
    int result=0, powNum=0, c=0;

    do {
        for(int i=9; i>1; i--) {
            if (n%i==0) {
                cout << "n: " << n << endl;
                result = i * pow(10, powNum) + result;
                powNum+=1;
                cout << "pown: "<< powNum << endl;
                n/=i;
                cout << "result: " <<  result << endl;
                break;
            }
        }
        c++;
    } while(n!=1 && c<50);

    if (c>=50)
        cout << 0;
    else 
        cout << result;
}

int main()
{
    int a, b, c;
    cout << "Input1:";
    cin >> a;
    cout << "Input2:";
    cin >> b;
    cout << "Input3:";
    cin >> c;

    cout << "Result1:";
    getResult(a);
    cout << "\nResult2:";
    getResult(b);
    cout << "\nResult3:";
    getResult(c);

    return 0;
}
