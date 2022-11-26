#include <iostream>
#include <map>
using namespace std;

bool checkNumber(long long n) {
    long long res = 0, sum = 0, temp = n;
    while (n != 0) {
        sum += n%10;
        res = res * 10 + n%10;
        n /= 10;
    }

    if (res == temp && sum%10==0)
        return true;
    else
        return false;
}

int main() {
    int a[1001][1001];
    for (int i = 1; i <= 1000; i++)
        for (int j = 1; j <= 1000; j++)
            a[i][j] = -1;

    while (1) {
        map <long long, bool> x;
        long long l, r;
        cin >> l >> r;

        int count = 0;
        for (long long i = l; i <= r; i++) {
            if (x[i]) {
                count++;
                continue;
            }
            if (checkNumber(i)) {
                count++;
                x[i] = true;
            }
        }

        cout << count << endl;
    }

    return 0;
}