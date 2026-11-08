extern void *func_002BF428(void *, const char *);
extern void func_002BF070(void *, u32);
extern void func_002BF098(void *, s32);
extern void func_003F9698(const char *, const char *, u16, s32, s32, s32, s32);

extern const char D_004805D8[];
extern const char D_004805E0[];
extern const char D_004807F8[];
extern const char D_00480810[];
extern void *D_004808E8;
extern void *D_00480898;
extern void *D_00480830;
extern s32 D_00428CDC;

typedef struct S_D_00428CE0 {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
    void *unk_0C;
    s32 unk_10;
    void *unk_14;
    s32 unk_18;
    s32 unk_1C;
    s32 unk_20;
    s32 unk_24;
    s32 unk_28;
    s32 unk_2C;
} S_D_00428CE0;

extern S_D_00428CE0 D_00428CE0;
extern char D_00496948[];

void *func_002BDD48(S_D_00428CE0 *p) {
    func_002BF428(p, D_004805D8);
    p->unk_24 = 0;
    p->unk_0C = &D_004808E8;
    p->unk_28 = 0;
    p->unk_20 = 0;
    return p;
}

void *func_002BDDC0(S_D_00428CE0 *p) {
    func_002BF428(p, D_004805E0);
    p->unk_20 = 0;
    p->unk_0C = &D_00480898;
    p->unk_28 = 0;
    p->unk_2C = 0;
    p->unk_24 = 0;
    return p;
}

void func_002BDCA0(s32 arg0, u32 arg1) {
    if (arg1 == 0xFFFFU) {
        if (arg0 != 0) {
            *(u32 *)(D_00496948 + 0x00) = 0;
            *(u32 *)(D_00496948 + 0x04) = 0x186A0;
            *(u32 *)(D_00496948 + 0x08) = 0x258;
            *(u32 *)(D_00496948 + 0x0C) = 0;
            *(u32 *)(D_00496948 + 0x10) = 0;
            *(u32 *)(D_00496948 + 0x14) = 0;
            *(u32 *)(D_00496948 + 0x18) = 0;
            func_002BF070(&D_00428CE0, 0x186A0);
            D_00428CE0.unk_0C = &D_00480830;
            return;
        }
        func_002BF098(&D_00428CE0, 2);
        return;
    }
}

typedef struct {
    u32 pad[4];
    s32 unk_10;
    s32 unk_14;
} S_BDB88;

void func_002BDB88(S_BDB88 *p) {
    p->unk_14 = 0;
    if (p->unk_10 == 0) {
        s32 val = 0;
        s32 i = 3;
        do {
            if (0x83 == 0) {
                /* should not happen */
            }
            val = (val + 3) % 131;
            p->unk_14 = val;
        } while (p->unk_10 == 0);
    }
}

s32 func_002BDB40(void) {
    s32 cnt = 0x31;
    s32 v = D_00428CDC;
    do {
        if (0x83 == 0) {
            /* break */
        }
        cnt--;
        v = (v + 3) % 131;
        D_00428CDC = v;
    } while (cnt >= 0);
    return D_00428CDC;
}

typedef struct {
    u8 pad[0xC];
    u16 unk_C;
    u32 unk_10;
    u32 unk_14;
    u32 unk_18;
    u32 unk_1C;
} S_BDAE0;

void func_002BDAE0(const char *arg1, S_BDAE0 *arg2) {
    const char *fmt = D_004807F8;
    const char *s = arg1;
    if (s == 0) {
        s = D_00480810;
    }
    func_003F9698(fmt, s, arg2->unk_C, arg2->unk_10, arg2->unk_14, arg2->unk_18, arg2->unk_1C);
}
