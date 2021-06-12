#include <bits/stdc++.h>

using namespace std;

int i = 0, check = 0;
string s;
void finds() {
    if(i>s.length()) return;
  if (s[i] == '(') {
    i++;
    check = 1;
    finds();
    return;
  }
  else if (s[i] == ')') {
    check = 0;
    i++;
    finds();
    return;
  }
  else {
    if (check == 1) {
      cout << s[i];
    }
    i++;
    finds();
    return;
  }
}
int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  cin >> s;
  finds();
  return 0;
}
