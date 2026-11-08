extern void func_003A4A10(void *);
extern void func_003B0268(void *, s32, void *);

void func_003A9CE8(void *arg0, s32 arg1) {
    char sp[0x10];
    func_003A4A10(sp);
    func_003B0268(arg0, arg1, sp);
}
