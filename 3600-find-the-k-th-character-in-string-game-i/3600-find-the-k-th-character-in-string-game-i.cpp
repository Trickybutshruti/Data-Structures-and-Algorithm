class Solution {
public:
    string shift_string(string s){
        int n= s.length();
        string new_string=s;
        for(int i=0;i<n;i++){
            char shifted=(s[i] - 'a' + 1) % 26 + 'a';
            new_string+=shifted;
        }
    return new_string;
    }
    char kthCharacter(int k) {
        string s="a";
        while(s.length()<=k){
            s=shift_string(s);
        }
        return s[k-1];
    }
};