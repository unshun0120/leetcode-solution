class Solution {
public:
    string generateTheString(int n) {
        string arr="";
        int i;

        if( n == 1 )
            arr += 'a';
        else if( n % 2 == 0 ){   //若n是even
            for( i = 0; i < n-1; i++ )  //除了最後一個其他都填a
                arr += 'a';
            arr += 'b';
        }    
        else{      //若n是odd
            for( i = 0; i < n-2; i++ )  //除了最後兩個其他都填a
                arr += 'a';
            arr += "bc";
        }

        return arr;
    }
};
