
#include <bits/stdc++.h>
using namespace std;
#define prime 119
#define ll long long


ll Create_hash(string s, int n) {
	ll result = 0;
	for (int i = 0; i < n; i++) {
		result += s[i] * pow(prime, i);
	}
	return result;
}

ll recalculate_hash(string s, int oldIndex, int NewIndex, int OldHash, int patlength) {
	ll Newhash = OldHash - s[oldIndex];
	Newhash /= prime;
	Newhash += s[NewIndex] * pow(prime, patlength - 1);
	return Newhash;
}


bool Check(string s1, string s2, int start1, int end1, int start2, int end2) {
	if (end1 - start1 != end2 - start2) {
		return false;
	}
	while (start1 <= end1 and start2 <= end2) {
		if (s1[start1] != s2[start2]) {
			return false;
		}
		start1++;
		start2++;
	}
	return true;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	string str = "abdabd"; //abd
	string pat = "abd";



	ll pathash = Create_hash(pat, pat.length());
	ll strhash = Create_hash(str, pat.length());

	//cout << pathash << " " << strhash << " ";

	for (int i = 0; i <= str.length() - pat.length(); i++) {
		if (pathash == strhash  and Check(str, pat, i, i + pat.length() - 1, 0, pat.length() - 1) == 1) {
			cout << i << " ";
		}

		if (i <= str.length() - pat.length()) {
			strhash = recalculate_hash(str, i, i + pat.length(), strhash, pat.length());
		}
	}
	return 0;
}
