// class Solution {
//     bool inilast(int a,int b,int target){
//         if(target<=b&&target>=a){
//             return true;
//         }
//         return false;
//     }
//     bool bs(vector<int>nums,int target){
//         int l=0;
//         int h=nums.size()-1;
//         while(l<=h){
//             int m=l+(h-l)/2;
//             if(nums[m]==target){
//                 return true;
//             }else if(nums[m]<target){
//                 l=m+1;
//             }else{
//                 h=l-1;
//             }
//         }
//         return false;
//     }
// public:
//     bool searchMatrix(vector<vector<int>>& matrix, int target) {
//         int m=matrix[0].size()-1;
//         int a=0;
//        for(int i=0;i<matrix.size();i++){
//        int a=matrix[i][0];
//        int b=matrix[i][m];
//         if(inilast(a,b,target)){
//             a=i;
//             break;
//         }


//        }
//        vector<int>tocheck;
//        for(int i=0;i<matrix[a].size();i++){
//         tocheck.push_back(matrix[a][i]);
//        }
//        if(bs(tocheck,target)){
//         return true;
//        }
//        return false;

//     }
// };
class Solution {
public:
    int index(vector<vector<int>>& matrix, int target) {
        int l = 0;
        int r = matrix.size() - 1;
        int col = matrix[0].size() - 1;

        while (l <= r) {
            int mid = l + (r - l) / 2;

            if ((matrix[mid][0] <= target) && (matrix[mid][col]) >= target) {
                return mid;
            } else if (matrix[mid][col] < target) {
                l = mid + 1;
            } else {
                r = mid - 1;
            }
        }
        return -1;
    }
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int idx = index(matrix, target);

        if (idx == -1)
            return false;

        int l = 0;
        int r = matrix[idx].size() - 1;

        while (l <= r) {
            int mid = l + (r - l) / 2;

            if (matrix[idx][mid] == target) {
                return true;
            } else if (matrix[idx][mid] < target) {
                l = mid + 1;
            } else {
                r = mid - 1;
            }
        }
        return false;
    }
};