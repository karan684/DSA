#include <bits/stdc++.h>
vector<int> reverse(vector<int> v){
    int s = 0;
    int e = v.size() - 1;
    
    while(s < e){
        swap(v[s++], v[e--]);
    }
    
    return v;
}


vector<int> findArraySum(vector<int>&a, int n, vector<int>&b, int m) {
	// Write your code here.
    vector<int> ans;
    int i = n - 1, j = m - 1;
    int carry = 0, sum = 0;
    
    while(i >= 0 && j >= 0){
        int val1 = a[i];
        int val2 = b[j];
        
        sum = val1 + val2 + carry;
        carry = sum / 10;
        int val = sum % 10;
        ans.push_back(val);
        i--;
        j--;
    }
    
    // first case
    while(i >= 0){
        sum = a[i] + carry;
        carry = sum / 10;
        int val = sum % 10;
        ans.push_back(val);
        i--;
    }
    
    //second case
    while(j >= 0){
        sum = b[j] + carry;
        carry = sum / 10;
        int val = sum % 10;
        ans.push_back(val);
        j--;
    }
    
    //third case
    while(carry != 0){
        sum = a[i] + carry;
        carry = sum / 10;
        int val = sum % 10;
        ans.push_back(val);
    }
    
    return reverse(ans);
    
}
