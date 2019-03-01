//#include <vector>が必要

struct Imos {
    vector<int> num;

    Imos(int N) : num(N) {}

    void prepara(int r, int l, int n) { //足したい範囲の最初にnを、最後の次の要素に-nを足す
        num[r] += n, num[l+1] += -n;
    }

    void cumulative() { //preparaでの情報をもとに累積和を求める
        for (int i = 1; i < num.size(); i++) {
            num[i] += num[i-1];
        }
    }
};
