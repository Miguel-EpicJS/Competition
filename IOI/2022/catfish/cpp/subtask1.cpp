#include "fish.h"

#include <bits/stdc++.h>

using namespace std;

long long max_weights(int N, int M, vector<int> X, vector<int> Y, vector<int> W) {
   
    long long tot = 0;

    for (auto i : W)
    {
	tot += i;
    }

    return tot;
}
