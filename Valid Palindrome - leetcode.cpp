class Solution {
public:
    
    
    bool valid(char s){
        if( (s >= 'a' && s <= 'z') || (s >= 'A' && s <= 'Z') || (s >= '0' && s <= '9')){
            return 1;
        }
     return 0;   
    }
    
    char toLower(char s){
        if ( (s >= 'a' && s <= 'z') || s >= '0' && s <= '9'){
            return s;
        }
        else{
            return s = s - 'A' + 'a';
        }
    }
    
    bool palindrome(string t){
        int s = 0;
        int e = t.length() - 1;
        
        while(s <= e){
            if (t[s] != t[e]){
                return 0;
            }
            else{
                s++;
                e--;
            }
        }
        return 1;
    }
    
    bool isPalindrome(string s) {
        
        //remove useless characters
        string temp = "";
        
        for(int j = 0; j < s.length(); j++){
            if(valid(s[j])){
                temp.push_back(s[j]);
            }
        }
        
        //converting uppercase into lowercase letters
        
        for(int j = 0; j < temp.length(); j++){
            temp[j] = toLower(temp[j]);
        }
        
        //check palindrome
        return palindrome(temp);
        
        
    }
};
