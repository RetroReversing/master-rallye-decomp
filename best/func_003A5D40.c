void func_003AB9F8(void *arg0, int arg1);
void func_003B0AB8(void *arg0, int arg1);
void D_002AD390(void *arg0);

void func_003A5D40(void *arg0, int arg1) {
    volatile int pad[2];
    void *self = arg0;
    int flags = arg1;
    (void)pad;
    func_003AB9F8((char *)self + 0xC, 2);
    func_003B0AB8(self, 2);
    if (flags & 1) {
        D_002AD390(self);
    }
}
