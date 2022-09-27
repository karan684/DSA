#include <bits/stdc++.h> 
vector<int> wavePrint(vector<vector<int>> arr, int nRows, int mCols)
{
    //Write your code here
    vector<int> ans;
    
    for(int col = 0; col < mCols; col++){
        if(col & 1){
            // if column no is odd
            for(int row = nRows - 1; row >= 0; row--){
                // cout<<arr[row][col]<< " ";
                ans.push_back(arr[row][col]);
            }
        }
        else{
            // if column no is 0 or even
            for(int row = 0; row < nRows; row++){
                // cout<<arr[row][col]<< " ";
                ans.push_back(arr[row][col]);
            }
        }    
    }
    return ans;
}
