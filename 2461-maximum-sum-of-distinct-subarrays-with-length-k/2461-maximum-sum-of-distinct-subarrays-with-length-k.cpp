class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        unordered_map<int,int> freq;
        int left=0;
        int right=0;
        long long sum=0;
        long long ans=0;
        while (right<nums.size()){
            sum+=nums[right];
            freq[nums[right]]++;
            while(freq[nums[right]]>1){
                freq[nums[left]]--;
                sum-=nums[left];
                left++;
            }
            while(right-left+1>k){
                freq[nums[left]]--;
                sum-=nums[left];
                left++;
            }
            if(right-left+1==k){
                ans=max(ans,sum);
            }
            right++;
        }
        return ans;
        
    }
};