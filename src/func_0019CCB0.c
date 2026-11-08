/* identical to func_0019CC60 (matched), with its names changed by decompdecomp */
extern void func_001D4040(void *arg0, const char *arg1);
extern char D_00472008[];

void func_0016D178(void *arg0, float *arg1) {
    *arg1 = *(float *)((unsigned char *)arg0 + 0x30) * 2.5f;
}

void func_0019CC10(void *arg0, void *arg1, void *arg2, float *arg3) {
    int sp[4];
    func_001D4040(sp, D_00472008);
    ((int *)arg1)[4] = sp[0];
    *arg3 = 90.0f;
}

void func_0019CCB0(void *arg0, void *arg1, void *arg2, float *arg3) {
    int sp[4];
    func_001D4040(sp, D_00472008);
    ((int *)arg1)[3] = sp[0];
    *arg3 = 90.0f;
}

void func_0019CD00(void *arg0, void *arg1, int arg2, float *arg3) {
    ((int *)arg1)[4] = 1;
    if (arg2 == 0) {
        ((int *)arg1)[5] = 0;
    } else {
        ((int *)arg1)[5] = 1;
    }
    *arg3 = 90.0f;
}
