extern void D_002AD390();
extern s32 D_0044DBE0;
extern s32 D_0044DBC8;
extern s32 D_0044DB70;

typedef struct { u8 x[8]; } P8_153B48;

void func_00153B48(P8_153B48 *dst, P8_153B48 *end, P8_153B48 *src) {
    while (dst != end) {
        *dst = *src;
        dst++;
        src++;
    }
}

void func_001593C0(void *arg0, s32 arg1) {
    s32 temp = arg1 & 1;
    *(void **)arg0 = &D_0044DBE0;
    if (temp != 0) {
        D_002AD390();
    }
}

void func_001593F0(void *arg0, s32 arg1) {
    s32 temp = arg1 & 1;
    *(void **)arg0 = &D_0044DBC8;
    if (temp != 0) {
        D_002AD390();
    }
}

void func_00159420(void *arg0, s32 arg1) {
    s32 temp = arg1 & 1;
    *(void **)arg0 = &D_0044DB70;
    if (temp != 0) {
        D_002AD390();
    }
}
