class Solution {
public:
    int candy(vector<int>& nums) {
        int n=nums.size();
        int candy=n;
        int i=1;
        while(i<n){
            if(nums[i]==nums[i-1]){
                i++;
                continue;
            }
            int peak=0;
            while(nums[i]>nums[i-1]){
                peak++;
                candy+=peak;
                i++;
                if(i==n) 
                return candy;
            }
            int valley=0;
            while(i<n&&nums[i]<nums[i-1]){
                valley++;
                candy+=valley;
                i++;
            }
            candy-=min(peak,valley);
        }
        return candy;
    }
};
