extern void *func_0039C298(int);
extern void func_00374288(void *, void *);
extern int *func_0039C2D0(int);
extern void func_0039C330(void *, int);

void func_0039C390(void *arg0, int arg1) {
    int cur = arg1;
    while (cur != 0) {
        void **p = (void **)func_0039C298(cur);
        func_00374288(arg0, *p);
        {
            int next = *func_0039C2D0(cur);
            func_0039C330(arg0, cur);
            cur = next;
        }
    }
}

/* --- func_002B6F28 --- */
extern char D_0047F290[];
extern void D_0047F580;
extern void *D_002AD408(int);
extern void *func_002B6DD0(void *, void *);
extern void *func_002B62E0(void);
extern void func_002B6290(void *, int, void *);

void *func_002B6F28(void *arg0) {
    ((int *)arg0)[3] = 0;        /* 0xC */
    *(char **)arg0 = D_0047F290;  /* 0x0 */
    ((int *)arg0)[1] = 7;         /* 0x4 */
    ((void **)arg0)[2] = &D_0047F580; /* 0x8 */
    ((void **)arg0)[4] = func_002B6DD0(D_002AD408(0x18), arg0); /* 0x10 */
    func_002B6290(func_002B62E0(), ((int *)arg0)[1], arg0);
    return arg0;
}

/* --- func_002B6AD0 --- */
extern int func_004072B0(int, int, int);

int func_002B6AD0(int arg0, int arg1) {
    int ret = 0;
    int r;
    int r2;
    func_004072B0(arg1, 0, 1);
    r = func_004072B0(arg1, 0, 2);
    if (r != -1) {
        r2 = func_004072B0(arg1, 0, 1);
        if (r2 < 1) {
            /* keep 0 */
        } else {
            ret = r2;
        }
    }
    return ret;
}
