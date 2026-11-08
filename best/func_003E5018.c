extern u32 D_00436178[];
extern u8 D_00488C08[];
void func_003FA8A4(unsigned char *);

void func_003CA648(u32 arg0, unsigned char *arg1) {
    if (arg0 >= 4) {
        *arg1 = D_00488C08[0];
        return;
    }
    func_003FA8A4(arg1);
    *(unsigned char **)arg1 = (unsigned char *)D_00436178[arg0];
}

extern char D_0049B9D0[];
extern void *func_003CA3B0(s32, s32);

u8 func_003CA5F8(s32 arg0, s32 arg1) {
    char *base = D_0049B9D0;
    if (*(s32 *)(base + arg0 * 0x70 + arg1 * 0x1C + 0x10)) {
        return *(unsigned char *)((char *)func_003CA3B0(arg0, arg0) + 0x71);
    }
    return 0;
}

void func_003E0EF0(u32);
s64 func_003E5018(void *arg0) {
    s32 cnt = 0;
    s64 res = *(s64 *)0x10002000;
    if (res >= 0) {
        return res;
    }
    if ((*(u32 *)0x10002010 & 0x4000) != 0) {
        return res;
    }
    while (1) {
        if (cnt >= 0x1389) {
            func_003E0EF0(*(u32 *)((char *)arg0 + 0x858));
            cnt = 0;
        }
        cnt++;
        res = *(s64 *)0x10002000;
        if (res >= 0) break;
        if ((*(u32 *)0x10002010 & 0x4000)) break;
    }
    return res;
}
