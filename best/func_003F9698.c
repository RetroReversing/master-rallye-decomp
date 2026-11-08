extern int func_003F9610(int, int);
extern int D_004404DC;

void func_003F9648(int arg0) {
    func_003F9610(D_004404DC, arg0);
}

extern void func_003FB738(int, int, long long *);
extern int D_004404DC;

void func_003F9658(void *arg0, int arg1, ...) {
    long long sp[6];
    long long *p = &sp[0];
    p[0] = (long long)arg1;
    /* simplified - need actual va_list handling */
    func_003FB738(*(int *)((char *)arg0 + 8), arg1, sp);
}

extern void func_003FB6C0(void *, int, long long *);
extern int D_004404DC;

void func_003F9698(int arg0, ...) {
    long long sp[6];
    void *v = (void *)D_004404DC;
    void *v2 = *(void **)((char *)v + 8);
    *(void **)((char *)v2 + 0x54) = v;
    func_003FB6C0(v2, arg0, sp);
}

extern int func_003F9ED8(void *, int);

int func_003FA0C8(void *arg0, unsigned int arg1) {
    int v;
    int *entry;
    if (arg1 >= 0x20) return -1;
    int *p = *(int **)((char *)arg0 + 0x1D4);
    if (p == 0) {
        if (func_003F9ED8(arg0, arg1 * 4) == 0) return -1;
        p = *(int **)((char *)arg0 + 0x1D4);
    }
    entry = &p[arg1];
    v = *entry;
    if (v == 0) return 1;
    if (v == 1) {
        *entry = 0;
        return 3;
    }
    if (v == -1) {
        *entry = 0;
        return 2;
    }
    if (v > 1) {
        *entry = 0;
        ((void (*)(unsigned int, int))(void *)(unsigned long)v)(arg1, arg1 * 4);
        return 0;
    }
    *entry = 0;
    ((void (*)(unsigned int, int))(void *)(unsigned long)v)(arg1, arg1 * 4);
    return 0;
}
