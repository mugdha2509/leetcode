class Solution {
public:
    vector<int> twoSum(std::vector<int>& nums, int target) {
        // Create a map to store the complement of each element and its index
        unordered_map<int, int> complementMap;

        // Iterate through the array
        for (int i = 0; i < nums.size(); ++i) {
            int complement = target - nums[i];

            // Check if the complement exists in the map
            if (complementMap.find(complement) != complementMap.end()) {
                // If found, return the indices of the two elements
                return {complementMap[complement], i};
            }

            // If not found, add the current element and its index to the map
            complementMap[nums[i]] = i;
        }

        // If no solution is found
        return {};
    }
};
