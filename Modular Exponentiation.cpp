#include <bits/stdc++.h> 
int modularExponentiation(int x, int n, int m) {
	// Write your code here.
    int res = 1;
    
    while(n > 0){// odd
        if (n & 1){
            res = (1LL * (res) * (x)%m)%m; // multiplying with long long 1 (1LL) to typecast it into long long from int to prevent overflow
        }
        
        x = (1LL * (x)%m * (x)%m)%m;
        n = n >> 1;
    }
    return res;
}
