extern void func_002EE170(void *, void *, void *);

void func_002EE0E0(void *arg0, void *arg1, void *arg2, void *arg3) {
    s32 i;
    s32 *s3 = (s32 *)arg3;
    s32 *s1 = (s32 *)arg2;
    void *s2 = arg1;
    void *s0 = arg0;
    func_002EE170(s0, s2, s3);
    func_002EE170(s0, s2, s1);
    i = 2;
    while (1) {
        s32 a = *s3;
        s32 b = *s1;
        i--;
        if (b < a) {
            *s3 = b;
            *s1 = a;
        }
        s1++;
        s3++;
        if (i < 0) break;
    }
}
