void func_003A4418(void *arg0, int arg1);
void func_003AD498(void *arg0, int arg1);
void D_002AD390(void *arg0);

void func_003A6550(void *arg0, int arg1) {
    volatile int pad[2];
    void *self = arg0;
    int flags = arg1;
    (void)pad;
    func_003A4418((char *)self + 4, 2);
    func_003AD498(self, 2);
    if (flags & 1) {
        D_002AD390(self);
    }
}
