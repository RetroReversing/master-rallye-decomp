extern s32 D_0043C3B0[];

void func_003F0B30(s32 arg0, s32 arg1, s32 arg2) {
    volatile s32 *p = D_0043C3B0;
    p[1] = arg1;
    p[2] = arg2;
    p[3] = arg0;
}

typedef struct {
    u8 b0, b1, b2, b3;
    u8 d0, d1, d2, d3; /* 4..7 */
} S_002BFCA0_inner;

s32 func_002BFCA0(void *arg0, u32 arg1) {
    S_002BFCA0_inner *p = *(S_002BFCA0_inner **)((char *)arg0 + 0x14);
    u16 idx = (u16)arg1;
    u32 count = (u32)p->b3;
    s32 ret = 0;
    count = (count << 8) | p->b2;
    count &= 0xFFFF;
    if ((u32)idx < count) {
        u32 base;
        base = ((u32)p->d3 << 24) | ((u32)p->d2 << 16) | ((u32)p->d1 << 8) | (u32)p->d0;
        ret = (s32)(base + ((u32)idx << 4));
    }
    return ret;
}

extern s32 func_002BFE18(void *);

typedef struct { unsigned char b[8]; } __attribute__((packed)) U8_8;

s32 func_002BFB80(void *arg0, void *arg1, s32 arg2) {
    *(U8_8 *)((char *)arg0 + 4) = *(U8_8 *)arg1;
    *(s32 *)((char *)arg0 + 0xC) = arg2;
    *(s32 *)arg0 = func_002BFE18(arg0);
    return *(s32 *)arg0;
}

extern s32 func_002BFBD8(void);

s32 func_002BFAA8(void *arg0) {
    s32 tmp = func_002BFBD8();
    s32 ret = 0;
    if (tmp != 0) {
        char *p = *(char **)((char *)arg0 + 0x24);
        s16 adj = *(s16 *)(p + 0x10);
        s32 (*fn)(void *, s32) = *(s32 (**)(void *, s32))(p + 0x14);
        ret = fn((char *)arg0 + adj, tmp);
    }
    return ret;
}
