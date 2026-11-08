extern s32 func_0030C9A8(s32, s32);

typedef struct {
    f32 f0, f4, f8, fC;
} S_00429868;

extern S_00429868 D_00429868[48];

void func_002CE390(s32 idx, f32 val) {
    if ((u32)(idx - 2) < 0x2E) {
        func_0030C9A8(idx, (s32)(val * 4096.0f / 48000.0f));
        D_00429868[idx].fC = val;
    }
}
