// MoveZeroes in C++- Leet Code Solution
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int nonzero=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i] != 0){
                swap(nums[nonzero],nums[i]);
                nonzero++;
            }
        }
    }
};