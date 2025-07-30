class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int> nge;
        stack<int> st;
        for(int i=nums2.size()-1;i>=0;i--){
            int curr=nums2[i];
            while(!st.empty() && st.top()<=curr){
                st.pop();
            }
            if(st.empty()){
                nge[curr]=-1;
            }
            else nge[curr]=st.top();
            st.push(curr);
        }
        vector<int> result;
        for(int nums:nums1){
            result.push_back(nge[nums]);
        }
        return result;
    }
};