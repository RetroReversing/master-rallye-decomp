int func_003A0BD8(void *arg0, void *arg1);
int func_00219DA8(void *arg0, void *arg1);

void *func_003A5DC8(void *arg0, void *arg1) {
    void *self = arg0;
    void *src = arg1;
    void *p1 = (char *)self + 0xC;
    void *p2 = (char *)src + 0xC;
    func_003A0BD8(self, src);
    func_00219DA8(p1, p2);
    return self;
}
