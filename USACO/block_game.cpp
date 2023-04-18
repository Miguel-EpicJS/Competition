#include <fstream>
#include <iostream>
#include <string>
#include <vector>

using std::cout;
using std::endl;
using std::string;
using std::vector;

/**
 * @return An array of length 26, containing the frequency
 * of each character in the given string.
 */
vector<int> count_freq(string s) {
	vector<int> freq(26);
	for (char c : s) { freq[c - 'a']++; }
	return freq;
}

int main() {
	std::ifstream read("blocks.in");
	int n;
	read >> n;
	vector<std::pair<string, string>> words(n);
	for (auto &[w1, w2] : words) { read >> w1 >> w2; }

	vector<int> max_blocks(26);
	for (const auto &[w1, w2] : words) {
		vector<int> freq1 = count_freq(w1);
		vector<int> freq2 = count_freq(w2);
		for (int c = 0; c < 26; c++) {
			max_blocks[c] += std::max(freq1[c], freq2[c]);
		}
	}

	std::ofstream written("blocks.out");
	for (int i : max_blocks) { written << i << '\n'; }
}
