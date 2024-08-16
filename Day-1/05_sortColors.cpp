#include<bits/stdc++.h>
using namespace std;

void sortColors(vector<int>& nums) {
    int l = 0, r = nums.size()-1, m = 0;

    while(m<=r){
        if(nums[m] == 0){
            swap(nums[m], nums[l]);
            l++;
            m++;
        }else if(nums[m] == 2){
            swap(nums[m], nums[r]);
            r--;
        }else{
            m++;
        }
    } 
}

int main()
{
    vector<int> nums = {2,0,2,1,1,0};
    sortColors(nums);
    cout << "After sorting:" << endl;
    for (int i = 0; i < nums.size(); i++) {
        cout << nums[i] << " ";
    }
    cout << endl;
    return 0;
}