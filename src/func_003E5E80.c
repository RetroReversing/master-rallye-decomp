void func_003E5C20(void *arg0) {
    int *p = (int *)arg0;
    p[0xE8 / 4] = 0;
    p[0x854 / 4] = 1;
    p[0x84C / 4] = p[0x850 / 4] + 1;
    func_003E5438(arg0, 1);
    func_003E5438(arg0, 5);
    func_003E5438(arg0, 6);
    func_003E5438(arg0, 1);
    func_003E5438(arg0, 6);
    func_003E5438(arg0, 6);
    p[0x1A4 / 4] = func_003E5438(arg0, 1);
    p[0x1A8 / 4] = func_003E5438(arg0, 1);
    return func_003E5848(arg0);
}

extern int func_003E5438(void *arg0, int arg1);

void func_003E5E80(void *arg0) {
    func_003E5438(arg0, 1);
    func_003E5438(arg0, 8);
    func_003E5438(arg0, 1);
    func_003E5438(arg0, 7);
    func_003E5438(arg0, 1);
    func_003E5438(arg0, 0x14);
    func_003E5438(arg0, 1);
    func_003E5438(arg0, 0x16);
    func_003E5438(arg0, 1);
    return func_003E5438(arg0, 0x16);
}
