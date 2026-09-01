class Solution {
public:
    int reverse(int x) {
        int result = 0;
        while(x != 0){
          if(result > INT_MAX/10 || result < INT_MIN/10) return 0;
          int digit = x%10; //4,3,2,
          result = (result * 10) + digit; //0+4,43,432
          x = x/10;//123,12
        }
        return result;
    }
};
