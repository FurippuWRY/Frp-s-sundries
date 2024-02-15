bool isprime[100000010];
int prime[6000010], cnt = 0;
void pri(int n) {
	memset(isprime, 1, sizeof isprime);
	isprime[1] = 0;
	for (int i = 2; i <= n; ++i) {
		if (isprime[i]) prime[++cnt] = i;
		for (int j = 1; j <= cnt && i * prime[j] <= n; ++j) {
			isprime[i * prime[j]] = 0;
			if (i % prime[j] == 0)
				break;
		}
	}
}
