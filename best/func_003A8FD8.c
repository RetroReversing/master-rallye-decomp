void func_003AF670(void *);
void func_003AF768(void *, void *, void *);
void func_003AF7E8(void *, s32);

void *func_003A9010(void *arg0) {
    struct {
        char b;
        char _pad[0xF];
        char tmp[0x20];
    } s;

    s.b = 0;
    func_003AF670(&s.tmp[0]);
    func_003AF768(arg0, &s.b, &s.tmp[0]);
    func_003AF7E8(&s.tmp[0], 2);
    return arg0;
}

s32 *func_003A9140(s32 *arg0, s32 arg1) {
    s32 * volatile p = arg0;
    volatile s32 v = arg1;
    *p = v;
    return arg0;
}

s32 func_003A8FD8(s32 **arg0) {
    s32 * volatile p = *arg0;
    return (s32)p + 0xC;
}
