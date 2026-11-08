extern void D_002AD390(void);
extern s32 D_0047D9A8;
extern u16 D_1FF0000[];
extern s32 D_10000;
extern const char D_0047DDE8[];
extern const char D_0047DE20[];
extern const char D_0047DE60[];
extern const char D_0047DEC8[];
extern s32 D_004404E0[];
extern void func_003F9698(const char *, ...);

void func_002AFF20(void **arg0, s32 arg1) {
    s32 t;

    t = arg1 & 1;
    if (t != 0) {
        *arg0 = &D_0047D9A8;
        D_002AD390();
    }
}

s16 func_002B16D8(s32 arg0) {
    return (s16)((D_1FF0000[0] ^ arg0) | (D_1FF0000[1] ^ arg0) |
                 (D_1FF0000[2] ^ arg0) | (D_1FF0000[3] ^ arg0));
}

void func_002B1718(s32 *arg0) {
    s32 *p;
    s32 *base;
    s32 *sp;
    s32 *end;

    base = (s32 *)0x01FF0000;
    sp = (s32 *)&D_10000;
    if (arg0 == *base) {
        for (p = base + 1; arg0 == *p; p++) {
        }
    }
    if ((u32)p >= (u32)sp) {
        func_003F9698(D_0047DDE8, base, arg0, p);
        return;
    }
    if (p == base) {
        func_003F9698(D_0047DE20, base, sp, p);
        return;
    }
    func_003F9698(D_0047DE60, ((s32)sp - (s32)p) >> 10,
                  ((s32)sp - (s32)base) >> 10, p, sp);
}

void func_002B18E8(void) {
    s32 i;
    s32 n;
    s32 *chunk;
    s32 *prev;

    for (i = 2; i < 0x80; i++) {
        n = 0;
        chunk = &D_004404E0[i * 2];
        prev = chunk - 2;
        while (chunk != prev) {
            if (chunk[2] != chunk) {
                func_003F9698(D_0047DEC8, n, i, prev);
                for (;;) {
                }
            }
            chunk = chunk[2];
            n++;
        }
    }
}
