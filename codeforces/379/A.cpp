#include <iostream>
using namespace std;

int main() {
	int n, k;
	cin >> n >> k;
	int ans = 0;
	while (true) {
		if (n < k) {
			ans += n;
			break;
		}
		ans += n-(n%k);
		n = (n%k)+(n/k);
	}
	cout << ans << endl;
	return 0;
}