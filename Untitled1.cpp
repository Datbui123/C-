#include <iostream>
using namespace std;

long long Fibonacci(long long k){
	long long F0=0, F1=1, Fn=0;
	if(k<=0)
		return 0;
	while(Fn<=k){
    	Fn = F0 + F1;
    	F0 = F1;
    	F1 = Fn;
	}
	return Fn;
}

int main(){
    long long k;
    cin>>k;
	cout<<Fibonacci(k);
}
