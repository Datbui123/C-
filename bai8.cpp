#include<iostream>
using namespace std;
int n,a[100],K;

bool check(int k){
	for(int i=1;i<k;i++){
		if(a[i] < a[i+1]) return false;
	}
	return true;
}


int count = 0;

void sinh(int k,int p,int z){
	
	if(n==p && check(k)){
		//print(k);
		if(z>=K){
			count++;
		}
		cout<<count<<" ";
		return;
	}
	for(int i=n-p;i>=1;i--){
		a[k] = i;
		sinh(k+1,p+i,z*i);
	}
}




int main(){
	cout<<"nhap n = ";cin>>n;
	cout<<"nhap K = ";cin>>K;
	//gen(1,0);
	sinh(1,0,1);
	cout<<"so cach phan tich cap K  = "<<count;
}

