class Solution {
public:
    int findLucky(vector<int>& arr) {
        unordered_map<int,int> freq;
        for(int i : arr){
            freq[i]++;
        }
        int result=-1;
        for (auto [i, count] : freq) {
            if (i == count) {
            result = max(result, i);
            }
        }
        return result;
    }
};