#include <iostream>
#include <cstdlib>

using namespace std;

int main(void)
{
	int a[8]={0}, num, /*b=0*/ t=0,z=0, n=0;
	while(1){
		cout << "Input:";
		cin >> num;
		t++;
		if(num==0)				//num=0,break 
			break;
		for(int i=0; i<8; i++){	//X在球座找 
			if(num==a[i]){
				for(int j=i; j<8; j++){
					if(a[j]==0 || j==7){
						a[j]=num;
						break;
					}
					a[j]=a[j+1];
//					a[j+1]=0;
					z++;
					
				}
				break;	
			}
		}
		if(z>0){
			z=0;
			continue;
		}
		if(t<=8){				//X當輸入次數小於8，繼續輸入 
			a[t-1]=num;
//			b++;
		}
		else{					//當輸入次數大於8，往前推 
			for(int i=0; i<8; i++){
				a[i]=a[i+1];
			}
			a[7]=num;
		}
	}
	cout << "Result:";
	for(int i=0; i<8; i++){
		if(n!=0){
			cout << " ";
		}
		cout << a[i];
		n++;
	}
	return 0;
}
