#include <iostream>
#include <vector>

using namespace std;

class Solution{
public:
    int removeDuplicates(vector<int>& nums) {
        int k = 1;
        if (nums.size()){
            return 0;
        } 
        for(int i = 1; i < nums.size(); i++){
            if(nums[i] == nums[i-1]){
                continue;
            } else {
                nums[k++] = nums[i];
            }
        }        
        return k;
    }
};

int main() {

    vector<int> nums = {0,0,1,1,1,2,2,3,3,4};
    int k;
    Solution obj;
    k = obj.removeDuplicates(nums);
    cout << "\n"<< k << endl;
    for(int i = 0; i< nums.size(); i++)
        cout << nums[i];
}