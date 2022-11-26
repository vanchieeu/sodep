#include <iostream>
#include <map>
using namespace std;

bool checkNumber(int n) {
    int res = 0, sum = 0, temp = n;
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

    while (1) {
        int l, r;
        cin >> l >> r;

        int count = 0;
        for (int i = l; i <= r; i++)
            if (checkNumber(i))
                count++;

        cout << count << endl;
    }

    return 0;
}