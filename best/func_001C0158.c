typedef struct {
    u32 unk0;
    f32 unk4;
    f32 unk8;
    f32 unkC;
    f32 unk10;
    f32 unk14;
    f32 unk18;
    f32 unk1C;
} UnkC6100;

void *func_001C6100(UnkC6100 *arg0, UnkC6100 *arg1, UnkC6100 *arg2) {
    UnkC6100 *src = arg0;
    UnkC6100 *dst = arg2;
    if (src == arg1) {
        return dst;
    }
    src = (UnkC6100 *)((u8 *)src + 4);
    dst = (UnkC6100 *)((u8 *)dst + 4);
    do {
        if (dst != (UnkC6100 *)4) {
            *(u32 *)((u8 *)dst - 4) = *(u32 *)((u8 *)src - 4);
            ((f32 *)dst)[0] = ((f32 *)src)[0];
            ((f32 *)dst)[1] = ((f32 *)src)[1];
            ((f32 *)dst)[2] = ((f32 *)src)[2];
            ((f32 *)dst)[3] = ((f32 *)src)[3];
            ((f32 *)dst)[4] = ((f32 *)src)[4];
            ((f32 *)dst)[5] = ((f32 *)src)[5];
            ((f32 *)dst)[6] = ((f32 *)src)[6];
        }
        src = (UnkC6100 *)((u8 *)src + 0x20);
        dst = (UnkC6100 *)((u8 *)dst + 0x20);
    } while (src != arg1);
    return dst;
}

typedef struct {
    u32 unk0;
    u32 unk4;
    f32 unk8;
    f32 unkC;
    f32 unk10;
    f32 unk14;
    f32 unk18;
    f32 unk1C;
    f32 unk20;
    f32 unk24;
    f32 unk28;
} UnkC8310;

void *func_001C8310(UnkC8310 *arg0, UnkC8310 *arg1, UnkC8310 *arg2) {
    UnkC8310 *src = arg0;
    UnkC8310 *dst = arg2;
    if (src == arg1) {
        return dst;
    }
    src = (UnkC8310 *)((u8 *)src + 0x20);
    dst = (UnkC8310 *)((u8 *)dst + 0x20);
    do {
        if (dst != (UnkC8310 *)0x20) {
            *(u32 *)((u8 *)dst - 0x20) = *(u32 *)((u8 *)src - 0x20);
            *(u32 *)((u8 *)dst - 0x1C) = *(u32 *)((u8 *)src - 0x1C);
            *(f32 *)((u8 *)dst - 0x18) = *(f32 *)((u8 *)src - 0x18);
            *(f32 *)((u8 *)dst - 0x14) = *(f32 *)((u8 *)src - 0x14);
            *(f32 *)((u8 *)dst - 0x10) = *(f32 *)((u8 *)src - 0x10);
            *(f32 *)((u8 *)dst - 0xC) = *(f32 *)((u8 *)src - 0xC);
            *(f32 *)((u8 *)dst - 8) = *(f32 *)((u8 *)src - 8);
            *(f32 *)((u8 *)dst - 4) = *(f32 *)((u8 *)src - 4);
            ((f32 *)dst)[0] = ((f32 *)src)[0];
            ((f32 *)dst)[1] = ((f32 *)src)[1];
            ((f32 *)dst)[2] = ((f32 *)src)[2];
        }
        src = (UnkC8310 *)((u8 *)src + 0x2C);
        dst = (UnkC8310 *)((u8 *)dst + 0x2C);
    } while (src != arg1);
    return dst;
}

typedef struct UnkBFA18Struct UnkBFA18Struct;

typedef struct {
    /* 0x4 */ UnkBFA18Struct **unk4;
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
    /* 0xD4 */ void *unkD4;
};

s32 func_001C01E8(UnkBFA18 *arg0, s32 arg1, s32 arg2) {
    if (arg2 != 0) {
        arg0->unk58 = 0;
        arg0->unk5C = 0;
        arg0->unk68 = 0;
    }
    if (arg0->unk4[arg1]->unkD4 == 0) {
        s32 temp;
        temp = arg0->unk5C + 1;
        arg0->unk5C = temp;
        if (temp >= 0x15) {
            arg0->unk5C = 0x14;
        }
        arg0->unk58 = 0;
    } else {
        s32 temp;
        temp = arg0->unk58 + 1;
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

s32 func_001C0158(UnkBFA18 *arg0, s32 arg1) {
    arg0->unk6C = 0;
    if (arg1 == -2) {
        return (s32)arg0->unk20;
    }
    if (arg1 < -1) {
        if (arg1 == -3) {
            return (s32)arg0->unk24;
        }
    } else if (arg1 == -1) {
        arg0->unk6C = 1;
        return (s32)arg0->unk1C;
    }
    if (arg1 < 0) {
        return 0;
    }
    {
        u8 *base = (u8 *)arg0->unk4;
        u32 count = ((u32)arg0->unk8 - (u32)base) >> 2;
        if ((u32)arg1 >= count) {
            return 0;
        }
        return *(s32 *)(base + arg1 * 4);
    }
}
