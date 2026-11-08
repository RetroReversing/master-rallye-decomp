extern u32 D_00436178[];
extern u8 D_00488C08[];
void func_003FA8A4(unsigned char *);

void func_003CA648(u32 arg0, unsigned char *arg1) {
    if (arg0 < 4) {
        func_003FA8A4(arg1);
        return;
    }
    *arg1 = D_00488C08[arg0 - 4];
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
