// 374


class Solution {
public:
int guessNumber(int n) {
        int maxNumber = n, minNumber = 1;
        while (true) {
            int meanNumber = (maxNumber - minNumber) / 2 + minNumber;
            // Do NOT use (maxNumber+minNumber)/2 in case of over flow
            int res = guess(meanNumber);
            if (res == 0) { 
                return meanNumber;
            } else if (res == 1) {
                minNumber = meanNumber + 1;
            } else {
                maxNumber = meanNumber - 1;
            }
        }
    }
};

// FBI v

class Solution {
public:
    static int guessNumber(const int n) {
        assert(false);        
        return -1;
    }
};

int main(int argc, char* argv[]) {
    std::ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
  
    ofstream fuserout("user.out");
    
    int n;
    int a;
    while (cin >> n >> a) {
        fuserout << a << "\n";
    }
    
    return 0;
}

#define main old_main

// by https://leetcode.com/heder/

