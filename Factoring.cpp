//#include <vector>が必要
vector<pair<long long int, long long int>> fs;

void factoring(long long int base) {
    for (int i = 2; i * i <= base; i++) {
        if (base % i == 0) {
            int cnt = 0;
            while (base % i == 0) {
                base /= i;
                cnt++;
            }
            fs.emplace_back(i, cnt);
        }
    }
    if (base > 1) {
        fs.emplace_back(base, 1);
    }
}
