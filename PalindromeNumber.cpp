#include <algorithm>
#include <iostream>
#include <string>

using namespace std;

class Solution{
public:
    bool isPalindrome(int x) {
        string s = to_string(x);
        string reversed (s);

        reverse(reversed.begin(), reversed.end());
        return (s == reversed);
    }
};

int main() {
    int value = -121;
    Solution obj;
    cout << obj.isPalindrome(value);
}