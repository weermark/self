```c++
#include <iostream>
#include <cstdlib>

using namespace std;

int main(){
    for(int i = 2; i <= 128; i *= 2){
        cout << i << ' ';
    }
    
    return 0;
}
```