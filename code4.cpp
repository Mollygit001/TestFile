#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int maxProfit(int n, const vector<int>& prices) {
    if (n == 0)
        return 0;

    int maxProfitValue = 0;
    for (int i = 1; i <= n; ++i) {
        int currentProfit = prices[i - 1] + maxProfit(n - i, prices);
        maxProfitValue = max(maxProfitValue, currentProfit);
    }

    return maxProfitValue;
}

int main() {
    int n;
    cout << "Enter the length of the rod: ";
    cin >> n;

    vector<int> prices(n);
    cout << "Enter the prices for each length: ";
    for (int i = 0; i < n; ++i) {
        cin >> prices[i];
    }

    cout << "Maximum Profit: " << maxProfit(n, prices) << endl;

    return 0;
}
