#include<bits/stdc++.h>
using namespace std;

int majorityElement(vector<int>& nums) {
    int ele = 0;
    int cnt = 0;

    for(int i = 0; i<nums.size(); i++){
        if(cnt == 0){
            ele = nums[i];
            cnt++;
        }else if(ele == nums[i]){
            cnt++;
        }else{
            cnt--;
        }
    }

    return ele;
}

int main(){
    vector<int> arr = {2, 2, 1, 1, 1, 2, 2};
    int ans = majorityElement(arr);
    cout << "The majority element is: " << ans << endl;
    return 0;
}