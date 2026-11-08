extern s32 iSignalSema_2(s32 sema, void *arg, s32 unk, s32 unk2);
extern u32 D_00441110;
extern u32 D_0049DC20;
extern u8 D_0049DC28[];

s32 func_00403F58(u8 arg0) {
    if (arg0 >= 0x80) {
        return -1;
    }
    if (D_00441110 == 0) {
        return -1;
    }
    u8 *base = D_0049DC28;
    s32 idx = (*(s32 *)(base + 4)) & 0x1FF;
    u8 *p = base + (idx * 2);
    *(s32 *)(base + 4) = idx + 1;
    p[8] = 1;
    p[9] = arg0;
    iSignalSema_2(D_0049DC20, p, idx * 2, 1);
    return (s32)arg0;
}

extern u8 D_0049E040[];

s32 func_00404070(s32 arg0) {
    u8 *p = D_0049E040;
    u8 *q = p + 0x10;
    *(s32 *)p = arg0;
    *(s32 *)(p + 4) = 0;
    *(u32 *)(p + 8) = (u32)q;
    *(u32 *)(p + 0xC) = (u32)q;
    return (s32)(u32)p;
}

typedef struct {
    s32 unk0;
    s32 unk4;
    u32 unk8;
    u32 unkC;
} unk40_t;

void func_00404098(unk40_t *arg0) {
    u32 *p = (u32 *)arg0;
    p[1] = p[1] + 1;
    p[3] = p[3] + 1;
    if (p[3] == (u32)arg0 + p[0] + 0x10) {
        p[3] = (u32)arg0 + 0x10;
    }
}

void func_004040D8(unk40_t *arg0) {
    u32 *p = (u32 *)arg0;
    p[1] = p[1] - 1;
    p[2] = p[2] + 1;
    if (p[2] == (u32)arg0 + p[0] + 0x10) {
        p[2] = (u32)arg0 + 0x10;
    }
}
