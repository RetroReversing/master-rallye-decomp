struct S_1F7420 {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
    s32 unk10;
    s32 unk14;
    s32 unk18;
    s32 unk1C;
    s32 unk20;
    s32 unk24;
    s32 unk28;
};

void *func_001F7420(struct S_1F7420 *arg0) {
    void *temp_2;
    void *temp_5;
    arg0->unk14 = 0;
    temp_2 = (char *)arg0 + 0x14;
    *(s32 *)((char *)temp_2 + 4) = 0;
    temp_5 = (char *)arg0 + 0x20;
    *(s32 *)((char *)temp_2 + 8) = 0;
    arg0->unk20 = 0;
    *(s32 *)((char *)temp_5 + 8) = 0;
    arg0->unk4 = -1;
    *(s32 *)((char *)temp_5 + 4) = 0;
    arg0->unk0 = -1;
    arg0->unk10 = -1;
    arg0->unk8 = -1;
    arg0->unkC = -1;
    return arg0;
}
