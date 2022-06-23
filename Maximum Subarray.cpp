#include <iostream>
#include <vector>
#include <climits>

using namespace std;

class Solution{
public:
    int maxSubArray(vector<int>& nums) {
        int sum = 0, out = INT_MIN;
        for(int i=0;i<nums.size();i++){
            sum += nums[i];
            if(sum>out) 
                out = sum;
            if(sum<0) 
                sum = 0;
        } 
        return out;
    }
};

int main() {
    vector<int> nums = {1,3,5,6};
    Solution obj;
    cout << obj.maxSubArray(nums);
    return 0;

}