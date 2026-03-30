#include <vector>
using namespace std;
class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int maxCandy = 0; 
        for(int a : candies) { 
            if(a > maxCandy){ 
                maxCandy = a; 
            }
        }
        vector<bool> result; 

        for(int c : candies) { 
            if(c + extraCandies >= maxCandy){ 
                result.push_back(true);
            }else { 
                result.push_back(false);
            }
        }
        return result;
    }
    
};