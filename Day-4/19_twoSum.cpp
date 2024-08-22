#include<bits/stdc++.h>
using namespace std;

vector<int> twoSum(vector<int>& nums, int target){
    unordered_map<int, int> m;

    for(int i = 0; i<nums.size(); i++){
        int ele = nums[i];
        int more = target-ele;

        if(m.find(more) != m.end()) return {m[more], i};

        m[ele] = i;
    }
    return {-1, 1};
}

int main(){
    vector<int> nums = {2, 7, 11, 15};
    int target = 9;
    
    vector<int> ans = twoSum(nums, target);
    for(auto a: ans){
        cout<<a<<" ";
    }cout<<endl;

    return 0;
}