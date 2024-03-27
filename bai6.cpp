#include <iostream>
using namespace std;

long long f(int n){
    if (n == 1)
    {
        return 0;
    }
    if (n == 2 || n == 3)
    {
        return 1;
    }
    if (n == 4){
        return 2;
    }
    else
    {
        return (f(n-2) + f(n-3) + f(n-4))%1000000007;
    }
    
}

int main(){
    int n;
    cin>>n;
    
    long long c[n+1];
    c[1] = 0;
    c[2] = 1;
    c[3] = 1;
    c[4] = 2;
    for (int i = 5; i <=n; i++)
    {
        c[i] = (c[i-3] + c[i-2] + c[i-4])%1000000007;
    }
    
    cout<<c[n]%1000000007;
    cout<<endl;
    cout<<f(n)%1000000007;

}
