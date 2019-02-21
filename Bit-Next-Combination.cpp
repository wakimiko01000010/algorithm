//n個の要素の集合での部分集合のうち、要素数がkのもののみの列挙

int next_combination(int sub) {
    int x = sub & -sub, y = sub + x;
    return (((sub & ~y) / x) >> 1) | y;
}

void enumeration(int n, int k) {
    int bit = (1<<k)-1;
    for (; bit < (1<<n); bit = next_conbination(bit)) {
        vector<int> s;

        for (int i = 0; i < n; i++) {
            if (bit & (1<<i)) {
                s.push_back(i);
            }
        }

        for (int i = 0; i < (int)s.size(); i++) {
            cout << s[i] << " ";
        }
        cout << "\n";
    }
}
