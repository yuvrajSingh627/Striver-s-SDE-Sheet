#include <bits/stdc++.h>
using namespace std;

vector<int> generateRows(int row){
    long long ans = 1;
    vector<int> ansRow;
    ansRow.push_back(1);

    for(int i = 1; i<row; i++){
        ans = ans*(row-i);
        ans = ans/i;
        ansRow.push_back(ans);
    }
    return ansRow;
}

vector<vector<int>> generate(int numRows) {
    vector<vector<int>> ans;

    for(int i = 1; i<=numRows; i++){
        ans.push_back(generateRows(i));
    }
    return ans;
}
int main(){
    int n = 5;
    cout<<"n is "<<n<<endl;
    vector<vector<int>> ans = generate(n);
    cout << "Result: "<<endl;
    for (auto it : ans) {
        for (auto ele : it) {
            cout << ele << " ";
        }
        cout <<endl;
    }
    return 0;
}
