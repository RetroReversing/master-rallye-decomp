extern void func_003B7438(void *, void *, s32);

void func_003B7310(void *arg0, s32 *arg1, s32 arg2) {
    s32 sp0;
    u8 sp4;
    (void)sp0; (void)sp4;
    func_003B7438(arg0, &sp0, arg2);
    func_003B7438(arg0, &sp4, arg2);
    *arg1 = 0;
}
