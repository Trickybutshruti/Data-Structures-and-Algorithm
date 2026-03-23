class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int ans=0;
        unordered_map<int,int> s;
        for(int num : nums){
           s[num]++;
           if(s[num]>1) ans=num;
        }
        return ans;
    }
};