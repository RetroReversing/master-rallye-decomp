extern void func_003F9698(const char *fmt, s32 val);
extern char D_004844C8[];

void func_002F77D8(void *arg0) {
    s32 val = *(s32 *)((char *)arg0 + 0x34);
    func_003F9698(D_004844C8, val);
}

extern void func_003F9698(const char *fmt, char *name);
extern char D_00484510[];

void func_002F8AF8(void *arg0) {
    s32 sp0;
    s32 sp10;
    s32 count;

    sp0 = 0;
    count = *(s32 *)((char *)arg0 + 0x30);
    sp10 = count;
    if (count == 0) return;
    {
        s32 step = 0x12C;
        do {
            s32 i = sp0;
            sp10 = i;
            func_003F9698(D_00484510, *(char **)((char *)arg0 + 0x24) + (i * step) + 4);
            count = *(s32 *)((char *)arg0 + 0x30);
            sp0 = i + 1;
            sp10 = count;
        } while (sp0 != count);
    }
}

extern s32 func_003FA760(char *name, void *arg2);

void *func_002F8A38(void *arg0, void *arg1, void *arg2) {
    s32 sp0;
    s32 sp10;
    s32 sp20;
    s32 count;

    sp0 = 0;
    count = *(s32 *)((char *)arg1 + 0x30);
    sp10 = count;
    if (count != 0) {
        s32 step = 0x12C;
        do {
            s32 i = sp0;
            sp10 = i;
            if (func_003FA760(*(char **)((char *)arg1 + 0x24) + (i * step) + 4, arg2) == 0) {
                sp20 = i;
                *(s32 *)arg0 = *(s32 *)(*(char **)((char *)arg1 + 0xC) + (i * 4));
                sp10 = *(s32 *)arg0;
                return arg0;
            }
            count = *(s32 *)((char *)arg1 + 0x30);
            sp0 = i + 1;
            sp10 = count;
        } while (sp0 != count);
    }
    *(s32 *)arg0 = *(s32 *)((char *)arg1 + 0x58);
    return arg0;
}
