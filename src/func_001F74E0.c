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
    arg0->unk14 = 0;
    arg0->unk1C = 0;
    arg0->unk18 = 0;
    arg0->unk20 = 0;
    arg0->unk28 = 0;
    arg0->unk24 = 0;
    arg0->unk4 = -1;
    arg0->unkC = -1;
    arg0->unk0 = -1;
    arg0->unk10 = -1;
    arg0->unk8 = -1;
    return arg0;
}

struct S_1F7460 {
    s8 pad0[0x8];
    s32 unk8;
    s32 unkC;
};

s32 func_001F7460(struct S_1F7460 *arg0, struct S_1F7460 *arg1) {
    if (arg0->unkC != arg1->unkC) {
        return 0;
    }
    return arg0->unk8 == arg1->unk8;
}

struct S_1F74E0 {
    s8 pad0[0x24];
    void *unk24;
};

s32 func_001F74E0(void *unused, struct S_1F74E0 *arg1) {
    (void)unused;
    void **blk = (void **)arg1->unk24;
    void *start = blk[0];
    void *end = blk[1];
    s32 found = 0;
    if (start != end) {
        do {
            if (*(s32 *)((char *)start + 0x44) != 0) {
                found = 1;
            }
            start = (char *)start + 0x58;
        } while (start != end);
    }
    return found;
}
