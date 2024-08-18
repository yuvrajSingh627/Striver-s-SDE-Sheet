#include<bits/stdc++.h>
using namespace std;

double myPow(double x, int n) {
    long long nn = n;
    double ans = 1.0;

    if(nn<0) nn= (-1)*nn;
    while(nn){
        if(nn%2==1){
            ans = ans*x;
            nn -= 1;
        }else{
            x = x*x;
            nn/=2;
            }
    }

    if(n<0){
        ans = (double)1/(double)ans;
    }
    return ans;
}

int main() {
  cout << myPow(2, 10) << endl;
  return 0;
}
