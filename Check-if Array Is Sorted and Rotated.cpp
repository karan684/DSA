class Solution {
public:
    bool check(vector<int>& nums) {
        for(int i = 0; i < sizeof(nums) - 1; i++){
            if(nums[i] > nums[i+1]){
                return false;
            }
        }
        return true;
    }
};
