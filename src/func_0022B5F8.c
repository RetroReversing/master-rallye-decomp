extern void func_0022ABB0(void *, void *, void *, void *);

void func_0022B5F8(void *arg0, void *arg1, void *arg2) {
    s32 count;
    s32 base;
    s32 i;
    s32 offA;
    s32 offB;
    s32 offC;
    s32 diff;
    s32 tmp;

    diff = *(s32 *)((u8 *)arg2 + 4) - *(s32 *)arg2;
    tmp = ((s32)(diff * (s32)0xAAAAAAAB)) >> 2;
    count = tmp / 3;
    if (count > 0) {
        offC = 0x18;
        offB = 0xC;
        offA = 0;
        i = count;
        do {
            base = *(s32 *)arg2;
            i--;
            func_0022ABB0(arg1, (void *)(base + offA), (void *)(base + offB), (void *)(base + offC));
            offC += 0x24;
            offB += 0x24;
            offA += 0x24;
        } while (i != 0);
    }
}
