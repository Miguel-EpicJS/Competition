#include <bits/stdc++.h>

using namespace std;

const vector<string> NAMES{"Bessie", "Elsie", "Mildred"};
const int START_AMT = 7;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);


    freopen("measurement.in", "r", stdin);
    freopen("measurement.out", "w", stdout);

    // 3 AC - 7 WA
    /*
    int n;

    cin >> n;

    map<string, int> name;

    name["Bessie"]  = 1;
    name["Elsie"]   = 2;
    name["Mildred"] = 4;

    long long ans = 0, c_top = 7, c_max = 7;

    vector<pair<long long, long long>> result;
    result.push_back({7, 1});
    result.push_back({7, 2});
    result.push_back({7, 4});

    vector<array<long long, 3>> changes;

    for (int i = 0; i < n; i++)
    {
    long long x, y, k;
    string z;
    cin >> x >> z >> y;
    k = name[z];

    changes.push_back({x, k , y});
    }

    sort(changes.begin(), changes.end());



    for (auto i : changes)
    {
    c_max = 0;
    for (auto r : result)
    {
        c_max = max(c_max, r.first);
    }
    if (i[1] == 1) result[0].first += i[2], c_max = max(c_max, result[0].first);
    else if (i[1] == 2) result[1].first += i[2], c_max = max(c_max, result[1].first);
    else result[2].first += i[2], c_max = max(c_max, result[2].first);

    int a = 0;

    for (auto r : result)
    {
        if (r.first == c_max) a+=r.second;
    }

    if (a != c_top) ans++, c_top = a, cout << i[0] << " ";
    }

    cout << ans << "\n";
    */
    int update_num;

    cin >> update_num;
    vector<tuple<int, string, int>> updates;
    for (int i = 0; i < update_num; i++) {
        int day;
        string cow;
        int change;
        cin >> day >> cow >> change;
        updates.push_back(make_tuple(day, cow, change));
    }

    sort(updates.begin(), updates.end());

    /*
     * Map which holds the current output of each cow.
     * Later, we'll change the output values based on input.
     */
    map<string, int> outputs;
    for (const auto &name : NAMES) { outputs[name] = START_AMT; }

    vector<string> display = NAMES;  // The cows w/ the highest milk output.

    int display_changes = 0;
    for (const tuple<int, string, int> &u : updates) {
        // Change output values based on input.
        outputs[get<1>(u)] += get<2>(u);
        int max_output = 0;
        for (const auto &[_, output] : outputs) {
            max_output = max(max_output, output);
        }

        vector<string> new_display;
        for (const auto &[name, output] : outputs) {
            if (output == max_output) { new_display.push_back(name); }
        }

        // Update answer if old winner is different than new winner.
        display_changes += display != new_display;
        display = new_display;
    } 

    cout << display_changes << "\n";

    return 0;
}


