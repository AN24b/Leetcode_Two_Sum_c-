// subtract-the-product-and-sum-of-digits-of-an-integer


class Solution {
public:
    int subtractProductAndSum(int n) {
        int prod=1 , sum=0;

        while(n!=0){
            int digit=n%10;
            prod = prod * digit;
            sum = sum + digit;
            n = n/10;
        }
        int answer = prod-sum;
        return answer;
    }
};