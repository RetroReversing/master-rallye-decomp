typedef struct {
    u8 pad[0x14];
    s32 unk14;
    s32 unk18;
    u8 pad2[0x8];
    s32 unk24;
} S058E0;

s32 func_004058E0(S058E0 *arg0) {
    s32 rem = arg0->unk24 % arg0->unk18;
    s32 v = arg0->unk14 + (rem << 6);
    arg0->unk24 = rem + 1;
    return v;
}
