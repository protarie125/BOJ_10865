#include <iostream>
#include <vector>

using namespace std;

using vi = vector<int>;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int n, m;
	cin >> n >> m;

	auto p = vi(n, 0);
	while (0 < (m--)) {
		int a, b;
		cin >> a >> b;

		++p[a - 1];
		++p[b - 1];
	}

	for (const auto& x : p) {
		cout << x << '\n';
	}

	return 0;
}