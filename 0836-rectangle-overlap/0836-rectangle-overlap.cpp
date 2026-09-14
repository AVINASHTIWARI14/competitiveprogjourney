class Solution {
public:
    bool isRectangleOverlap(vector<int>& rec1, vector<int>& rec2) {
        int x1=rec1[0];
        int y1=rec1[1];
        int x2=rec1[2];
        int y2=rec1[3];
        int x3=rec2[0];
        int y3=rec2[1];
        int x4=rec2[2];
        int y4=rec2[3];
       
        //     if(rec1[0]>0&&rec2[0]<0||rec1[1]<0&&rec2[1]>0||rec1[0]<0&&rec2[0]>0||rec1[1]>0&&rec2[1]<0){
        //         return false;
        //     }
        // if(rec2[0]<=rec1[0]){
        //     if(rec2[2]<=rec1[0]||rec2[3]<=rec1[1]){return false;}
        // }
        
        // if(rec1[0]<=rec2[0]){
        // if(rec1[2]<=rec2[0]||rec1[3]<=rec2[1]){
        //     return false ;
        // }}
        // return true;
        if(x1>=x4||y1>=y4||x2<=x3||y2<=y3){
            return false;
        }
        return true;
    }
};