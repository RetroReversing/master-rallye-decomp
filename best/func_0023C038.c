int func_0023C038(void *arg0, void *arg1, void *arg2) {
    int v7 = *(int *)((char *)arg1 + 0x4C);
    int v4 = *(int *)((char *)arg2 + 0x4C);
    int v6;
    int v5;
    int res;
    if (v7 == v4)
        return v4;
    v6 = *(int *)((char *)arg2 + 0x50);
    if (v7 == v6)
        return v6;
    v5 = *(int *)((char *)arg1 + 0x50);
    res = v5;
    if (v5 != v4) {
        res = 0;
        if ((v5 ^ v6) == 0)
            res = v5;
    }
    return res;
}
