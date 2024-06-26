class Solution {
public:
    int maximum69Number (int num) {
        int index=0, maxidx=-1, n=num;
        
        while( num ){   //找出最高位數的6之位置
            if( num%10 == 6 )
                maxidx = index;
            num/=10;
            index++;
        }

        if( maxidx != -1 )  //把最高位數的6變成9
            n += 3*pow(10, maxidx);

        return n;
    }
};
