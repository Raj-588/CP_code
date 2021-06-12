
#include<iostream>

using namespace std;

vector<int> getRepresentation(string& s) {
    vector<int> repr(26, 0);
    for(int i=0; i<s.size(); i++) {
        char ch = s[i];
        repr[ch-'a']++;
    }
    return repr;
}

int minSteps(string s, string t) {
    vector<int> sRepr = getRepresentation(s);
    vector<int> tRepr = getRepresentation(t);
    
    int minSteps = 0;
    for(int i=0; i<26; i++) {
        if(tRepr[i] > sRepr[i]) {
            minSteps += (tRepr[i]-sRepr[i]);
        }
    }
    
    return minSteps;
}


int main() {

	string s("bab");
	string
	return 0;
}
