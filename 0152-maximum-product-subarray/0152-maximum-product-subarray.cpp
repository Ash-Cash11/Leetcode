class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int maxprod=nums[0];
        int minprod=nums[0];
        int ans=nums[0];
        for(int i=1;i<nums.size();i++){
            int a=nums[i];
            int b=nums[i]*maxprod;
            int c=nums[i]*minprod;
            maxprod=max(a,max(b,c));
            minprod=min(a,min(b,c));
            ans=max(ans,maxprod);

        }
        return ans;

        
    }
};