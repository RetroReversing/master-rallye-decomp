extern void func_001D6588(void *arg0);

s32 func_001D65A0(void *arg0) {
    s32 ret = *(s32 *)((char *)arg0 + 4);
    func_001D6588(arg0);
    return ret;
}
