class Solution {
public:
    int sum(vector<int>& nums, int mid){
        int sum=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]%mid==0){
                sum+=nums[i]/mid;
            }
            else{
                sum+=(nums[i]/mid)+1;
            }
        }
        return sum;
    }
    int smallestDivisor(vector<int>& nums, int threshold) {
        int max_divisor=*max_element(nums.begin(),nums.end());
        int ans=max_divisor;
        int low=1;
        int high=max_divisor;
        while(low<=high){
            int mid=(low+high)/2;
            if(sum(nums,mid)<=threshold){
                ans=mid;
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return ans;
    }
};