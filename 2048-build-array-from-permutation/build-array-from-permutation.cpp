class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        int i=0;
        int a=nums.size();
        vector<int>ans;
        while(i<=a-1){
            ans.push_back(nums[nums[i]]);
            i++;
        }
        return ans;
    }
};