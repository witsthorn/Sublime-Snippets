snippet base "baseTemp" b
#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	$1
	return 0;
}
endsnippet

snippet cfcp "Template" b
#include <bits/stdc++.h>
using namespace std;
#define int long long
#ifndef ONLINE_JUDGE
	#include "debug.h"
#endif

signed main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	$1
	return 0;
}
endsnippet

snippet test "Test cases" a
int tt;
cin >> tt;
while (tt--) {
	$1
}
endsnippet

snippet data "Base data" a
int n;
cin >> n;
vector<int> a(n);
for (int i = 0; i < n; i++) {
	cin >> a[i];
}
$1
endsnippet

snippet all "all" a
a.begin(), a.end()
endsnippet

snippet ll "long long" b
long long
endsnippet

snippet endl "end line" a
"\n";
endsnippet

snippet fori "for loop i" a
for (int i = 0; i < n; i++) {
	$1
}
endsnippet

snippet forj "for loop j" a
for (int j = 0; j < m; j++) {
	$1
}
endsnippet

snippet pstr "print string" a
cout << "$1\n";
endsnippet

snippet sp "space" a
" " $1
endsnippet

snippet defll "define long long" a
#define int long long
endsnippet
