#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution{
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans = "";
        sort(strs.begin(),strs.end());
        int size = min(strs[0].length(),strs[strs.size()-1].length());
        for(int i = 0;i < size; i++){
            if(strs[0][i] == strs[strs.size()-1][i]){
                ans+=strs[0][i];
            }else{
                return ans;
            }
        }
        return ans;
    }
};

int main() {

    vector <string> strs = {"dog","racecar","car"};
    Solution obj;
    cout << obj.longestCommonPrefix(strs);
    return 0;
}