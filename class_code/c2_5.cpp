#include <iostream>
#include <cstdlib>

using namespace std;

int main(){
    int p, w, h;
    cout << "please enter width: ";
    cin >> w;
    cout << "please enter height: ";
    cin >> h;
    
    p = (w + h) * 2;
    cout << "perimater = " << p;
    
    return 0;
}
