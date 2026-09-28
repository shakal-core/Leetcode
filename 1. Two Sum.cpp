class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) 
    {
        int arraySize = nums.size();
        for (int i=0; i<arraySize; i++)
        {   
            for (int j=1; j<arraySize; j++)
            {   if (i==j) 
                    continue;
                if (nums[i] + nums[j] == target)
                    return {i,j};
            } 
        }   
        return {};
    }
};
