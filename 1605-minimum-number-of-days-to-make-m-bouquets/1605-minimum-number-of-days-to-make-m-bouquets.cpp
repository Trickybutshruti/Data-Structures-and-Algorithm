class Solution {
public:
    int bouquet(vector<int>& bloomDay, int mid, int k){
        int count=0;
        int ans=0;
        for(int i=0;i<bloomDay.size();i++){
            if(bloomDay[i]<=mid){
                count++;
                if(count==k){
                    ans++;
                    count=0;
                }
            }
            else{
                count=0;
            }
        }
        return ans;
    }
    int minDays(vector<int>& bloomDay, int m, int k) {
        if(1LL*m*k>bloomDay.size()) return -1;
        int max_ans=*max_element(bloomDay.begin(),bloomDay.end());
        if(m*k==bloomDay.size()) return max_ans;
        int low=1;
        int high=max_ans;
        int ans=max_ans;
        while(low<=high){
            int mid=(low+high)/2;
            if(bouquet(bloomDay,mid,k)>=m){
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