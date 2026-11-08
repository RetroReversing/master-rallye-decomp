extern s32 func_00114160(void *, s32);
extern s32 func_001E4280(void);
extern s32 func_001E3EC0(s32, void *, s32);

void func_001141F0(void *arg0) {
    func_00114160(arg0, 0);
    func_001E3EC0(func_001E4280(), (char *)arg0 + 0x40, *(s32 *)((char *)arg0 + 0x28));
}
