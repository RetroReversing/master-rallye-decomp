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

extern s32 func_003F78B0(u8 *, s32, s32, void *);
extern u8 func_003F9E30(void *);

s32 func_003DF260(void *arg0, u8 *arg1, s32 arg2) {
    if (arg2 == 1) {
        void *p = *(void **)((u8 *)arg0 + 0x58);
        s32 cnt = *(s32 *)((u8 *)p + 4) - 1;
        *(s32 *)((u8 *)p + 4) = cnt;
        s32 c;
        if (cnt < 0) {
            c = func_003F9E30(p);
        } else {
            u8 *buf = *(u8 **)((u8 *)p + 0);
            c = *buf;
            *(u8 **)((u8 *)p + 0) = buf + 1;
        }
        if (c == -1) {
            return 0;
        }
        *arg1 = (u8)c;
        return 1;
    }
    void *p = *(void **)((u8 *)arg0 + 0x58);
    return func_003F78B0(arg1, 1, arg2, p);
}

extern s32 func_003F83E8(u8 *, s32, s32, void *);

s32 func_003DF2F8(void *arg0, u8 *arg1, s32 arg2) {
    s64 pos = *(s64 *)((u8 *)arg0 + 0x40);
    s32 res = func_003F83E8(arg1, 1, arg2, *(void **)((u8 *)arg0 + 0x58));
    if (pos >= 0) {
        *(s64 *)((u8 *)arg0 + 0x40) = pos + arg2;
    }
    return res;
}

extern s32 func_003F7E60(void *);

void func_003DF358(void *arg0) {
    func_003F7E60(*(void **)((u8 *)arg0 + 0x58));
}
