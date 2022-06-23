#include <iostream>
#include <map>

using namespace std;

class Solution{
public:
  int romanToInt(string s) {
        int ans = 0;
        map <char,int> mp = {{'I',1},{'V',5},{'X',10},{'L',50},{'C',100},{'D',500},{'M',1000}};
        for(int i = 0; i < s.size(); i++){
            if(i == s.size()-1){
                ans += mp[s[i]];
            
            } else if((s[i] == 'I' or s[i]== 'X' or s[i]== 'C' ) and (mp[s[i+1]] > mp[s[i]])){
                ans += (mp[s[i+1]] - mp[s[i]]);
                i++;
            } else {
                ans += mp[s[i]];
            }
        }
          return ans;  
    }
};

int main() {
    string s = "MCMXCIV";
    Solution obj;
    cout << obj.romanToInt(s);
}