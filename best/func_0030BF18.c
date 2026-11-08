extern s32 D_0043C3B0[];

/* likely regalloc-blocked ($v0 vs $t0 for base) - best known score 25 */
void func_003F0B30(s32 arg0, s32 arg1, s32 arg2) {
    s32 *p = D_0043C3B0;
    p[3] = arg0;
    p[1] = arg1;
    p[2] = arg2;
}

typedef int (*FuncPtr3)(void *, void *, int);
typedef int (*FuncPtr2)(void *, void *);

typedef struct VTable {
    char pad0[0x50];
    s16 off50;
    char pad52[2];
    FuncPtr3 fn54;
    char pad58[0x28];
    s16 off80;
    char pad82[2];
    FuncPtr2 fn84;
} VTable;

typedef struct Obj {
    char pad0[8];
    VTable *vt;
} Obj;

int func_0030BFA8(Obj *arg0, char *arg1, int arg2) {
    char *cur;
    char *base;
    int max;
    VTable *vt;

    max = arg2 - 1;
    base = arg1;
    cur = base;
    if (max < 0) {
        return 0;
    }
    vt = arg0->vt;
    do {
        if (vt->fn54((char *)arg0 + vt->off50, cur, 1) == 0) {
            *cur = 0;
            return 0;
        }
        if (*cur == 0xD) {
            *cur = 0;
            return 1;
        }
        if ((*cur ^ 0xA) != 0) {
            cur++;
        }
        vt = arg0->vt;
    } while (max >= (cur - base));
    return 0;
}

int func_0030BF18(Obj *arg0, char *arg1) {
    VTable *vt;
    int result = 0;

    vt = arg0->vt;
    if (vt->fn84((char *)arg0 + vt->off80, arg1) != 0) {
        vt = arg0->vt;
        if (vt->fn84((char *)arg0 + vt->off80, arg1 + 4) != 0) {
            vt = arg0->vt;
            if (vt->fn84((char *)arg0 + vt->off80, arg1 + 8) != 0) {
                result = 1;
            }
        }
    }
    return result;
}

void func_0030BE70(Obj *arg0, int *arg1) {
    VTable *vt;
    unsigned char buf[16];

    vt = arg0->vt;
    vt->fn54((char *)arg0 + vt->off50, buf, 1);
    *arg1 = (buf[0] != 0);
}
