bool num[N]; //nが素数の時trueを、素数でない時falseを代入

void eratosthenes(int n) { //n以下の素数判定
    for (int i = 0; i <= n; i++) num[i] = true;

    num[0] = num[1] = false;

    for (int i = 2; i*i <= n; i++) {
        if (num[i]) {
            for (int j = 2*i; j <= i; j += i) {
                num[j] = false;
            }
        }
    }
}
