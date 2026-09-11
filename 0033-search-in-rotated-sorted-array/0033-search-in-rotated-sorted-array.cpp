class Solution {
public:
    int search(vector<int>& n, int t) {
        int l = 0;
        int h = n.size() - 1;
        int res = -1;
        while (l <= h) {
            int m = l + (h - l) / 2;
            if (n[m] == t) {
                return m;
            }

            if (n[m] >= n[l]) {
                if (n[l] <= t && t <=n[m]) {
                    h = m - 1;
                } else {
                    l = m + 1;
                }
            } else {

                if (n[m] < t && t <= n[h]) {
                    l = m + 1;
                } else {
                    h = m - 1;
                }
            }
        }
        return res;
    }
};