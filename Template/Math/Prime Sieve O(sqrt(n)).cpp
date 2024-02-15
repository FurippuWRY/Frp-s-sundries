bool pri(int n) {
    if (!n || n == 1) return 0;
    for (int i = 2; i <= sqrt(n); i++)
        if (!(n % i)) return 0;
    return 1; 
}
