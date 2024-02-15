int power(int a, int b) {
    int r = 1;
    while (b > 0) {
    	if (b & 1) r = r * a;
    	a = a * a;
    	b >>= 1;
	}
	return r;
}
