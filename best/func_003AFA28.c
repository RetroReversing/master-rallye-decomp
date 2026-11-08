extern s32 func_0039CF60(s32, s32, void*, s32);
extern s32 func_003A9098(void*, s32);
extern s32 func_003A55E8(s32, s32);

s32 func_003AFA28(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    char buf[16];
    func_003A9098(buf, arg2);
    func_0039CF60(arg0, arg1, buf, arg3);
    return arg0;
}

s32 func_003AF9A8(s32 arg0, s32 arg1, s32 arg2) {
    func_003A55E8(arg0, arg1);
    *(volatile s64*)(arg0 + 4) = *(volatile s64*)arg2;
    return arg0;
}
