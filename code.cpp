class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> test(nums.size(),1);
        int left = 1;
        for(int i=0;i<nums.size()-1;i++){
            left *= nums[i];
            test[i+1] = left;
        }
        int right = 1;
        for(int i=test.size()-1;i>=0;i--){
            test[i]*=right;
            right *=nums[i];
        }
        return test;
    }
};
