#include<bits/stdc++.h>
using namespace std;

int maxLen(vector<int>&A, int n){   
    int sum = 0;
    int ans = 0;
    unordered_map<int, int> m;
    for(int i = 0; i<n; i++){
        sum+=A[i];
        if(sum == 0) ans = i+1;
        else{
            if(m.find(sum)!=m.end()){
                int l = i-m[sum];
                ans = max(l, ans);
            }
            if(m.find(sum)==m.end()){
                m[sum] = i;
            }
        }
    }
    return ans;
}

int main(){
    vector<int> nums = {15,-2,2,-8,1,7,10,23};
    cout<<maxLen(nums,8)<<endl;
    return 0;
}