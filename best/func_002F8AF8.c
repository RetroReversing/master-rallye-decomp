extern void func_003F9698(const char *fmt, char *name);
extern char D_00484510[];

void func_002F8AF8(void *arg0) {
    volatile s32 sp0;
    s32 sp10;
    s32 count;

    sp0 = 0;
    count = *(s32 *)((char *)arg0 + 0x30);
    sp10 = count;
    if (count != 0) {
        s32 step = 0x12C;
        do {
            s32 i = sp0;
            char *name;
            sp10 = i;
            name = *(char **)((char *)arg0 + 0x24) + (i * step) + 4;
            func_003F9698(D_00484510, name);
            count = *(s32 *)((char *)arg0 + 0x30);
            sp0 = i + 1;
            sp10 = count;
        } while (sp0 != count);
    }
}
