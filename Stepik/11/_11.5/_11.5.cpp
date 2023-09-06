#include <iostream>
#include <map>
#include <string>

using namespace std;

int main() {
	map <string, string> dict;
	string word;
	int n;

	cin >> n;
	for (int i = 0; i < n; i++) {
		string word1, word2;
		cin >> word1 >> word2;
		dict[word1] = word2;
	}
	
	cin >> word;
	for (auto now : dict) {
		if (now.second == word) {
			cout << now.first;
		}
		else if (now.first == word) {
			cout << now.second;
		}
	}

	return 0;
}