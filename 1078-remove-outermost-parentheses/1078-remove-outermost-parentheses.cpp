class Solution {
public:
    string removeOuterParentheses(string s) {
        string ans="";
        int flag=0;
        for(char ch: s){
            if(ch=='('){
                if(flag>0){
                    ans+=ch;
                }
                flag++;
            }
            else if(ch==')'){
                flag--;
                if(flag>0){
                    ans+=ch;
                }
            }
        }
        return ans;
    }
};