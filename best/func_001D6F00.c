void func_001D7000(void *arg0);

void *func_001D6F00(void *arg0) {
    ((s32 *)arg0)[0] = 0;
    ((s32 *)arg0)[1] = 0;
    ((s32 *)arg0)[2] = 0;
    func_001D7000(arg0);
    return arg0;
}

typedef struct {
    f32 x, y, z;
    f32 u, v, w;
    f32 unk18, unk1C;
    s32 unk20;
} S_1D6E88;

S_1D6E88 *func_001D6EB8(S_1D6E88 *arg0, s32 arg1, f32 *arg2, f32 *arg3, f32 fparg0, f32 fparg1) {
    arg0->x = arg2[0];
    arg0->y = arg2[1];
    arg0->z = arg2[2];
    arg0->u = arg3[0];
    arg0->v = arg3[1];
    arg0->w = arg3[2];
    arg0->unk18 = fparg0;
    arg0->unk1C = fparg1;
    arg0->unk20 = arg1;
    return arg0;
}

S_1D6E88 *func_001D6E88(S_1D6E88 *arg0) {
    arg0->x = 0;
    arg0->y = 0;
    arg0->z = 0;
    arg0->u = 0;
    arg0->v = 0;
    arg0->w = 0;
    arg0->unk18 = 0;
    arg0->unk20 = 0;
    return arg0;
}

extern s32 D_004262C4;
s32 D_002AD408(s32 arg0);
s32 func_001D6BF8(s32 arg0);

s32 func_001D6E40(void) {
    if (D_004262C4 == 0) {
        D_004262C4 = func_001D6BF8(D_002AD408(0x10));
        return D_004262C4;
    }
    return D_004262C4;
}
