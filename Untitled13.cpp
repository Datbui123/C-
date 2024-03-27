#include <iostream>
using namespace std;

long long FindCharIndex(long long lengthString, long long index){
	if(index<lengthString)
		return index;
	else{
		return index%lengthString;
	}
}
int main(){
	string W;
	getline(cin,W);
	for(int i=W.length()-1; i>=0; i--)W+=W[i];

	int M;cin>>M;
	long long array[M];
	for(int i=0; i<M; i++)cin>>array[i];
	for(int i=0; i<M; i++)cout<<W[FindCharIndex(W.length(), array[i])]<<endl;
}
