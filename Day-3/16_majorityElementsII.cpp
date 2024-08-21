#include<bits/stdc++.h>
using namespace std;

vector<int> majorityElement(vector<int>& nums) {
    int ele1 = INT_MIN;
    int ele2 = INT_MIN;
    int cnt1 = 0;
    int cnt2 = 0;

    for(int i = 0; i<nums.size(); i++){
        if( cnt1 == 0 && nums[i]!=ele2 ){
            ele1 = nums[i];
            cnt1++;
        }else if( cnt2 == 0 && nums[i]!=ele1 ){
            ele2 = nums[i];
            cnt2++;
        }else if(nums[i] == ele1){
            cnt1++;
        }else if(nums[i] == ele2){
            cnt2++;
        }else{
            cnt1--;
            cnt2--;
        }
    }
    cnt1 = 0, cnt2 = 0;
    for(int i = 0; i<nums.size(); i++){
        if(nums[i] == ele1 ) cnt1++;
        if(nums[i] == ele2 ) cnt2++;
    }
    int mini = (int)(nums.size()/3) +1;
    vector<int> ls;
    if(cnt1>=mini) ls.push_back(ele1);
    if(cnt2>=mini) ls.push_back(ele2);

    return ls;
}

int main(){
    vector<int> arr = {3,2,3};
    vector<int> ans = majorityElement(arr);
    cout << "The majority elements are: ";
    for (auto it : ans)
        cout << it << " ";
    cout <<endl;
    return 0;
}