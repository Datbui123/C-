#include<iostream>
#include<cmath>
using namespace std;

int a, b, m, gi, g,n;

int main(){
	cout<<"A = "; cin>>a;
	cout<<"B = "; cin>>b;
	cout<<"M = ";cin>>m;
	gi = pow(a,b);
	g=gi%m;
	cout<<"G = "<<g;
}



