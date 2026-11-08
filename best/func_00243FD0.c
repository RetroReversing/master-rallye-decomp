extern void func_00237610(void *, void *, void *, f32 *);
extern int func_00243490(void *, void *, void *, void *, void *);
extern f32 D_00479B64;

void func_002433F8(void *arg0, void *a1, void *a2) {
    void **p = (void **)arg0;
    if (p[6] != 0) {
        if (p[7] != 0) {
            f32 f = D_00479B64;
            func_00237610(arg0, a1, a2, &f);
        }
    }
}

void func_00243438(void *arg0, void *arg1, void *arg2, void *arg3, void *arg4) {
    f32 sp0[3];
    f32 sp10[3];
    f32 *a3 = (f32 *)arg3;
    f32 *a4 = (f32 *)arg4;
    sp0[0] = a3[0]; sp0[1] = a3[1]; sp0[2] = a3[2];
    sp10[0] = a4[0]; sp10[1] = a4[1]; sp10[2] = a4[2];
    func_00243490(arg0, arg1, arg2, sp0, sp10);
}

s32 func_00243FD0(void *unused, s32 *arg1, s32 *arg2) {
    s32 a, b, c, d;
    if (arg1 == arg2) return 0;
    a = arg1[0];
    b = arg2[0];
    if (a == b) {
        arg1[0] = arg2[1];
        arg1[6] = arg2[7];
        return 1;
    }
    c = arg2[1];
    if (a == c) {
        arg1[0] = b;
        arg1[6] = arg2[6];
        return 1;
    }
    d = arg1[1];
    if (d == b) {
        arg1[1] = c;
        arg1[7] = arg2[7];
        return 1;
    }
    if (d == c) {
        arg1[1] = b;
        arg1[7] = arg2[6];
        return 1;
    }
    return 0;
}
