#include <bits/stdc++.h>

using namespace std;

bool check(int x) {
	int a[1000], cnt = 0;
	while(x != 0) {
		a[cnt] = x % 10;
		x /= 10;
		cnt++;
	}
	int sum = 0;
	for(int i = cnt - 1; i >= 0; --i) {
		sum += a[i];
	}
	if(sum % 4 == 0) {
		return true;
	}
	return false;
}
void decode() {
	int n;
	cin >> n;
	if(check(n)) {
		cout << n << "\n";
		return;
	}
	n++;
	while(!check(n)) {
		n++;
	}
	cout << n << "\n";
}
int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	decode();
	return 0;
}
