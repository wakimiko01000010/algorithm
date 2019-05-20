//#include <vector>が必要。

struct UnionFind {
    vector<int> par;

    UnionFind(int N) : par(N) {
        //初めは全部の頂点が根になる
        for (int i = 0; i < N; i++) par[i] = i;
    }

    int root(int x) { //木の根を求める
        if (par[x] == x) { //根の判定
            return x;
        }
        else {
            return (par[x] = root(par[x])); //経路圧縮
        }
    }

    bool same(int x, int y) { //xとyが同じ集合か判定
        return root(x) == root(y);
    }

    bool merge(int x, int y) { //xとyの属する集合を併合する
        x = root(x);
        y = root(y);
        if (x == y) return false; //根が同じ時はそのまま
        if (par[x] > par[y]) swap(x, y);
        par[x] += par[y];
        par[y] = x;
        return true;
    }
};
