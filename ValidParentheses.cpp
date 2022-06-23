#include <iostream>
#include <algorithm>
#include <stack>
#include <time.h>

using namespace std;

class Solution{
public:
    bool isValid(string s) {
        stack<char> st;
        
        for(int i=0;i<s.length();i++){
            
            if(s[i] =='(' || s[i] =='{' || s[i] =='['){
                st.push(s[i]);
            
            } else {
                if(st.empty()) 
                    return  false;
                else {
                    char c = st.top();
                    st.pop();
                    
                    if( (s[i] ==')' && c =='(') || (s[i]==']' && c =='[') || (s[i] =='}' && c =='{') ) 
                        continue;
                    else return false;
                }
            }
        }
        
        return st.empty();
    }
};

int main() {
    float tempo;

    string s = "{()}()()()()()()()()()";
    Solution obj;
    cout << obj.isValid(s);
    return 0;
}