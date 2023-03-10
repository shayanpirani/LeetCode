class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector <int> arr(nums.size());
        int l =0 ,r =nums.size()-1;
        for(int k=nums.size()-1;k>=0;k--)
        {
            if(abs(nums[l]) > abs(nums[r]))
            {
                arr[k] = nums[l] *nums[l];
                l++;
            }
            else
            {
                arr[k] = nums[r] * nums[r];
                r--;
            }
        }
        return arr;
    }
};
