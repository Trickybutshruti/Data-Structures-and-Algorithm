class Solution {
public:
    bool rotateString(string s, string goal) {
        if(s.length()!=goal.length()) return false;
        string combined=s+s;
        if(combined.find(goal)< combined.length()) return true;
        return false;
    }
};