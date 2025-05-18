class Solution {
public:
    int reverse(int x) {
        long long temp=x;
        long long reverse=0;
        while(temp!=0){
            reverse=(reverse*10)+(temp%10);
            temp=temp/10;
        }
        if(reverse>INT_MAX || reverse<INT_MIN){
            return 0;
        }
        return (int)reverse;
    }
};