#include "context.h"

void *D_002AD530(s32);
void *D_002AD390(void *);
s32 D_002AD408(s32);
void *func_003B9600(s32);

extern void *D_004767A8;
extern void *D_00488628;

struct S_func_003C62B0 {
    char pad0[4];
    void **vt;
    char pad8[0x1B4];
    s32 field_0x1BC;
};

void func_003C62B0(struct S_func_003C62B0 *arg0, s32 arg1) {
    s32 i;
    void *p;
    void *v;
    i = 0;
    arg0->vt = &D_00488628;
    if (arg0->field_0x1BC > 0) {
        p = (char *)arg0 + 8;
        do {
            v = *(void **)p;
            if (v != NULL) {
                D_002AD530((s32)v);
            }
            i = i + 1;
            p = (char *)p + 0x10;
        } while (i < arg0->field_0x1BC);
    }
    arg0->vt = &D_004767A8;
    if (arg1 & 1) {
        D_002AD390(arg0);
    }
}

struct S_func_003C6408 {
    char pad0[4];
    void *vt;
};

s32 func_003C6408(struct S_func_003C6408 *arg0) {
    void *vt;
    s16 off;
    s32 (*fn)(void *, s16);
    vt = arg0->vt;
    off = *(s16 *)((char *)vt + 0x10);
    fn = *(s32 (**)(void *, s16))((char *)vt + 0x14);
    return fn((char *)arg0 + off, off) * 4;
}

struct S_func_003C6438 {
    char pad0[0x1B0];
    s32 field_0x1B0;
    s32 field_0x1B4;
    s32 field_0x1B8;
    s32 field_0x1BC;
};

u32 func_003C6438(struct S_func_003C6438 *arg0, s32 arg1) {
    s32 var_6;
    s32 base;
    s32 var_4;
    var_6 = arg0->field_0x1B4 >> arg1;
    if (arg0->field_0x1B8 >= 2) {
        if ((arg1 ^ (arg0->field_0x1BC - 1)) == 0) {
            var_6 = var_6 * 2;
        }
    }
    base = arg0->field_0x1B0 >> arg1;
    base = base + 7;
    base = base & ~7;
    if (var_6 > 7) {
        var_4 = var_6;
    } else {
        var_4 = 8;
    }
    return (u32)((base * 4 * var_4) + 0xFF) >> 8;
}

struct S_func_003B9630 {
    char pad0[0x18];
    s32 field_0x18;
};

void func_003B9630(struct S_func_003B9630 *arg0) {
    void *p = func_003B9600(D_002AD408(0x1C));
    *(s32 *)((char *)p + 0x18) = arg0->field_0x18;
}
