#include <iostream>
using namespace std;

void Sort(int array[], int numberElements){
	for(int i=0; i<numberElements; i++){
		for(int j=1; j<numberElements-i; j++){
			if(array[j]<array[j-1]){
				int temp = array[j];
				array[j] = array[j-1];
				array[j-1] = temp;
			}
		}
	}
}

int FindMaxHeight(int numberElements){
	int array[numberElements];
	for(int i=0; i<numberElements; i++)cin>>array[i];
	Sort(array, numberElements);
	int maxHeight=1;
	for(int i=1; i<numberElements; i++){
		if(array[i]>=maxHeight)
			maxHeight++;
	}
	return maxHeight;
}

int main(){
	int N;
	cin>>N;
	cout<<FindMaxHeight(N);
}
