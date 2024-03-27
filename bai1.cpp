#include <iostream>
#include <map>
using namespace std;

map <long long, long long> F;

long long f(int n){
    if (n == 1 && F[n]==-1)
    {
        F[n] = 0;
        return F[n];
    }
    if (n %2 == 0 && F[n]== -1)
    {
        F[n] = 1 + f(n/2);
    }
    if (n%2 == 1 && F[n]==-1)
    {
        F[n] = 1 + f(3*n+1);
    }
    return F[n];
}

int main(){
    long long n;
    cin>>n;
    for (int i = 1; i <= 4*n+2; i++)
    {
        F[i] = -1;
    }
//     long long f[n+1];
//     f[1] = 0;
//     for (long long i = 2; i < n+1; i+=2)
//     {
//         f[i] = 1+f[i/2];
//     }
//     for (long long i = 3; i < n+1; i+=2)
//     {
//         f[i] = 1 + f[3*i+1];
//     }
//     cout<<f[n];
    cout<<f(n);
}

