#include <iostream>
#include <cstdlib>
#include <cmath>
#include <sstream>

using namespace std;
string to_str(int);
void getResult(int n)
{
    int sum=0;
    string s = to_str(n);
    for(int i=0; i<s.length(); i++) {
        int n = (int)s[i] - 48;
        sum += pow(n, s.length());
    }

    if (sum==n) {
        cout << "Yes";
        for(int i=0; i<s.length(); i++) {
            int n = (int)s[i] - 48;
            cout << " " << pow(n, s.length());
        }
        cout << endl;
    } else {
        cout << "No\n";
    }
}

string to_str(int n)
{
    string str;
    stringstream ss;
    ss << n;  
    ss >> str; 
    return str;
}

int main()
{
    int n1, n2, n3;
    cout << "Integer1:";
    cin >> n1;
    cout << "Integer2:";
    cin >> n2;
    cout << "Integer3:";
    cin >> n3;

    cout << "Result1:";
    getResult(n1);
    cout << "Result2:";
    getResult(n2);
    cout << "Result3:";
    getResult(n3);

    return 0;
}
