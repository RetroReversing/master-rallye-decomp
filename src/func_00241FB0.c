extern f32 D_00479C9C;
extern f32 D_004264A0;
extern u32 D_0047A5C0;

extern void func_00237350(void);
extern f32 fabsf(f32);

f32 func_00241F90(f32 fparg0, void *arg1, f32 fparg1) {
    return (fparg0 * fparg1 * *(f32 *)((u8 *)arg1 + 0x1C)) / D_00479C9C;
}

f32 func_00241FB0(s32 arg0, void *arg1) {
    return *(f32 *)((u8 *)arg1 + 0x1C);
}

s32 func_002429A8(s32 arg0, void *arg1, void *arg2) {
    f32 *pa = (f32 *)((u8 *)arg1 + 8);
    f32 *pb = (f32 *)((u8 *)arg2 + 8);
    f32 dot = pa[0] * pb[0] + pa[1] * pb[1] + pa[2] * pb[2];
    f32 diff = 1.0f - fabsf(dot);
    if (diff < 0.0f) diff = -diff;
    if (diff < D_004264A0) return 1;
    return 0;
}

void *func_00242B10(void *arg0) {
    func_00237350();
    *(s32 *)((u8 *)arg0 + 0x20) = 0;
    *(void **)(arg0) = &D_0047A5C0;
    *(s32 *)((u8 *)arg0 + 0x28) = 0;
    *(s32 *)((u8 *)arg0 + 0x24) = 0;
    *(s32 *)((u8 *)arg0 + 0x2C) = 0;
    *(s32 *)((u8 *)arg0 + 0x34) = 0;
    *(s32 *)((u8 *)arg0 + 0x38) = 0;
    return arg0;
}
