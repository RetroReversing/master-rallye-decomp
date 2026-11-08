extern s32 func_002BCF08(s32, void *, void *, void *);

void func_002BD218(void *arg0, void *arg1) {
    s32 a = *(s32 *)((char *)arg1 + 0x20);
    func_002BCF08(a, arg0, arg1, arg1);
}
