extern s32 func_003D35C0(u32);
extern s32 func_003D4D70(u32);

typedef struct {
    void *unk0;
    s32 unk4;
} S_003D6208;

s32 func_003D6208(S_003D6208 *arg0) {
    void *p;
    s32 ret = 0;

    p = arg0->unk0;
    if (*(u8 *)(p + 0x1A) == 0) {
        if (p != NULL && ((S_003D6208 *)p)->unk4 != 0) {
            func_003D4D70(((S_003D6208 *)p)->unk4);
            ret = 1;
        } else {
            ret = 1;
        }
    }
    return ret;
}

typedef struct {
    void *unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
    s64 unk10;
    u16 unk18;
    u8 unk1A;
    u8 unk1B;
    s32 unk1C;
    s32 unk20;
    void *unk28;
} S_003D6248;

extern u8 D_00489120[];
extern u8 D_00488F58[];

void *func_003D6248(S_003D6248 *arg0, s32 arg1) {
    S_003D6248 *p2;
    S_003D6248 *p6;

    if (arg1 != 0) {
        p2 = (S_003D6248 *)((u8 *)arg0 + 8);
        arg0->unk0 = p2;
        p2->unk1A = 4;
        p2->unk1B = 0;
        p2->unk28 = D_00489120;
        p2->unk18 = 0x20;
        p2->unk10 = 0x11;
        p2->unk1C = 6;
        p2->unk20 = 0;
        arg0->unk8 = 0;
        p2->unk4 = 0;
        p2->unk8 = 0;
    }

    p6 = arg0->unk0;
    p6->unk28 = D_00488F58;
    if (arg1 == 0) {
        u8 *tbl = D_00488F58;
        u64 d0 = *(u64 *)(tbl + 0);
        u64 d1 = *(u64 *)(tbl + 8);
        u8 *t = (u8 *)p6 - 8;
        u32 diff = (u32)arg0 - (u32)t;
        u16 v = *(u16 *)(tbl + 8) + (u16)diff;
        u64 sp[2];
        sp[0] = d0;
        sp[1] = d1;
        *(u16 *)((u8 *)sp + 8) = v;
        p6->unk28 = sp;
    }

    return arg0;
}

s32 func_003D58A8(u32 a) {
    return func_003D35C0(a);
}
