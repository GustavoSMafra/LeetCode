#include <iostream>
#include <vector>

using namespace std;

class Solution{
public:
    int searchInsert(vector<int>& nums, int target) {
        int i = 0;
        while(i < nums.size()){
            if(nums[i] > target){
                return i;
            }
            else if (nums[i] == target) {
                return i;
            }
            i++;
        }
        return i;
    }
};

int main() {
    vector<int> nums = {1,3,5,6};
    Solution obj;
    cout << obj.searchInsert(nums, 0);

}