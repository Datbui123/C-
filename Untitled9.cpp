#include<iostream>
using namespace std;

bool check(int n, int m, int a[], int b[]){
	int sum = 0;
	for(int i = 1; i <= n; i++){
		sum += a[i]*b[i];
	}
	if(sum == m)
		return true;
	return false;
}

void gen(int k, int n, int m, int a[], int b[], int &count){
	if(k > n){
		if(check(n, m, a, b)){
			count++;
		}
		return;
	}
	b[k] = 0; gen(k+1,n,m,a,b,count);
	b[k] = 1; gen(k+1,n,m,a,b,count);
}

int main(){
	int m, n, count = 0;
	cout<<"Nhap m = "; cin>>m;
	cout<<"Nhap n = "; cin>>n;
	int a[n+1], b[n+1];
	a[0] = 0;b[0] = 0;
	for(int i = 1; i <= n; i++){
		cout<<"a["<<i-1<<"] = ";cin>>a[i];
	}
	gen(1,n,m,a,b,count);
	cout<<"Co tat ca "<<count<<" cach phan tich.";
	return 0;
}

