extern void func_001E2460(void *, s32);
extern void func_001E2A48(void *, const char *, void *);
extern void func_001E2510(void *, const char *, void *);
extern char D_00446938[];
extern char D_00446948[];
extern char D_00446958[];

void func_00115560(void *arg0, s32 arg1, s32 arg2) {
    char buf[0x10];
    func_001E2460(buf, arg2);
    func_001E2A48(buf, D_00446938, (char *)arg0 + 0x10);
    func_001E2A48(buf, D_00446948, (char *)arg0 + 0x1C);
    func_001E2510(buf, D_00446958, (char *)arg0 + 0x28);
}
