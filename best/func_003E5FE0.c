extern int func_003E67F0(void *arg0, int a, int b, int c);
extern int func_003E6900(void *arg0, int a, int b, int c);

void func_003E5FE0(void *arg0, int arg1, int arg2) {
    int *p = (int *)arg0;
    int v0;
    if (arg2 != 0) {
        if (p[0x174 / 4] == 3) {
            int a1;
            if (p[0x150 / 4] == 3) {
                a1 = p[0x1C4 / 4];
            } else {
                a1 = p[0x1B8 / 4];
            }
            func_003E67F0(arg0, a1, arg1 - 1, arg1);
        } else {
            int a1, a2;
            if (p[0x150 / 4] == 3) {
                a1 = p[0x1D4 / 4];
                a2 = p[0x1E4 / 4];
            } else {
                a1 = p[0x1C8 / 4];
                a2 = p[0x1D8 / 4];
            }
            func_003E6900(arg0, a1, a2, arg1 - 1);
        }
    }
    v0 = p[0xF8 / 4];
    if (v0 == 1) {
        p[0xF8 / 4] = 2;
    }
}
