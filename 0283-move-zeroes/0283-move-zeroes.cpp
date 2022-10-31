class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int index = 0;
int size = nums.size();

    for(int i = 0; i < size; i++)
        if(nums[i] != 0)
            nums[index++] = nums[i];
    
    while(index < size)
        nums[index++] = 0;

    }
};