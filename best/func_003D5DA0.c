typedef struct S_003D5DA0_inner {
    s32 unk0;       /* +0x00 */
    s32 unk4;       /* +0x04 */
    s32 unk8;       /* +0x08 */
    s32 unkC;       /* +0x0C */
    s64 unk10;      /* +0x10 */
    u16 unk18;      /* +0x18 */
    u8  unk1A;      /* +0x1A */
    u8  unk1B;      /* +0x1B */
    s32 unk1C;      /* +0x1C */
    s32 unk20;      /* +0x20 */
    s32 pad24;      /* +0x24 */
    void *unk28;    /* +0x28 */
} S_003D5DA0_inner;

typedef struct S_003D5DA0 {
    S_003D5DA0_inner *unk0; /* +0x00 */
    s32 unk4;                /* +0x04 */
    s32 unk8;                /* +0x08 */
} S_003D5DA0;

extern u8 D_00489120[];
extern u8 D_00488F48[];

S_003D5DA0 *func_003D5DA0(S_003D5DA0 *arg0, s32 arg1)
{
    S_003D5DA0_inner *p6;

    if (arg1 != 0) {
        S_003D5DA0_inner *p2 = (S_003D5DA0_inner *)((u8 *)arg0 + 8);
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
    p6->unk28 = D_00488F48;
    if (arg1 == 0) {
        u8 *tbl = D_00488F48;
        u64 sp0 = *(u64 *)(tbl + 0);
        u64 sp1 = *(u64 *)(tbl + 8);
        u16 v = *(u16 *)(tbl + 8);
        s32 diff = (s32)((u8 *)arg0 - ((u8 *)p6 - 8));
        u64 sp[2];
        sp[0] = sp0;
        sp[1] = sp1;
        *(u16 *)((u8 *)sp + 8) = v + (u16)diff;
        p6->unk28 = sp;
    }

    arg0->unk4 = 0;
    return arg0;
}
