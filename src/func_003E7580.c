extern int func_003E67F0(void *arg0, int a, int b, int c);
extern int func_003E6900(void *arg0, int a, int b, int c);

void func_003E5FE0(void *arg0, int arg1, int arg2) {
    int *p = (int *)arg0;
    int v0;
    if (arg2 == 0) {
        goto L604C;
    }
    if (p[0x174 / 4] == 3) {
        int a1;
        if (p[0x150 / 4] != 3) {
            a1 = p[0x1B8 / 4];
        } else {
            a1 = p[0x1C4 / 4];
        }
        func_003E67F0(arg0, a1, arg1 - 1, arg1);
        goto L6050;
    }
    {
        int a1, a2;
        if (p[0x150 / 4] != 3) {
            a1 = p[0x1C8 / 4];
            a2 = p[0x1D8 / 4];
        } else {
            a1 = p[0x1D4 / 4];
            a2 = p[0x1E4 / 4];
        }
        func_003E6900(arg0, a1, a2, arg1 - 1);
    }
L604C:
L6050:
    v0 = p[0xF8 / 4];
    if (v0 == 1) {
        p[0xF8 / 4] = 2;
    }
}

long long func_003E7478(unsigned long long *arg0, int arg1);
void func_003E7498(void *arg0, int arg1);

long long func_003E7580(void *arg0) {
    long long r = func_003E7478((unsigned long long *)arg0, 1);
    func_003E7498(arg0, 1);
    return r;
}

void func_003E7498(void *arg0, int arg1);

void func_003E75C8(void *arg0, int arg1) {
    int *p = (int *)arg0;
    long long *pl = (long long *)arg0;
    long long t2 = ((long long)(arg1 << 3)) + pl[6];
    pl[0] = 0;
    int t6 = p[2] + (int)((t2 << 29) >> 32);
    p[4] = 0;
    pl[6] = t2;
    if (t6 < p[9]) {
        p[3] = t6;
    } else {
        p[3] = t6 - p[10];
    }
    func_003E7498(arg0, 0);
}

void func_003E7660(void *arg0) {
    void **p = (void **)arg0;
    void *node = *p;
    if (node == 0) return;
    while (1) {
        int *n = (int *)node;
        if (n[0] != 0) {
            void **v = (void **)(n[4]);
            short off = *(short *)((char *)v + 8);
            ((void (*)(void *))v[3])((char *)node + off);
        }
        node = *(void **)((char *)node + 12);
        if (node == 0) break;
    }
}
