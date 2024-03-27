#include <iostream>
using namespace std;

void Input(long long &value){
	cout<<"Nhap n = ";cin>>value;
}

long long G(long long value){
	if(value==1 || value==3) 
		return value;
	else{
		if(value%2==0)
			return G(value/2);
		else if(value%4==1)
			return 2*G(2*(value/4)+1) - G(value/4);
		else if(value%4==3)
			return 3*G(2*(value/4)+1) - 2*G(value/4);
	}
}

int main(){
	long long N;
	Input(N);
	cout<<"g("<<N<<") = "<<G(N);
}
