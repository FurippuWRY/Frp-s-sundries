#include <bits/stdc++.h>

using namespace std;

int x, y, w, p;

int main() {
	
    cin >> x >> y;
    p = abs(x - y);
    w = (int)(p * ((sqrt(5) + 1) / 2));
    if (w == min(x, y)) cout << 0;
    else cout << 1;

}
