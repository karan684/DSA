class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = size(nums);
        k = k % n;
        if(n == 1){
            return; 
        }
        
       //reverse last k elements
       reverse(nums, n-k, n-1);

       //reverse the first n-k elements
       reverse(nums, 0, n-k-1);

       //reverse the whole array
       reverse(nums, 0, n-1);
    }

    void reverse(vector<int>& nums, int start, int end){
        while(start <= end){
            int temp = nums[start];
            nums[start] = nums[end];
            nums[end] = temp;
            start++;
            end--;
        }
    }
};
