class Solution {
public:
    string reverseWords(string s) {
        reverse(s.begin(),s.end());
        string ans="";
        
        for(int i=0;i<s.length();i++){
            while(s[i]==' '){
                i++;
            }
            string words="";
            while(i<s.length() && s[i]!=' '){
                words+=s[i];
                i++;
            }
            reverse(words.begin(),words.end());
            if(!words.empty()){
                if(ans==""){
                ans=words;
            }
            else{
                ans+=" "+words;
            }
            }
        }
        return ans;
    }
};