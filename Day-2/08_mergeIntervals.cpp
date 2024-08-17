#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> merge(vector<vector<int>>& intervals) {
    sort(intervals.begin(), intervals.end());
    vector<vector<int>>ans;

    for(int i = 0; i<intervals.size(); i++){
        if(ans.empty() || intervals[i][0]>ans.back()[1]){
            ans.push_back(intervals[i]);
        }else{
            ans.back()[1] = max(ans.back()[1], intervals[i][1]);
        }
    }
    return ans;
}

int main()
{
    vector<vector<int>> arr = {{1, 3}, {8, 10}, {2, 6}, {15, 18}};
    vector<vector<int>> ans = merge(arr);
    cout<<"The merged intervals are: "<<"\n";
    for(auto it : ans){
        cout<<"["<<it[0]<<","<<it[1]<<"] ";
    }cout<<endl;
    return 0;
}