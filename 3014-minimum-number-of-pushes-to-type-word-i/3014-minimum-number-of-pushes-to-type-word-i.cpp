class Solution {
public:
    int minimumPushes(string word) {
        if(word.size()<=8){
            return word.size();
        }
        if(word.size()==9){
            return 10;
        }
        if(word.size()==10){
            return 12;
        }
        if(word.size()==11){
            return 14;
        }
        if(word.size()==12){
            return 16;
        }
        if(word.size()==13){
            return 18;
        }
        if(word.size()==14){
            return 20;
        }
        if(word.size()==15){
            return 22;
        }
        if(word.size()==16){
            return 24;
        }
        if(word.size()==17){
            return 27;
        }
        if(word.size()==18){
            return 30;
        }
        if(word.size()==19){
            return 33;
        }
        if(word.size()==20){
            return 36;
        }
        if(word.size()==21){
            return 39;
        }
        if(word.size()==22){
            return 42;
        }
        if(word.size()==23){
            return 45;
        }
        if(word.size()==24){
            return 48;
        }
        if(word.size()==25){
            return 52;
        }
        if(word.size()==26){
            return 56;
        }
        return 0;
    }
};