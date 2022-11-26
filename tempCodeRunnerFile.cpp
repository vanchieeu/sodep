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