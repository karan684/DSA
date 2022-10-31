#include <bits/stdc++.h> 
void reverse(string& str, int i){
    
    // base case
    if(i >= str.length()/2)
        return;
    
    swap(str[i++], str[str.length() - i - 1]);
    
    reverse(str, i);
}

string reverseString(string str)
{
	// Write your code here.
    reverse(str, 0);
    return str;
}
