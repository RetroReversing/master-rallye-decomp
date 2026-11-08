extern void func_001D4040(void *, const char *);
extern void func_001E3EC0(s32, void *, s32);
extern s32 func_001E4280(void);
extern void func_003FA310(char *, const char *, ...);
extern char D_0044B0C0[];

void func_0013B560(s32 *arg0) {
    char buf[64];
    s32 key[4];
    s32 i = 0;
    s32 *arr = arg0 + 5;

    do {
        s32 idx = arg0[4];
        s32 val = (i - *(s32 *)((char *)arr + (idx << 2))) * 100 + 375;
        func_003FA310(buf, D_0044B0C0, i);
        {
            s32 m = func_001E4280();
            func_001D4040(key, buf);
            func_001E3EC0(m, key, val);
        }
        i++;
    } while (i < 12);
}
