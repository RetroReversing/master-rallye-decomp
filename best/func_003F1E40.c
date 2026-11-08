extern s32 func_003F1B98(int);
extern s32 SignalSema_2(int);
extern s32 func_00405E90(void *, int, int, int, int, void *, int, int, int);
extern s32 D_0043E728;
extern char D_0043E780[];
extern char D_0043F8D0[];

s32 func_003F1D08(void) {
    s32 ret;
    void *p;
    if (func_003F1B98(2) == 0) {
        return 0;
    }
    p = &D_0043E780;
    if (func_00405E90(&D_0043F8D0, 0xE, 0, 0, 0, p, 4, 0, 0) < 0) {
        SignalSema_2(D_0043E728);
        return 0;
    }
    SignalSema_2(D_0043E728);
    ret = *(s32 *)((unsigned int)p | 0x20000000);
    return ret;
}

extern void func_003F12D0(int);
extern int func_00404EA8(const char *);
extern int func_00406080(void *);
extern int D_0043E710;
extern int D_0043E730;
extern char D_0043F8D0[];
extern const char D_0048B550[];

int func_003F1DA0(int arg0) {
    if (arg0 == 0) {
        if (D_0043E710 > 0) {
            func_00404EA8(D_0048B550);
        }
        while (1) {
            if (D_0043E730 != 0) {
                func_003F12D0(0x3C);
                continue;
            }
            if (func_00406080(D_0043F8D0) != 0) {
                func_003F12D0(0x3C);
                continue;
            }
            return 0;
        }
    } else {
        if (D_0043E730 != 0) {
            return 1;
        }
        if (func_00406080(D_0043F8D0) != 0) {
            return 1;
        }
        return 0;
    }
}

extern char D_00440148[];
extern const char D_0048B560[];

int func_003F1E40(int arg0) {
    if (arg0 == 0) {
        if (D_0043E710 > 0) {
            func_00404EA8(D_0048B560);
        }
        while (1) {
            if (func_00406080(D_00440148) != 0) {
                func_003F12D0(0x3C);
                continue;
            }
            return 0;
        }
    } else {
        return func_00406080(D_00440148);
    }
}

extern void func_0040AF58(void);
extern void func_0040AFA0(void);

void func_003F25C0(int arg0) {
    func_0040AF58();
    *(volatile unsigned int *)0x1000F590 = *(volatile unsigned int *)0x1000F520 | 0x10000;
    *(volatile unsigned int *)0x1000B000 = arg0;
    *(volatile unsigned int *)0x1000F590 = *(volatile unsigned int *)0x1000F520 & 0xFFFEFFFF;
    func_0040AFA0();
}
