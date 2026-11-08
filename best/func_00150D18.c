typedef struct {
    f32 *start;
    f32 *end;
    s32 unk8;
} S_A4;

typedef struct {
    u8 pad00[0x18];
    s32 unk18;
    u8 pad1C[0x3C];
    s32 unk58;
    u8 pad5C[8];
    s32 unk64;
    u8 pad68[8];
    f32 *unk70;
    u8 pad74[0x30];
    S_A4 *unkA4;
} Big;

extern u8 D_0040E698[];

void *func_001E4280(void *arg0);
s32 func_001E3820(void *arg0, s32 arg1, void *arg2);
s32 func_001E3650(void *arg0, s32 arg1);

f32 func_00150D18(Big *arg0, s32 arg1, s32 arg2, f32 fparg0) {
    S_A4 *p;
    s32 count;
    f32 *base;
    s32 k;
    s32 j;
    s32 up;
    s32 down;
    f32 f0;
    f32 f1;
    f32 f2;
    f32 f3;

    if (func_001E3820(func_001E4280(arg0), arg0->unk58 + arg1 * 4, D_0040E698) == 0) {
        return 0.0f;
    }

    base = arg0->unk70;
    p = &arg0->unkA4[arg1];
    count = ((s32)p->end - (s32)p->start) >> 2;

    if (base[arg1] < base[arg0->unk18]) {
        k = func_001E3650(func_001E4280(p), arg0->unk64 + arg1 * 4);
        f3 = p->start[k];
        up = k * 4;
        down = k * 4;
        for (j = 0; j < 8; j++) {
            f0 = 0.0f;
            f1 = 0.0f;
            if (k + j < count) {
                f0 = *(f32 *)((u8 *)arg0->unkA4[arg0->unk18].start + up);
            }
            if (f0 == 0.0f) {
                f2 = 0.0f;
                if (k - j >= 0) {
                    f1 = *(f32 *)((u8 *)arg0->unkA4[arg0->unk18].start + down);
                }
                if (f1 == 0.0f) {
                    up += 4;
                    down -= 4;
                    continue;
                }
                return f1 - f3;
            }
            return f0 - f3;
        }
        return 0.0f;
    } else {
        up = arg2 * 4;
        for (j = 0; j < 8; j++) {
            f0 = 0.0f;
            f1 = 0.0f;
            if (arg2 + j < count) {
                f1 = *(f32 *)((u8 *)p->start + up);
            }
            if (f1 == 0.0f) {
                f2 = 0.0f;
                if (arg2 - j >= 0) {
                    f0 = p->start[arg2 - j];
                }
                if (f0 == 0.0f) {
                    up += 4;
                    continue;
                }
                return fparg0 - f0;
            }
            return fparg0 - f1;
        }
        return 0.0f;
    }
}
