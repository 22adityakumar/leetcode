class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int n1;
        for(int i=0;i<nums.size();i++){
            int n=nums[i];
            int j=0,count=0;
            while(j<nums.size()){
                if(nums[j]==n) count+=1;
                j++;
            }
            if(count==1) n1=n;
        }
        return n1;
    }
};