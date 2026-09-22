class Solution {
    using ll = long long;
    ll power(ll a, ll b, ll m) {
        long long ans = 1;

        while (b > 0) {
            if (b % 2 == 1)
                ans = (ans * a) % m;

            a = (a * a) % m;
            b /= 2;
        }

        return ans;
    }

    ll calc(vector<int> dummy) {
        ll a = dummy[0];
        ll b = dummy[1];
        ll c = dummy[2];
        ll m = dummy[3];

        ll va = power(a, b, 10);

        return power(va, c, m);
    }

public:
    vector<int> getGoodIndices(vector<vector<int>>& variables, int target) {
        vector<int> res;
        for (int i = 0; i < variables.size(); i++) {
            if (calc(variables[i]) == target) {
                res.push_back(i);
            }
        }
        return res;
    }
};