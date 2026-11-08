void func_00102D80(char *self, s32 arg1) {
    char *vt = *(char **)(self + 8);
    void (*fn)(void *, s32) = *(void (**)(void *, s32))(vt + 0x34);
    fn(self + *(s16 *)(vt + 0x30), arg1);
}
