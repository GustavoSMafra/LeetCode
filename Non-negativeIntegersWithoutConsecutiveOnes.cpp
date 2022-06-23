#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <bitset>

using namespace std;

class Solution{
public:
    int findIntegers(int n) {
        
        string binary = bitset<32>(n).to_string();
        int k = binary.length();

        int fib[k];
        fib[0] = 1;
        fib[1] = 2;
        for(int i = 2; i <= k; i++){
            fib[i] = fib[i-1]+fib[i-2];
        }

        bool isLastBitOne = false;
        int res = 0;
        int bit = k-1;
        while(bit >= 0){
            if((n & (1 << bit)) == 0){
                isLastBitOne=false;
            } else {
                res+=fib[bit];
                if(isLastBitOne){
                    return res;
                }
                isLastBitOne=true;
            }
            bit--;
        }   
        return res+1;
    }
};

int main() {

    Solution obj;
    cout << obj.findIntegers(1000);
    cout << "\n"<<(1 << 2);
}