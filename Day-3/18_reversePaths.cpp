#include<bits/stdc++.h>
using namespace std;

void merge(vector<int>& nums, int l, int m, int h) {
    vector<int> temp;
    int left = l;
    int right = m + 1;

while (left <= m && right <= h) {
        if (nums[left] <= nums[right]) {
            temp.push_back(nums[left++]);
        } else {
            temp.push_back(nums[right++]);
        }
    }

    while (left <= m) {
        temp.push_back(nums[left++]);
    }
    while (right <= h) {
        temp.push_back(nums[right++]);
    }

    for (int i = l; i <= h; i++) {
        nums[i] = temp[i - l];
    }
}

int countPairs(vector<int>& nums, int l, int m, int h) {
    int cnt = 0;
    int right = m + 1;
    for (int i = l; i <= m; i++) {
        while (right <= h && nums[i] > 2LL * nums[right]) 
            right++;
        cnt += (right - (m + 1));
    }
    return cnt;
}

int mergeSort(vector<int>& nums, int l, int h) {
    int cnt = 0;
    if(l>=h) return cnt;
        
    int m = (l + h) / 2;

    cnt += mergeSort(nums, l, m);
    cnt += mergeSort(nums, m + 1, h);
    cnt += countPairs(nums, l, m, h);
    merge(nums, l, m, h);

    return cnt;
}

int reversePairs(vector<int>& nums) {
    return mergeSort(nums, 0, nums.size() - 1);
}

int main(){
    vector<int> a = {2, 4, 3, 5, 1};
    int cnt = reversePairs(a);
    cout << "The number of reverse pair is: "
         << cnt << endl;
    return 0;
}