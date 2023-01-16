bool isValidParenthesis(string expression)
{
    stack <char> s;
    
    for(int i = 0; i < expression.length(); i++){
        //if opening bracket push
        //else pop
        char ch = expression[i];
        
        if(ch == '{' || ch == '(' || ch =='['){
            s.push(ch);
        }
        else{
            //closing if stack is not empty
            if(!s.empty()){
                char ch = expression[i];
                if((ch == '}' && s.top() == '{') ||
                  (ch == ']' && s.top() == '[') ||
                  (ch == ')' && s.top() == '(')){
                    s.pop();
                }
                else{
                    return false;
                }
            }
            else{
                return false;
            }
        }     
    }
    
    if(s.empty()){
        return true;
    }
    else{
        return false;
    }
}
