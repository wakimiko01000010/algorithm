int V; //頂点の数
struct edge{int from, to, cost;}; //それぞれ出発点、行き先、移動コスト
vector<edge> edges;
int d[MAX_V]; //d[i]は始点からiに行くのにかかる最短コスト

void bellmanford()
{
    fill(d, d+V, 10000000);

    int s;
    cin >> s;
    d[s] = 0; //始点に行くのにかかるコストは0

    for (int i = 0; i < V; i++) {
        for (int j = 0; j < (int)edges.size(); j++) {
            edge e = edges[j];
            if (d[e.to] > d[e.from] + e.cost) {
                d[e.to] = d[e.from] + e.cost;
                if (i == V-1) {
                    cout << "negative loop" << endl;
                    return;
                }
            }
        }
    }

    for (int i = 0; i < V; i++) cout << d[i] << endl;
}
