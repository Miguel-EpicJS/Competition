#include <bits/stdc++.h>
using namespace std;

#define LSOne(S) ((S) & -(S)) // the key operation
typedef vector<int> vi;
class FenwickTree { // index 0 is not used
    private:
	vi ft;
    public:
	FenwickTree(int m) { ft.assign(m+1, 0); } // create empty FT
	
	int rsq(int j) { // returns RSQ(1, j)
	    int sum = 0;
	    for (; j; j -= LSOne(j))
		sum += ft[j];
	    return sum;
	}

	int rsq(int i, int j) { return rsq(j) - rsq(i-1); } // inc/exclusion
	// updates value of the i-th element by v (v can be +ve/inc or -ve/dec)
	void update(int i, int v) {
	    for (; i < (int)ft.size(); i += LSOne(i))
		ft[i] += v;
	}
};

// CP 4 Handbook
