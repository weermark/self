```c++
#include <iostream>
#include <cstdlib>

using namespace std;

int main(){
	int a = 10, d;
	float b = 3.3;
	char c = 'A';
	bool e = (5>3);
	d = c;
	
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	cout << "c = " << c << endl;
	cout << "d = " << d << endl;
	cout << "e = " << e << endl;
  return 0;
}
```

<br/>

```c++
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
```

<br/>

```c++
#include <iostream>
#include <cstdlib>

using namespace std;

int main(){
	int a = 0, b = 1, c;
	c = a++ + b;
	
	cout << "a = " << a << endl;
	cout << "c = " << c << endl;
	
	return 0; 
}
```

<br/>

```c++
#include <iostream>
#include <cstdlib>

using namespace std;

int main(){
	int a = (2 != 6);
	int b = !(3 == 3);
	int c = (5 == 3);
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	cout << "c = " << c << endl;
	
	return 0;
}
```

<br/>

```c++
#include <iostream>
#include <cstdlib>

using namespace std;

int main(){
  int n;
  cout << "enter a num: ";
  cin >> n;
  for(int i = 0; i < n; i++){
    for(int j = 0; j < i+1; j++){
      cout << "*";
    }
    cout << endl;
  }

  return 0;
}
```
