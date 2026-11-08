extern void func_00192FD8(void);
extern void func_001D2900(void *, s32);
extern void func_001D4040(void *, const char *);
extern void func_001E3850(s32, void *);
extern s32 func_001E3650(s32, void *);
extern s32 func_001E4280(void);

extern s32 D_00425D70;
extern char D_004716C8[];
extern unsigned char D_0048DDD0[24];

void func_001933A0(void *arg0) {
    s32 temp;
    char buf[16];

    func_00192FD8();
    func_001D2900((char *)arg0 + 0xC, *(s32 *)((char *)arg0 + 0xB4));
    temp = func_001E4280();
    func_001D4040(buf, *(const char **)((char *)arg0 + 0xC));
    func_001E3850(temp, buf);
}

s32 func_00193400(void) {
    s32 temp;

    if (D_00425D70 == 0) {
        func_001D4040(D_0048DDD0, D_004716C8);
        D_00425D70 = 1;
    }
    temp = func_001E4280();
    return (func_001E3650(temp, D_0048DDD0) != 0);
}

void func_00193468(void *arg0) {
    s32 temp;
    char buf[16];

    func_00192FD8();
    func_001D2900((char *)arg0 + 0xC, *(s32 *)((char *)arg0 + 0xBC));
    temp = func_001E4280();
    func_001D4040(buf, *(const char **)((char *)arg0 + 0xC));
    func_001E3650(temp, buf);
}
