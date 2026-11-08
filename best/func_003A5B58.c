void func_003AFCE0(void *);
void func_003AFD70(void *, void *);
void func_003AFDD0(void *, s32);

void *func_003A5B58(void *arg0) {
    char buf[16];
    func_003AFCE0(buf);
    func_003AFD70(arg0, buf);
    func_003AFDD0(buf, 2);
    return arg0;
}
