#include <iostream>

using namespace std;

long long C(int k, int n){
	long long result = 1;
	for(int i=1; i<=k; i++, n--){
		result = result * n/i;
	}
	return result;
}

int main(){
	int m,n;
	cout<<"Nhap M = ";cin>>m;
	cout<<"Nhap N = ";cin>>n;
	cout<<"So cach = "<<C(m, m+n);
}
