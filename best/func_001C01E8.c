typedef struct UnkBFA18Struct UnkBFA18Struct;

typedef struct {
    /* 0x0 */ u8 pad[4];
    /* 0x4 */ void **unk4;
    /* 0x8 */ void *unk8;
    /* 0x1C */ void *unk1C;
    /* 0x20 */ void *unk20;
    /* 0x24 */ void *unk24;
    /* 0x58 */ s32 unk58;
    /* 0x5C */ s32 unk5C;
    /* 0x68 */ s32 unk68;
    /* 0x6C */ s32 unk6C;
} UnkBFA18;

struct UnkBFA18Struct {
    /* 0xD4 */ s32 unkD4;
};

s32 func_001C01E8(UnkBFA18 *arg0, s32 arg1, s32 arg2) {
    UnkBFA18Struct *q;
    q = arg0->unk4[arg1];
    if (arg2 != 0) {
        arg0->unk58 = 0;
        arg0->unk5C = 0;
        arg0->unk68 = 0;
    }
    if (q->unkD4 == 0) {
        s32 temp = arg0->unk5C + 1;
        arg0->unk5C = temp;
        if (temp >= 0x15) {
            arg0->unk5C = 0x14;
        }
        arg0->unk58 = 0;
    } else {
        s32 temp = arg0->unk58 + 1;
        arg0->unk58 = temp;
        if (temp >= 0x15) {
            arg0->unk58 = 0x14;
        }
        arg0->unk5C = 0;
    }
    if (arg0->unk58 >= 0x14) {
        arg0->unk68 = 1;
    }
    if (arg0->unk5C >= 0x14) {
        arg0->unk68 = 0;
    }
    return arg0->unk68;
}
