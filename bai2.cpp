#include <iostream>
#include <cmath>
using namespace std;
bool isSquare(int a){
    if(a<1) 
        return false;
    int i=1;
    while(i*i<=a){
        if(i*i==a)   
            return true; 
        i++;
        }
    return false;  
}

int main(){
	int n;
	cin>>n;
	int cnt = 0;
	for(int i=1;i<=n;i++){
		for(int j=i+1; j<=n; j++){
			if(i+j+sqrt(i*i+j*j)>n)
				break;
			if(isSquare(i*i+j*j))
				cnt++;
		}
	}
	cout<<cnt;
}

