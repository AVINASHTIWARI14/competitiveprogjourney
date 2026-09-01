class Solution {
public:
    int accountBalanceAfterPurchase(int purchaseAmount) {
        //0 10 20 30 40 50 60 70 80 90 100 
        //0-14=10  15-24=20  25-34=30.......
        int pa=purchaseAmount;
        if(pa<5){
            return 100;
        }
        if(pa>=5&&pa<=14){
            return 100-10;
        }
        if(pa>=15&&pa<=24){
            return 100-20;
        }
        if(pa>=25&&pa<=34){
            return 100-30;
        }
        if(pa>=35&&pa<=44){
            return 100-40;
        }
        if(pa>=45&&pa<=54){
            return 100-50;
        }
        if(pa>=55&&pa<=64){
            return 100-60;
        }
        if(pa>=65&&pa<=74){
            return 100-70;
        }
        if(pa>=75&&pa<=84){
            return 100-80;
        }
        if(pa>=85&&pa<=94){
            return 100-90;
        }
        return 0;
        
    }
};