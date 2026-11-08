extern void *func_002C2100(void *arg0, s32 arg1);
extern void func_003E7FE8(f32 *arg0);
extern void func_003E8150(f32 *arg0);
extern s32 D_00428F0C;
extern s32 D_00428F20;
extern f32 D_00496980;

typedef struct {
    char pad[0x10];
    f32 unk10;
} S_002C2488_arg2;

s32 func_002C2488(void *arg0, s32 unused, S_002C2488_arg2 *arg2)
{
    f32 temp_f20;

    if (D_00428F0C == 0) {
        if (D_00428F20 == 0) {
            func_003E7FE8(&D_00496980);
            D_00428F20 = 1;
        }
        func_003E8150(&D_00496980);
        temp_f20 = D_00496980 + arg2->unk10;
        if (D_00496980 < temp_f20) {
            do {
                func_002C2100(arg0, 0);
                func_003E8150(&D_00496980);
            } while (D_00496980 < temp_f20);
        }
    }
    return 1;
}

extern void func_002C1C58(void *arg0);
extern void func_002C1CC8(void);
extern void *func_002C1EB8(void);
extern void func_003F9698(char *fmt, ...);
extern s32 D_0043C000;
extern char D_00481368[];
extern char D_00481398[];
extern char D_004813D8[];
extern char D_004813E8[];
extern char D_004813F8[];

void *func_002C1E40(u32 arg0, char *arg1)
{
    void *temp_2;

    temp_2 = func_002C1EB8();
    if (temp_2 == 0) {
        func_003F9698(D_00481368, arg0, arg1);
    } else {
        func_003F9698(D_00481398, arg0 >> 10, arg1);
    }
    return temp_2;
}

s32 func_002C1F28(void *arg0)
{
    s32 temp_18;
    s32 temp_2;

    temp_18 = D_0043C000;
    D_0043C000 = 1;
    func_002C1CC8();
    temp_2 = (s32)func_002C1E40(0x91768, D_004813D8);
    *(s32 *)((char *)arg0 + 4) = 0x91768;
    *(s32 *)((char *)arg0 + 0) = temp_2;
    *(s32 *)((char *)arg0 + 8) = (s32)func_002C1E40(0x80000, D_004813E8);
    *(s32 *)((char *)arg0 + 0xC) = (s32)func_002C1E40(0x30000, D_004813F8);
    *(s32 *)((char *)arg0 + 0x10) = 0x30000;
    D_0043C000 = temp_18;
    func_002C1C58(arg0);
    return 0;
}

typedef struct S_003D5DA0_inner {
    s32 unk0;       /* +0x00 / arg0+0x08 */
    s32 unk4;       /* +0x04 / arg0+0x0C */
    s32 unk8;       /* +0x08 / arg0+0x10 */
    s32 unkC;       /* +0x0C / arg0+0x14 */
    s64 unk10;      /* +0x10 / arg0+0x18 */
    u16 unk18;      /* +0x18 / arg0+0x20 */
    u8  unk1A;      /* +0x1A / arg0+0x22 */
    u8  unk1B;      /* +0x1B / arg0+0x23 */
    s32 unk1C;      /* +0x1C / arg0+0x24 */
    s32 unk20;      /* +0x20 / arg0+0x28 */
    void *unk28;    /* +0x28 / arg0+0x30 */
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
    S_003D5DA0_inner *p2;
    S_003D5DA0_inner *p6;

    if (arg1 != 0) {
        p2 = (S_003D5DA0_inner *)((u8 *)arg0 + 8);
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
        u64 sp[2];
        sp[0] = *(u64 *)((u8 *)D_00488F48 + 0);
        sp[1] = *(u64 *)((u8 *)D_00488F48 + 8);
        *(u16 *)((u8 *)sp + 8) = *(u16 *)((u8 *)D_00488F48 + 8) + (u16)((u32)arg0 - ((u32)p6 - 8));
        p6->unk28 = sp;
    }

    arg0->unk4 = 0;
    return arg0;
}
