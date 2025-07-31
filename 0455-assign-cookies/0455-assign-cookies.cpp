class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(g.begin(),g.end());
        sort(s.begin(),s.end());
        int l=0;
        int r=0;
        int n=g.size();
        int m=s.size();
        while(r<m && l<n){
            if(s[r]>=g[l]){
                l++;
            }
            r++;
        }
        return l;
    }
};