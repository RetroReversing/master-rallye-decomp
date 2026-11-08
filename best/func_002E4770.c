extern s32 D_0043C3B0[];

void func_003F0B30(s32 arg0, s32 arg1, s32 arg2) {
    register s32 *p = D_0043C3B0;
    p[3] = arg0;
    p[1] = arg1;
    p[2] = arg2;
}

/* func_002E4770 */
typedef struct S_E4770_ItemA { u8 pad[0x1C]; s32 f1C; } S_E4770_ItemA;
typedef struct S_E4770_ItemB { u8 pad[0x0C]; s32 f0C; } S_E4770_ItemB;
typedef struct S_E4770_Obj {
    u8 pad0[0x10];
    s32 *arr10;  /* 0x10: base pointer to array of pointers */
    s32 end14;   /* 0x14 */
    u8 pad18[4];
    s32 *arr1C;  /* 0x1C */
    s32 end20;   /* 0x20 */
    u8 pad24[4];
    void **p28;  /* 0x28 */
} S_E4770_Obj;

void func_002E4770(S_E4770_Obj *arg0) {
    s32 n, i;
    n = (arg0->end14 - (s32)arg0->arr10) >> 2;
    for (i = 0; i < n; i++) {
        S_E4770_ItemA *e = (S_E4770_ItemA *)arg0->arr10[i];
        if (e != 0) e->f1C = 0;
    }
    n = (arg0->end20 - (s32)arg0->arr1C) >> 2;
    for (i = 0; i < n; i++) {
        S_E4770_ItemB *e = (S_E4770_ItemB *)arg0->arr1C[i];
        if (e != 0) e->f0C = 0;
    }
    ((s32 *)arg0->p28)[0xE] = 0; /* 0x38 */
}

/* func_002E46E8 */
extern void *func_002E3630(void *, void *, void *, void *, f32);
extern void func_0024F830(void *);
extern void *func_0024F860(void *, void *, void *, void *, f32);
extern void func_0024F838(void *, s32);

void *func_002E46E8(void *arg0, void *arg1, void *arg2, void *arg3, f32 arg4) {
    u8 sp[0x60];
    void *t;
    void *r;
    t = func_002E3630(arg0, arg1, arg2, arg3, arg4);
    if (t == 0) return 0;
    func_0024F830(sp);
    r = func_0024F860(sp, t, arg2, arg3, arg4);
    func_0024F838(sp, 2);
    return r;
}

/* func_002E36E0 */
extern void *D_002AD408(s32);
extern void *func_002EF400(void *);
extern void func_002441A0(s32, s32);
extern void func_0021E6F0(void *, void *);

void func_002E36E0(void *arg0, s32 arg1, void *arg2) {
    void *obj = func_002EF400(D_002AD408(0xC));
    s32 v = *(s32 *)((u8 *)obj + 4);
    if (v != 0) {
        func_002441A0(v, 3);
    }
    *(s32 *)((u8 *)obj + 4) = arg1;
    func_0021E6F0(arg2, obj);
}
