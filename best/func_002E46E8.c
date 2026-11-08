typedef struct S_E4770_ItemA { u8 pad[0x1C]; s32 f1C; } S_E4770_ItemA;
typedef struct S_E4770_ItemB { u8 pad[0x0C]; s32 f0C; } S_E4770_ItemB;
typedef struct S_E4770_Obj {
    u8 pad0[0x10];
    void **arr10;
    s32 end14;
    u8 pad18[4];
    void **arr1C;
    s32 end20;
    u8 pad24[4];
    u8 *p28;
} S_E4770_Obj;

void func_002E4770(S_E4770_Obj *arg0) {
    s32 n, i;
    void **base;

    n = (arg0->end14 - (s32)arg0->arr10) >> 2;
    for (i = 0; i < n; i++) {
        base = arg0->arr10;
        {
            S_E4770_ItemA *e = (S_E4770_ItemA *)base[i];
            if (e != 0) e->f1C = 0;
        }
    }
    n = (arg0->end20 - (s32)arg0->arr1C) >> 2;
    for (i = 0; i < n; i++) {
        base = arg0->arr1C;
        {
            S_E4770_ItemB *e = (S_E4770_ItemB *)base[i];
            if (e != 0) e->f0C = 0;
        }
    }
    *(s32 *)(arg0->p28 + 0x38) = 0;
}

extern void *func_002E3630(void *, void *, void *, void *, f32);
extern void func_0024F830(void *);
extern void *func_0024F860(void *, void *, void *, void *, f32);
extern void func_0024F838(void *, s32);

void *func_002E46E8(void *arg0, void *arg1, void *arg2, void *arg3, f32 arg4) {
    volatile s32 sp[4];
    void *t;
    void *r;
    t = func_002E3630(arg0, arg1, arg2, arg3, arg4);
    if (t) {
        func_0024F830((void *)sp);
        r = func_0024F860((void *)sp, t, arg2, arg3, arg4);
        func_0024F838((void *)sp, 2);
        return r;
    }
    return 0;
}
