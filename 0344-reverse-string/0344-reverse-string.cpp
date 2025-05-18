class Solution {
public:
    void reverseString(vector<char>& s,int start=0, int end=-1) {
        if(end==-1) end=s.size()-1;
        if(start>end) return;
        swap(s[start],s[end]);
        reverseString(s,start+1,end-1);
    }
};