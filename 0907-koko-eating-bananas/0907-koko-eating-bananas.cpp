class Solution {
public:
    long long total_hour(vector<int>& piles,int mid){
        long long ans=0;
        for(int i=0;i<piles.size();i++){
            if(piles[i]%mid==0){
                int time=piles[i]/mid;
                ans+=time;
            }
            else{
                int time=piles[i]/mid;
                ans+=time+1;
            }
        }
        return ans;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int max_hour=*max_element(piles.begin(), piles.end());
        int low=1;
        int high=max_hour;
        int ans=max_hour;
        while(low<=high){
            int mid=(low+high)/2;
            if(total_hour(piles, mid)<=h){
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