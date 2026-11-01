// class Solution {
// public:
//     int minMoves(vector<int>& nums) {
        
//     }
// };

class Solution {
public:
    int minMoves(vector<int>& nums) {
        int sum = 0;
        int mn = nums[0];

        for (int i = 0; i < nums.size(); i++) {
            sum += nums[i];

            if (nums[i] < mn) {
                mn = nums[i];
            }
        }

        return sum - nums.size() * mn;
    }
};