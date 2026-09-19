class Solution {
 public:
  int maxProfit(vector<int>& prices) {
    int minPrice = prices[0];
    int profit = 0;
    for (int price : prices) {
      profit = max(profit, price - minPrice);
      minPrice = min(minPrice, price);
    }
    return profit;
  }
};
/*

[7,20,3,60,4]
day 0: price = 7, minPrice = 7, profit = 0
day 1: price = 20, minPrice = 7, profit = 20 - 7
day 2: price = 3, minPrice = min(3, 7), profit = max(13, 0)
day 3: price = 60, minPrice = 3, profit = max(13, 60 - 3)
day 4: price = 4, minPrice = 3, profit = max(57, 4 - 1)


[7,1,5,3,6,4]
[7,20,3,60,4]
 b s           loss = -6
 b   s         loss = -2
 b     3
 minPrice = prices[0] -> 7
 profit = 0
 for each price in prices
    check if prices[i] > minP -> 20 - 7 = 13
        bestBuy = prices[i] - bestBuy
        profit = max(prices[i] - bestBuy, profit)
        profit)
    else

result must be 0 or +integer
*/