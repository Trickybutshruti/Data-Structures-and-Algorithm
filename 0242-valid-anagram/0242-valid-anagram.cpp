class Solution {
public:
    bool isAnagram(string s, string t) {
       if(s.length()!=t.length()) return 0;
       sort(s.begin(),s.end());
       sort(t.begin(),t.end());
       if(s==t) return 1;
       return 0;
    }
};