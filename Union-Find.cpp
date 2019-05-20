//#include <vector>が必要。

struct UnionFind {
    vector<int> par;

    UnionFind(int N) : par(N, -1) {}
    void init(int N) { par.assign(N, -1); }

    int root(int x) { //木の根を求める
        if (par[x] < 0) return x; //根の判定
        else return (par[x] = root(par[x])); //経路圧縮
    }

    bool same(int x, int y) { //xとyが同じ集合か判定
        return root(x) == root(y);
    }

    bool merge(int x, int y) { //xとyの属する集合を併合する
        x = root(x); y = root(y);
        if (x == y) return false; //根が同じ時はそのまま
        if (par[x] > par[y]) swap(x, y); //要素が少ない方をくっつける
        par[x] += par[y];
        par[y] = x;
        return true;
    }
    int size(int x) {
        return -par[root(x)];
    }
};
