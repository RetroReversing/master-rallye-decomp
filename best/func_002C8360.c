extern s32 D_00428F98;
extern u8 D_0049AE40[];

void func_003CAAB0(s16, s16, void *, void *);

typedef struct {
    char pad_00[0x14];
    s16 unk_14;
    s16 unk_16;
    char pad_18[0x08];
    s32 unk_20;
    char pad_24[0x0C];
    u64 unk_30;
} S_func_002C8360;

void func_002C8360(S_func_002C8360 *arg0, u8 arg1, s32 arg2) {
    s32 idx;
    u8 *entry;

    if (arg0->unk_20 == 0)
        return;
    if (D_00428F98 == 0)
        return;
    if (!(arg0->unk_30 & ((u64)0x8000 << 20)))
        return;

    idx = (arg0->unk_16 + arg0->unk_14) * 6;
    entry = D_0049AE40 + idx;
    if (entry[1] == arg1) {
        if (entry[0] == (arg2 ? 1 : 0))
            return;
    }

    if (arg2) {
        entry[0] = 1;
    } else {
        entry[0] = 0;
    }
    D_0049AE40[(arg0->unk_16 + arg0->unk_14) * 6 + 1] = arg1;
    func_003CAAB0(arg0->unk_14, arg0->unk_16,
                  D_0049AE40 + (arg0->unk_14 + arg0->unk_16) * 6,
                  D_0049AE40 + arg0->unk_16 * 6);
}
