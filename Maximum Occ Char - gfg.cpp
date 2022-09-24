//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends



class Solution
{
    public:
    //Function to find the maximum occurring character in a string.
    char getMaxOccuringChar(string str)
    {
        // Your code here
        int arr[26] = {0};
        
        for (int i = 0; i < str.length(); i++){
            int number = 0; //lowercase
            if (str[i] >= 'a' && str[i] <= 'z'){
                number = str[i] - 'a';
            }
            else{//uppercase
                number = str[i] - 'A';
            }
            arr[number]++;
        }
        // find maximum occ char
        int maxi = -1;
        int ans = 0;
        for(int i = 0; i < 26 ; i++){ //size of arr
            if (maxi < arr[i]){
                ans = i;
                maxi = arr[i];
            }
        }
        int finalAns = ans + 'a';
    }

};

//{ Driver Code Starts.

int main()
{
   
    int t;
    cin >> t;
    while(t--)
    {
        string str;
        cin >> str;
    	Solution obj;
        cout<< obj.getMaxOccuringChar(str)<<endl;
    }
}
// } Driver Code Ends
