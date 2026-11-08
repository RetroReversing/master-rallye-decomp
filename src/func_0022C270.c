/* func_0022AE70 */
extern void D_002AD390(void *);

void func_0022AE70(void *arg0, s32 arg1) {
    void *obj;
    void *vt;
    s16 off;
    void (*fn)(void *, s32);

    obj = *(void **)arg0;
    if (obj != 0) {
        vt = *(void **)((u8 *)obj + 0x28);
        off = *(s16 *)((u8 *)vt + 8);
        fn = *(void (**)(void *, s32))((u8 *)vt + 0xC);
        fn((u8 *)obj + off, 3);
    }
    obj = *(void **)((u8 *)arg0 + 4);
    if (obj != 0) {
        vt = *(void **)obj;
        off = *(s16 *)((u8 *)vt + 0x10);
        fn = *(void (**)(void *, s32))((u8 *)vt + 0x14);
        fn((u8 *)obj + off, 3);
    }
    if (arg1 & 1) {
        D_002AD390(arg0);
    }
}

/* func_0022C238 */
extern void *D_002AD408(s32);
extern void *func_00242B60(void *, void *);

void *func_0022C238(void *arg0, void *arg1) {
    return func_00242B60(D_002AD408(0x3C), arg1);
}

/* func_0022C270 */
s32 *func_0022C270(s32 *arg0) {
    *arg0 = 0xA;
    return arg0;
}

/* func_0022C938 */
extern u8 D_00426508[];

void *func_0022C938(void *arg0) {
    u8 *p = (u8 *)arg0;
    u8 *b;

    *(s32 *)(p + 0x00) = 0;
    *(s32 *)(p + 0x04) = 0;
    *(s32 *)(p + 0x08) = 0;

    b = p + 0x0C;
    *(s32 *)(b + 0x00) = 0;
    *(s32 *)(b + 0x04) = 0;
    *(s32 *)(b + 0x08) = 0;

    b = p + 0x18;
    *(s32 *)(b + 0x00) = 0;
    *(s32 *)(b + 0x04) = 0;
    *(s32 *)(b + 0x08) = 0;

    *(s32 *)(p + 0x24) = 0;
    *(s32 *)(p + 0x28) = 0;

    b = p + 0x2C;
    *(s32 *)(b + 0x00) = 0;
    *(s32 *)(b + 0x04) = 0;
    *(s32 *)(b + 0x08) = 0;

    b = p + 0x38;
    *(s32 *)(b + 0x00) = 0;
    *(s32 *)(b + 0x04) = 0;
    *(s32 *)(b + 0x08) = 0;

    b = p + 0x44;
    *(s32 *)(b + 0x00) = 0;
    *(s32 *)(b + 0x04) = 0;
    *(s32 *)(b + 0x08) = 0;

    *(s32 *)(p + 0x50) = 0;
    *(s32 *)(p + 0x54) = 0;

    b = p + 0x58;
    *(f32 *)(b + 0x00) = *(f32 *)(D_00426508 + 0);
    *(f32 *)(b + 0x04) = *(f32 *)(D_00426508 + 4);
    *(f32 *)(b + 0x08) = *(f32 *)(D_00426508 + 8);

    *(s32 *)(p + 0x64) = 0;
    *(s32 *)(p + 0x68) = 0;
    return arg0;
}
