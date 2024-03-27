#include <iostream>
#include <map>
#define m 1000000007
using namespace std;

long long F(int n){
	if(n<=1){
		return 0;
	}
	else{
		long long f[4], fn;
		f[0] = 0;
		f[1] = 1;
		f[2] = 1;
		f[3] = 2;
		for(int i=5; i<=n; i++){
			fn = (f[0] + f[1] + f[2])%m;
			f[0] = f[1];
			f[1] = f[2];
			f[2] = f[3];
			f[3] = fn;
		}
		return fn;
	}
}

int main(){
	int n;
	cout<<"n = ";cin>>n;
	cout<<F(n);
}
