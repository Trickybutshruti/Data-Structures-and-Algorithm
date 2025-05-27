class Solution {
public:
    int sumUp(vector<int>& weights){
        int n=weights.size();
        int sum=0;
        for(int i=0;i<n;i++){
            sum+=weights[i];
        }
        return sum;
    }
    int days_total(vector<int>& weights, int mid){
        int count=1;
        int sum=0;
        for(int i=0;i<weights.size();i++){
            if (weights[i] > mid) return INT_MAX;
            if (sum + weights[i] > mid) {
            count++;
            sum = weights[i]; // start new day
            } else {
            sum += weights[i];
            }
        }
        return count;
    }
    int shipWithinDays(vector<int>& weights, int days) {
        int maxWeight=*max_element(weights.begin(),weights.end());
        int low=maxWeight;
        int high=sumUp(weights);
        int ans=high;
        while(low<=high){
            int mid=(low+high)/2;
            if(days_total(weights,mid)<=days){
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