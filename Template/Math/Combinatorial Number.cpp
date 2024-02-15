int com(int n, int m) {
    int res = 1;
    for (int i = 1; i <= m; ++i){
        res = res * (n - m + i) / i;
    }
    return res;
}
