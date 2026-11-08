extern void func_00192FD8(void *, s32);
extern void func_001D2900(void *, s32);
extern void func_001D4040(void *, void *);
extern s32 func_001E4280(void);
extern void func_001E3EC0(s32, void *, s32);
extern void func_001E3D10(s32, void *, s32);
extern void func_001E4070(s32, void *, s32);

void func_001935F8(void *arg0, s32 arg1, s32 arg2) {
    s32 tmp;
    char buf[16];

    func_00192FD8(arg0, arg1);
    func_001D2900((char *)arg0 + 0xC, *(s32 *)((char *)arg0 + 0x98));
    tmp = func_001E4280();
    func_001D4040(buf, *(s32 *)((char *)arg0 + 0xC));
    func_001E3EC0(tmp, buf, arg2);
}

void func_00193668(void *arg0, s32 arg1, s32 arg2) {
    s32 tmp;
    char buf[16];

    func_00192FD8(arg0, arg1);
    func_001D2900((char *)arg0 + 0xC, *(s32 *)((char *)arg0 + 0x9C));
    tmp = func_001E4280();
    func_001D4040(buf, *(s32 *)((char *)arg0 + 0xC));
    func_001E3D10(tmp, buf, arg2);
}

void func_001936D8(void *arg0, s32 arg1, s32 arg2) {
    s32 tmp;
    char buf[16];

    func_00192FD8(arg0, arg1);
    func_001D2900((char *)arg0 + 0xC, *(s32 *)((char *)arg0 + 0xA0));
    tmp = func_001E4280();
    func_001D4040(buf, *(s32 *)((char *)arg0 + 0xC));
    func_001E4070(tmp, buf, arg2);
}
