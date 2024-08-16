#include <bits/stdc++.h>
using namespace std;

#include <vector>
using namespace std;
vector<vector<int>> generate(int numRows) {
    vector<vector<int>> result;
    for (int i = 0; i < numRows; ++i) {
        vector<int> row(i + 1, 1);
        for (int j = 1; j < i; ++j) {
            row[j] = result[i - 1][j - 1] + result[i - 1][j];
        }
        result.push_back(row); 
    }
    return result;
}

int main()
{
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
