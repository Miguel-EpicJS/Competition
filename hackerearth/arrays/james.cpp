#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    vector<int> max_price(m, 0);
    vector<int> good_count(m, 0);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            int price;
            cin >> price;
            if (price > max_price[j]) {
                max_price[j] = price;
                good_count[j] = 1;
            } else if (price == max_price[j]) {
                good_count[j]++;
            }
        }
    }

    int max_good_count = *max_element(good_count.begin(), good_count.end());
    vector<int> best_items;
    for (int i = 0; i < m; i++) {
        if (good_count[i] == max_good_count) {
            best_items.push_back(i);
        }
    }

    if (best_items.size() == 1) {
        cout << best_items[0] + 1 << endl;
    } else {
        int best_item = best_items[0];
        double best_average = (double)max_price[best_item] / max_good_count;
        for (int i = 1; i < best_items.size(); i++) {
            int item = best_items[i];
            double average = (double)max_price[item] / max_good_count;
            if (average > best_average) {
                best_item = item;
                best_average = average;
            }
        }
        cout << best_item + 1 << endl;
    }

    return 0;
}
