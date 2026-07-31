class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        int freq[2001] = {0};  
        int used[1001] = {0};   

    
        for (int i = 0; i < arr.size(); i++) {
            freq[arr[i] + 1000]++;
        }

        for (int i = 0; i < 2001; i++) {
            int f = freq[i];
            if (f > 0) {
                if (used[f] == 1) 
                    return false;
                used[f] = 1;    
            }
        }

        return true;
    }
};

