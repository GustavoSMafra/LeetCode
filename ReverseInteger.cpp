#include <iostream>
#include <vector>
#include <climits>

using namespace std;

class Solution{
public:
    int reverse(int x) {
        bool negative = false;
        int num = x;
        if (x < 0){
            negative = true;
            if((num *= -1 )>  INT_MAX)
                return 0;    
            else
                num *= -1;
            
        }

        long int reversed = 0;
        while (num > 0){
            reversed = (reversed * 10) + (num % 10);
            num /= 10;
        }

        if (reversed > INT_MAX){
            return 0;
        } else if (negative == true){
            reversed *= -1;
        }

        return int(reversed);

    }
};

int main() {

    int value = -121;
    Solution obj;
    int output = obj.reverse(value);
    cout << output;

}