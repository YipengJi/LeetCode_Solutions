class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int result = 0;
        for (std::size_t i=0; i<nums.size(); ++i) {
            for (std::size_t j=nums.size()-1; j>i; --j) {
                result = nums[i]+nums[j];
                if (result == target) {
                    vector<int> answer;
                    answer.push_back(i);
                    answer.push_back(j);
                    return answer;
                }
                else;
            }
        }
    }
};
