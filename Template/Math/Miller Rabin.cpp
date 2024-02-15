const int prime[] = {2, 3, 5, 7, 11, 13, 17, 37};
int mul(int x, int y, int p) {
	int res = 0;
	while (y) {
		if (y & 1) res = (res + x) % p;
		x = (x + x) % p;
		y >>= 1;
	}
	return res;
}
int qpow(int x, int y, int p) {
	int res = 1;
	while (y) {
		if (y & 1) res = mul(res, x, p);
		x = mul(x, x, p);
		y >>= 1;
	}
	return res;
}
bool mil(int n, int a) {
	int d = n - 1, r = 0;
	while (!(d & 1)) d >>= 1, r++;
	int z = qpow(a, d, n);
	if (z == 1) return 1;
	for (int i = 0; i < r; i++) {
		if (z == n - 1) return 1;
		z = mul(z, z, n);
	}
	return 0;
}
bool pri(int n) {
	if (n <= 1) return 0;
	for (int i = 0; i < 8; i++) {
		if (n == prime[i]) return 1;
		if (n % prime[i] == 0) return 0;
		if (!mil(n, prime[i])) return 0;
	}
	return 1;
}
