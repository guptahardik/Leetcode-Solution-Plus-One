Time : 0ms
#include <string>
using  namespace std;
#include <math.h> 

    
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        bool keepGoing = true;
        
        int n = digits.size()-1;
    
        while(keepGoing){
            if(digits[n] + 1 == 10){
                digits[n] = 0;
                keepGoing = true;
            }else{
                digits[n] = digits[n] + 1 ;
                return digits;
                keepGoing = false;
            }
            
            n--;
            if(n < 0){
                digits.insert(digits.begin(),1);
                break;
            }
        }
        
        
        return  digits;
    }

};
