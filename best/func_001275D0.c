extern void func_00126890(void *);
extern void func_00126C98(void *);
extern void *func_00127378(char *);
extern void func_00127A60(void *);
extern void func_00128790(void *);
extern void func_001D4040(void *, char *);
extern char D_00448748[];
extern char D_00448AC0[];
extern char D_00448AB0[];
extern char D_00448AA0[];

void func_001275D0(void *arg0) {
    char spbuf[16];
    s32 *p = (s32 *)arg0;
    void *r;

    r = func_00127378(D_00448AC0);
    if (((s32 *)r)[0x30 / 4] == 0) {
        return;
    }
    {
        s32 temp = func_001E4280();
        func_001D4040(spbuf, D_00448748);
        if (func_001E3650(temp, (s32)spbuf) == 0) {
            p[0x5C / 4] = 1;
            func_00126890(arg0);
            p[0x54 / 4] = 1;
        } else {
            p[0x30 / 4] = 0;
            p[0x54 / 4] = 1;
            p[0x34 / 4] = 0;
            p[0x5C / 4] = 0;
        }
    }
}

void func_00127510(void *arg0) {
    char spbuf[16];
    s32 *p = (s32 *)arg0;
    void *r;

    r = func_00127378(D_00448AB0);
    if (((s32 *)r)[0x30 / 4] == 0) {
        return;
    }
    {
        s32 temp = func_001E4280();
        func_001D4040(spbuf, D_00448748);
        if (func_001E3650(temp, (s32)spbuf) == 0) {
            if (p[0x74 / 4] != 0) {
                func_00128790(arg0);
                p[0x38 / 4] = 0;
                p[0x54 / 4] = 1;
                p[0x74 / 4] = 0;
            } else {
                p[0x64 / 4] = 1;
                func_00126C98(arg0);
                p[0x54 / 4] = 1;
            }
        } else {
            p[0x30 / 4] = 0;
            p[0x54 / 4] = 1;
            p[0x64 / 4] = 0;
            p[0x38 / 4] = 0;
        }
    }
}

void func_00127458(void *arg0) {
    char spbuf[16];
    s32 *p = (s32 *)arg0;
    void *r;

    r = func_00127378(D_00448AA0);
    if (((s32 *)r)[0x30 / 4] == 0) {
        return;
    }
    {
        s32 temp = func_001E4280();
        func_001D4040(spbuf, D_00448748);
        if (func_001E3650(temp, (s32)spbuf) == 0) {
            if (p[0x74 / 4] != 0) {
                func_00127A60(arg0);
                p[0x34 / 4] = 0;
                p[0x3C / 4] = 1;
            } else {
                p[0x5C / 4] = 1;
                func_00126890(arg0);
                p[0x54 / 4] = 1;
            }
        } else {
            p[0x30 / 4] = 0;
            p[0x54 / 4] = 1;
            p[0x5C / 4] = 0;
            p[0x34 / 4] = 0;
        }
    }
}
