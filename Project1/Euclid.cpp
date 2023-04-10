int eucliditeration(int a, int b) {
    int tmp, n;

    if (a < b) {
        tmp = a;
        a = b;
        b = tmp;
    }

    while (b != 0) {
        n = a % b;
        a = b;
        b = n;
    }
    return a;
}

int euclidrecursive(int a, int b) {

    if (b == 0) {
        return a;
    }
    else {
        return euclidrecursive(b, a % b);
    }
}