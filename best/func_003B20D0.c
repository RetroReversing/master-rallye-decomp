extern void func_003A6BE0(void *);
extern void func_003A6C08(void *, void *);
extern void func_003AD930(void *, void *);

void *func_003B20D0(void *arg0, void *arg1, void **arg2) {
    void *node;
    void *sp[2];

    node = *arg2;
    sp[0] = *(void **)node;
    sp[1] = *(void **)((u8 *)node + 4);
    *(void **)sp[1] = sp[0];
    *(void **)((u8 *)sp[0] + 4) = sp[1];
    func_003A6BE0((u8 *)node + 8);
    func_003A6C08(arg1, node);
    func_003AD930(arg0, sp[0]);
    return arg0;
}
