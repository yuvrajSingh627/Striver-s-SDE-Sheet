#include<bits/stdc++.h>
using namespace std;

int maxSubArray(vector<int>& nums) {
    int maxSum = INT_MIN;
    int cSum = 0;

    for(int i = 0; i<nums.size(); i++){
        cSum += nums[i];
        maxSum = max(cSum, maxSum);

        if(cSum<0) cSum = 0;
    }
    return maxSum;
}

int main() {
    vector<int> nums = { 5,4,-1,7,8 };
    int maxSum = maxSubArray(nums);
    cout << "Answer: " << maxSum << endl;
    return 0;
}