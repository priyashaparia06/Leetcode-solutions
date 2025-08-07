class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int a=2;
        if (nums.size() <= 2) {return nums.size();}
        for(int i=2;i<nums.size();i++){
            if(nums[i]!=nums[a-2])
            {
                nums[a]=nums[i];
                a++;
            }
        }
        return a;
    }
};