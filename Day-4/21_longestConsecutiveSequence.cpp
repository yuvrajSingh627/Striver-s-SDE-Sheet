#include<bits/stdc++.h>
using namespace std;

int longestConsecutive(vector<int>& nums) {
    int n = nums.size();
    if(n==0) return 0;
    int longest = 1;

    unordered_set<int> st;
    for(int num: nums){
        st.insert(num);
    }

    for(int it: st){
        if(st.find(it-1) == st.end()){
            int cnt = 1;
            int x = it;

            while(st.find(x+1) != st.end()){
                cnt++;
                x++;
            }
            longest = max(longest, cnt);
        }
    }

    return longest;
}

int main(){
    vector<int> nums = {0,3,7,2,5,8,4,6,0,1};
    cout<<longestConsecutive(nums)<<endl;
    return 0;
}