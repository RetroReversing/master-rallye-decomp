/* func_002BECE8 */
extern int ReferSemaStatus_2(int, void *);
extern void func_003F9698(char *, char *, int, int, int, int);
extern char D_00480CC0[];
extern char D_00480D08[];
extern char D_00480D10[];
extern char D_00480D68[];

typedef struct {
    int unk0;
    char *unk4;
} S_func_002BECE8;

void func_002BECE8(S_func_002BECE8 *arg0) {
    int sema;
    int sema2;
    char *name;
    char *fmt;
    int status[4];

    sema = arg0->unk0;
    if (sema == -1) {
        fmt = D_00480D68;
        name = arg0->unk4;
        if (name == 0) {
            name = D_00480D08;
        }
        func_003F9698(fmt, name, -1, 0, 0, 0);
        return;
    }

    sema2 = arg0->unk0;
    if (ReferSemaStatus_2(sema, status) == sema2) {
        fmt = D_00480CC0;
        name = arg0->unk4;
        if (name == 0) {
            name = D_00480D08;
        }
        func_003F9698(fmt, name, sema2, status[0], status[1], status[3]);
        return;
    }

    fmt = D_00480D10;
    name = arg0->unk4;
    if (name == 0) {
        name = D_00480D08;
    }
    func_003F9698(fmt, name, sema2, 0, 0, 0);
}

/* func_002BEA60 - compiled with ee-gcc-2.95.2 -O2 -G0 (range) */
extern int func_002BEA40(int);
extern int D_00428D98;

int func_002BEA60(void) {
    int ret;
    int val;

    ret = 1;
    val = D_00428D98;
    if (val != 0) {
        ret = func_002BEA40(val);
        if (ret != 0) {
            D_00428D98 = 0;
        }
    }
    return ret;
}

/* func_002BEA40 - compiled with ee-gcc-2.95.2 -O2 -G0 (range) */
extern int sceSifDmaStat_2(int);

int func_002BEA40(int a0, int a1) {
    return (unsigned int)sceSifDmaStat_2(a1) >> 31;
}

/* func_002BE718 - compiled with ee-gcc-2.95.2 -O2 -G0 (range) */
extern int func_00404F50(int, int);

int func_002BE718(int a0, int a1, int a2) {
    return func_00404F50(a1, a2);
}
