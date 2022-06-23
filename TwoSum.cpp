#include <iostream>
#include <vector>

using namespace std;

class Solution{
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        for (int i = 0; i<nums.size(); i++){
            for (int j = i+1; j<nums.size(); j++) {
                if(nums[i] + nums[j] == target){
                    vector<int> indices = {i, j};
                    return indices;
                }
            }
        }

        throw new invalid_argument("No solution");
    }
};

int main() {

    vector<int> nums = {3,3};
    vector<int> solution;
    int target = 9;

    Solution obj;
    solution = obj.twoSum(nums, target);

    cout << nums[solution[0]] << " + " << nums[solution[1]] << " = " << target;
    return 0;
}