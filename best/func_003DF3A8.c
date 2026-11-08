s64 func_003DBBB8(s64 arg0, s32 arg1) {
    s32 hi = (s32)(arg0 >> 32);
    s32 t = (hi & 0x7FF00000) + 0xFCC00000;
    if (t > 0) {
        return (s64)t << 32;
    }
    s32 nt = -t;
    s32 e = nt >> 20;
    if (e < 0x14) {
        s32 m = 0x80000 >> e;
        return (s64)m << 32;
    }
    s32 e2 = e - 0x14;
    s32 var2 = 1;
    if (e2 < 0x1F) {
        var2 = 1 << (0x1F - e2);
    }
    return ((s64)(arg1 & 0xFFFF0000)) | ((s64)var2 << 32);
}

extern s32 func_003DE6B8(s32, s32);
extern s32 func_003F74F8(void *);

s32 func_003DF3A8(void *arg0) {
    s32 start = *(s32 *)((u8 *)arg0 + 0x10);
    s32 end = *(s32 *)((u8 *)arg0 + 0x14);
    if (func_003DE6B8(start, end - start) != 0) {
        return -1;
    }
    if (*(s32 *)arg0 & 8) {
        return 0;
    }
    if (func_003F74F8(*(void **)((u8 *)arg0 + 0x58)) == 0) {
        return 0;
    }
    return -1;
}

extern s32 func_003DAB78(void);
extern s32 func_003F74F8(void *);

s32 func_003DF408(void *arg0, s32 arg1) {
    s32 res = func_003DAB78();
    if (res == -1) {
        return -1;
    }
    if (arg1 == -1) {
        res = func_003F74F8(*(void **)((u8 *)arg0 + 0x58));
    } else {
        res = arg1;
    }
    return res;
}

extern s32 func_003D6C10(void);
extern s32 func_003F83E8(u8 *, s32, s32, void *);

s32 func_003DF458(void *arg0, u8 *arg1, s32 arg2) {
    if ((*(s32 *)arg0 & 2) == 0) {
        return func_003D6C10();
    }
    return func_003F83E8(arg1, 1, arg2, *(void **)((u8 *)arg0 + 0x58));
}
