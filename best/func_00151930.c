
extern void *func_002B1FC0(int);
extern void *func_003D2910(int);
extern void *func_00152D28(int);
extern void func_003F931C(void *, void *, int);
extern u32 D_0040E618[];

s32 func_00151930(void *arg0) {
    u32 cap;
    char *buf;
    u32 n;
    u32 sz;
    u32 *p;

    cap = 0x10;
    n = *(u32 *)arg0 + 1;
    if (n > 0x10) {
        cap = 0x20;
        while (cap < n) {
            cap <<= 1;
        }
    }
    sz = cap + 0x10;
    if (sz != 0) {
        buf = (char *)func_002B1FC0(sz);
        if (buf == NULL) {
            buf = (char *)func_003D2910(sz);
        }
    } else {
        p = (u32 *)D_0040E618[-1];
        if (p != NULL) {
            D_0040E618[-1] = *p;
            buf = (char *)p;
        } else {
            buf = (char *)func_00152D28(0);
        }
    }
    *(s32 *)(buf + 4) = cap;
    *(s32 *)(buf + 8) = 1;
    *(s32 *)(buf + 0xC) = 0;
    if (*(s32 *)arg0 != 0) {
        func_003F931C(buf + 0x10, (char *)arg0 + 0x10, *(s32 *)arg0);
    }
    *(s32 *)buf = *(s32 *)arg0;
    return (s32)(buf + 0x10);
}
