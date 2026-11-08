extern void func_003F9698(const char *, ...);
extern const char D_0048A910[];

void func_003EEC60(void *arg0) {
    u32 *p = (u32 *)arg0;
    u32 *next;
    s32 used = 0;
    s32 bad = 0;
    s32 lastFlag = 0;
    do {
        next = (u32 *)((char *)p + p[1]);
        if (next[2] == 0xDEADF00D) {
            used += next[1];
        }
        s32 flag = ((p[0] >> 30) & 1);
        s32 tagBad = ((next[2] ^ 0xDEAFBEEF) == 0) ? 0 : 1;
        s32 tagGood = ((next[2] ^ 0xDEAFBEEF) == 0);
        s32 bit1 = ((p[0] >> 30) >> 1) & 1;
        if (flag != lastFlag) {
            if (p != next) bad = 1;
        }
        if ((p[0] >> 31) != ((next[2] ^ 0xDEAFBEEF) == 0 ? 0 : 0)) { /* dummy */ }
        if (bit1 != tagGood) {
            if (p != next) bad = 1;
        }
        if (p == next) break;
        p = next;
        lastFlag = flag;
    } while (p != next);
    if (bad) {
        /* can't emit break easily in pure C; try to force */ 
    }
    func_003F9698(D_0048A910, used);
}
