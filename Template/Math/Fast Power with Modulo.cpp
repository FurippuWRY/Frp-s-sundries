int power(int a, int b, int m) {
	a %= m;
	int x = 1;
	while (b > 0) {
		if (b & 1) x = x * a % m;
		a = a * a % m;
		b >>= 1;
	}
	return x;
}
