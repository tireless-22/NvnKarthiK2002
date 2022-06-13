class Solution {
public:
    
    
    
    
    bool isValid(string s) {
        stack<int> cont;
        int i=0;
        
        while(i<s.size()){
            if(s[i]=='(' or s[i]=='[' or s[i]=='{'){
                cont.push(s[i]);
            }
            else{
                if(s[i]==')'){
                    if(cont.empty() or cont.top()!='('){
                        return false;
                        
                    }
                }
                else if(s[i]==']'){
                    if(cont.empty() or cont.top()!='['){
                        return false;
                        
                    }
                }
                else if(s[i]=='}'){
                    if(cont.empty() or cont.top()!='{'){
                        return false;
                        
                    }
                }
                
                cont.pop();
                
                
                
                
                
            }
            i++;
        
        
        }
        
        if(cont.empty()){
            return true;
        }
        else{
            return false;
        }
        
    }
};