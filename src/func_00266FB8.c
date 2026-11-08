void func_00266FB8(u8 *arg0, u8 *arg1) {
    f32 *dst = (f32 *)arg1;
    f32 *p = (f32 *)(arg0 + 0xAC);
    dst[0] = *(f32 *)(arg0 + 0xA0);
    dst[1] = *(f32 *)(arg0 + 0xA4);
    dst[2] = *(f32 *)(arg0 + 0xA8);
    dst[3] = *(f32 *)(arg0 + 0xAC);
    dst[4] = p[1];
    dst[5] = p[2];
    dst[6] = p[3];
    dst[7] = *(f32 *)(arg0 + 0x104);
    dst[8] = *(f32 *)(arg0 + 0x108);
    dst[9] = *(f32 *)(arg0 + 0x10C);
    dst[10] = *(f32 *)(arg0 + 0x110);
    dst[11] = *(f32 *)(arg0 + 0x114);
    dst[12] = *(f32 *)(arg0 + 0x118);
}

void func_002670B0(void *);

void func_00267028(u8 *arg0, u8 *arg1) {
    f32 *src = (f32 *)arg1;
    u8 *self = arg0;
    f32 *p = (f32 *)(self + 0xAC);
    *(f32 *)(self + 0xA0) = src[0];
    *(f32 *)(self + 0xA4) = src[1];
    *(f32 *)(self + 0xA8) = src[2];
    *(f32 *)(self + 0xAC) = src[3];
    p[1] = src[4];
    p[2] = src[5];
    p[3] = src[6];
    *(f32 *)(self + 0x104) = src[7];
    *(f32 *)(self + 0x108) = src[8];
    *(f32 *)(self + 0x10C) = src[9];
    *(f32 *)(self + 0x110) = src[10];
    *(f32 *)(self + 0x114) = src[11];
    *(f32 *)(self + 0x118) = src[12];
    func_002670B0(arg0);
}

void *D_002AD408(s32);
void func_002682D0(s32, s32);
s32 func_002681F8(void *, s32);
void func_00268550(s32, s32);
void func_00268DE8(s32, void *, void (*)(void), void *);
void func_0027D060(void);

void func_00266838(void *arg0, s32 arg1) {
    if (*(s32 *)((u8 *)arg0 + 0x18) != 0)
        func_002682D0(*(s32 *)((u8 *)arg0 + 0x18), 3);
    *(s32 *)((u8 *)arg0 + 0x18) = 0;
    *(s32 *)((u8 *)arg0 + 0x18) = func_002681F8(D_002AD408(0x88), 0);
    func_00268550(*(s32 *)((u8 *)arg0 + 0x18), arg1);
    func_00268DE8(*(s32 *)((u8 *)arg0 + 0x18), arg0, func_0027D060, arg0);
}

void func_00268150(void *, s32);
extern u8 D_0047A508[];

void func_002667E0(void *arg0, s32 arg1) {
    *(void **)((u8 *)arg0 + 0x14) = D_0047A508;
    if (*(s32 *)((u8 *)arg0 + 0x18) != 0)
        func_002682D0(*(s32 *)((u8 *)arg0 + 0x18), 3);
    func_00268150(arg0, arg1);
}
