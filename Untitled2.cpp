#include <iostream>
#include <algorithm>
#include <set>
using namespace std;

void Input(int array[], int numberElements){
	for(int i=0; i<numberElements; i++)
		cin>>array[i];
}

//Ham dem so luong cap so cong voi 1 cong sai
int CountNumbersArithmeticProgressionWithOneArithmeticRatio(int A[], int numberElements, int arithmeticRatio){
	int numbersArithmeticProgression=0;
	for(int i=0; i<=numberElements-5; i++){
		int countFiveNumbers = 1, B = A[i];
		for(int j=i+1;j<numberElements;j++){
			if(A[j]==B+arithmeticRatio){
				countFiveNumbers++;
				B = A[j];
			}
			if(countFiveNumbers==5){
				numbersArithmeticProgression++;
				break;
			}
		}
	}
	return numbersArithmeticProgression;
}

//Ham tim tat ca cong sai
void findAllArithmeticRatio(int A[], int numberElements, set<int> &d){
	for(int i=0; i<=numberElements-5; i++){
		for(int j=i+1; j<=numberElements-4; j++){
			d.insert(A[j] - A[i]);
		}
	}
}

int main(){
	set<int> d;
	int N;cin>>N;
	int A[N], sum=0;
	Input(A,N);
	sort(A, A+N);
	findAllArithmeticRatio(A, N, d);
	for(int i:d){
		sum += CountNumbersArithmeticProgressionWithOneArithmeticRatio(A, N, i);
	}
	cout<<sum;
}
