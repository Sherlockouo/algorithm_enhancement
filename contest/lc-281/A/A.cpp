class Solution {
public:
    int countEven(int num) {
        int ans = 0;
        for(int i = 1;i <= num; i ++){
            int t = i;
            int res = 0;
            while(t){
                res += t%10;
                t/=10;
            }
            if(res%2==0) ans++;
        }
        return ans;
    }
};
