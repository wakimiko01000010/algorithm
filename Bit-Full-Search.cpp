//0 ~ n-1の部分集合の全探索

void bitfullsearch(int n) {
    for (int bit = 0; bit < (1<<n); bit++) {
        vector<int> s;

        for (int i = 0; i < n; i++) {
            if (bit & (1<<i)) {
                s.push_back(i);
            }
        }

        for (int i = 0; i < (int)s.size(); i++) { //bitが表す集合を出力
            cout << s[i] << " ";
        }
        cout << "\n";
    }
}
