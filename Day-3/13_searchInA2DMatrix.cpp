#include<bits/stdc++.h>
using namespace std;

bool searchMatrix(vector<vector<int>>& matrix, int target) {
    int m = matrix[0].size();
    int low = 0;
    int high = matrix.size()*(matrix[0].size())-1;

    while(low<=high){
        int mid = (low + high)/2;
        int row = mid/m, col = mid%m;
        
        if(matrix[row][col] == target ) return true;
        else if(matrix[row][col] < target){
            low = mid+1;
        }
        else high = mid - 1;
    }
    return false;
}

int main(){
    vector<vector<int>> matrix = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}};

    searchMatrix(matrix, 8) == true ? cout << "true\n" : cout << "false\n";
    return 0;
}