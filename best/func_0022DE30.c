/* func_0022C938 */
extern u8 D_00426508[];

void *func_0022C938(void *arg0) {
    s32 *p = (s32 *)arg0;
    s32 *v0 = p + 3;      /* +0x0C */
    s32 *v1 = p + 6;      /* +0x18 */
    s32 *a1 = p + 11;     /* +0x2C */
    s32 *a2 = p + 14;     /* +0x38 */
    s32 *a3 = p + 17;     /* +0x44 */
    s32 *t0 = p + 22;     /* +0x58 */
    u8 *t1 = D_00426508;
    u8 *t2 = D_00426508;

    p[0] = 0;
    p[1] = 0;
    p[2] = 0;
    p[3] = 0;
    v0[2] = 0;
    v0[1] = 0;
    p[6] = 0;
    v1[2] = 0;
    v1[1] = 0;
    p[9] = 0;   /* 0x24 */
    p[10] = 0;  /* 0x28 */
    p[11] = 0;  /* 0x2C */
    a1[2] = 0;
    a1[1] = 0;
    p[14] = 0;  /* 0x38 */
    a2[2] = 0;
    a2[1] = 0;
    p[17] = 0;  /* 0x44 */
    a3[2] = 0;
    a3[1] = 0;
    p[20] = 0;  /* 0x50 */
    p[21] = 0;  /* 0x54 */
    *(f32 *)&p[22] = *(f32 *)t2;
    *(f32 *)&t0[1] = *(f32 *)(t1 + 4);
    *(f32 *)&t0[2] = *(f32 *)(t1 + 8);
    p[25] = 0;  /* 0x64 */
    p[26] = 0;  /* 0x68 */
    return arg0;
}

/* func_0022D038 */
extern void func_0024F6E0(void *, s32);
extern void func_00258F20(void *, void *, void *);

void func_0022D038(void *arg0, void *arg1, void *arg2) {
    void *sp0;
    f32 sp10[3];
    s32 tmp;

    func_0024F6E0(&sp0, *(s32 *)((u8 *)arg0 + 0x24));
    sp10[0] = *(f32 *)arg2;
    sp10[1] = *(f32 *)((u8 *)arg2 + 4);
    sp10[2] = *(f32 *)((u8 *)arg2 + 8);
    func_00258F20(sp0, arg1, sp10);
    if (sp0 != 0) {
        tmp = *(s32 *)sp0 - 1;
        *(s32 *)sp0 = tmp;
        if (tmp == 0) {
            void *vt = *(void **)((u8 *)sp0 + 4);
            s16 off = *(s16 *)((u8 *)vt + 8);
            void (*fn)(void *, s32) = *(void (**)(void *, s32))((u8 *)vt + 0xC);
            fn((u8 *)sp0 + off, 3);
        }
    }
}

/* func_0022DE30 */
extern u8 D_00426508[];

void *func_0022DE30(void *arg0) {
    s32 *p = (s32 *)arg0;
    s32 *a1 = p + 4;   /* 0x10 */
    s32 *a2 = p + 7;   /* 0x1C */
    s32 *a3 = p + 10;  /* 0x28 */
    u8 *v1 = D_00426508;

    *(f32 *)&p[0] = *(f32 *)v1;
    *(f32 *)&p[1] = *(f32 *)(v1 + 4);
    *(f32 *)&p[2] = *(f32 *)(v1 + 8);
    p[3] = 0;
    p[4] = 0;
    a1[2] = 0;
    a1[1] = 0;
    p[7] = 0;
    a2[2] = 0;
    a2[1] = 0;
    p[10] = 0;
    a3[2] = 0;
    a3[1] = 0;
    p[13] = 0; /* 0x34 */
    p[14] = 0; /* 0x38 */
    return arg0;
}

/* func_0022E748 */
void func_0022E748(void *arg0, void *arg1, s32 arg2) {
    s32 i = arg2;
    u8 *p = (u8 *)arg1;
    if (i > 0) {
        do {
            *(f32 *)(p + 4) = *(f32 *)(p + 4) + *(f32 *)(p + 4);
            i--;
            p += 0xC;
        } while (i != 0);
    }
}
