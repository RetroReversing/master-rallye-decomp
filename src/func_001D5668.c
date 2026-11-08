typedef struct { void *ptr; void *end; } S_55C8;

extern void func_003FA310(void *, const char *, s32, s32, s32, s32);
extern char D_00476010[];
extern char D_0048F1E8[];

char *func_001D55C8(void *arg0) {
    s32 t;
    s32 h, m, s, f;

    t = *(s32 *)((char *)arg0 + 0x10);
    h = t / 108000;
    m = t / 1800;
    s = t / 30;
    f = t % 30;
    func_003FA310(D_0048F1E8, D_00476010, h % 60, m % 60, s % 60, f);
    return D_0048F1E8;
}

s32 func_001D3920(void *arg0) {
    s32 *v;
    s32 ret;

    v = *(s32 **)((char *)arg0 + 4);
    ret = 0;
    if (v != (s32 *)arg0) {
        if (v != (s32 *)arg0) {
            ret = *v;
        }
    }
    return ret;
}

extern void func_001D56E0(void *, s32);
extern void func_001D2CD8(void *, void *);
extern void D_002AD390(void *);
extern s32 D_00492200;

s32 func_001D5668(void *arg0) {
    s32 local[4];

    func_001D56E0(local, *(s32 *)((char *)arg0 + 0x10));
    func_001D2CD8(&D_00492200, (void *)local[0]);
    D_002AD390((void *)local[0]);
    return D_00492200;
}

extern void func_001D1F58(s8, void *);

s32 func_001D1AF8(void *arg0, s8 arg1) {
    char *ptr;
    char *end;

    ptr = *(char **)((char *)arg0 + 4);
    end = *(char **)((char *)arg0 + 8);
    if (ptr < end) {
        if (*ptr == arg1) {
            *(char **)((char *)arg0 + 4) = ptr + 1;
            func_001D1F58(arg1, arg0);
            return 1;
        }
    }
    return 0;
}
