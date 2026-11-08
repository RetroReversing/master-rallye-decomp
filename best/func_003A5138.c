extern void func_003A4AB8(void *arg0, void *arg1);

void *func_003A5138(void *arg0, void *arg1) {
    void *s0 = arg0;
    void *s1 = arg1;
    func_003A4AB8((char *)s0 + 0x20, s1);
    return s0;
}

void *func_003A5088(void *arg0) {
    char *v = (char *)arg0;
    return v + 0x2C;
}
