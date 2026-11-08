/* func_001D3150 */
void *func_001D3150(void *p) {
    int *q = (int *)p;
    int *r = q + 1;
    q[0] = 0;
    r[0] = 0;
    r[2] = 0;
    r[1] = 0;
    return p;
}

/* func_001D3048 */
extern char D_00475CF0;
extern int func_001CE2F8(void);
extern int func_001D2728(int *arg0, int arg1, int arg2, void *arg3);
extern int func_001D2A40(int *arg0, int arg1, int arg2);
extern int func_003FA9B8(int arg0, int arg1);
extern void D_002AD390(int);

void func_001D3048(int *arg0) {
    int res;
    int v;
    void *s;
    int t;

    if (*arg0 == 0) return;
    s = &D_00475CF0;
    t = func_001CE2F8();
    res = func_001D2728(arg0, 0, t, s);
    if (res == -1) {
        D_002AD390(*arg0);
        *arg0 = 0;
        return;
    }
    if (*arg0 != 0) {
        v = func_003FA9B8(*arg0, res);
    } else {
        v = 0;
    }
    func_001D2A40(arg0, res + 1, v);
}
