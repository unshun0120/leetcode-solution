class Solution {
public:
    int arithmeticTriplets(vector<int>& nums, int diff) {
        int count=0, i, j, k;

        for( i = 0; i < nums.size()-2; i++ ){
            for( j = i+1; j < nums.size()-1; j++ ){
                for( k = j+1; k < nums.size(); k++ ){
                    if( (nums[k]-nums[j]) == diff && (nums[j]-nums[i]) == diff )
                        count++;
                }
            }
        }

        return count;
    }
};
