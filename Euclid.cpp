int gcd(int a, int b) {
    if (b) return gcd(b, a%b);
    else return a;
}

int lcm(int a, int b) {
    return a*b / gcd(a, b);
}
