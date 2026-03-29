#include <vector>
#include <string>
class Solution {
public:
    bool arrayStringsAreEqual(std::vector<std::string>& word1, std::vector<std::string>& word2) {
        int i = 0, j = 0; 
        int p = 0, q = 0;

        while(i < word1.size() && p < word2.size()) {
            if(word1[i][j] != word2[p][q]) { 
                return false; 
            }
            j = j + 1; 
            q = q + 1; 
            if(j == word1[i].size()) { 
                i++; 
                j = 0;
            }

            if(q == word2[p].size()) {
                p++; 
                q = 0;
            }
        }
        return (i == word1.size() && p == word2.size());
    } 
    
};

