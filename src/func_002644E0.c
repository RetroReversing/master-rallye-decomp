typedef struct S_2644E0 {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    f32 unkC;
    s32 unk10;
    s32 unk14;
    s32 unk18;
    f32 unk1C;
    f32 unk20;
    s32 unk24;
} S_2644E0;

void *func_002644E0(S_2644E0 *arg0) {
    volatile char pad[0x20];
    S_2644E0 *p;
    S_2644E0 *ret;

    (void)pad;
    ret = arg0;
    arg0->unk0 = 0;
    p = (S_2644E0 *)((char *)arg0 + 0x10);
    arg0->unk4 = 0;
    arg0->unk8 = 0;
    arg0->unk10 = 0;
    p->unk4 = 0;
    p->unk8 = 0;
    arg0->unkC = 100.0f;
    arg0->unk1C = 1.5f;
    arg0->unk20 = 0.6f;
    arg0->unk24 = 0;
    return ret;
}
