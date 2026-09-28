class Solution {
public:
    int minimumSum(int num) {
        // string s = to_string(num);
        vector<int>dig;
        while(num){
            int d=num%10;
            dig.push_back(d);
            num=num/10;
        }
        sort(dig.begin(), dig.end());
        // int num1 = 10 * stoi(s[0]);
        // num1 += stoi(s[2]);
        // int num2 = 10 * stoi(s[1]);
        // num2 += stoi(s[3]);
        int num1=dig[0]*10;
        num1+=dig[2];
        int num2=dig[1]*10;
        num2+=dig[3];
        return num1 + num2;
    }
};