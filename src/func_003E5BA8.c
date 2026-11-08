void func_003D7B00(void *arg0, unsigned int arg1) {
    if (!*(int *)arg0) {
        arg1 |= 4;
    }
    *(unsigned char *)((char *)arg0 + 0x1A) = arg1;
}

void func_003E5BA8(void *arg0, int arg1) {
    int var_7 = 0;
    int var_4 = 0;
    int *p = (int *)arg0;
    if (p[0x150 / 4] != 3 && arg1 != 0) {
        if (arg1 < 0) {
            var_7 = p[0x854 / 4] == 0 ? 1 : 0;
        }
        p[0x854 / 4] = 0;
        var_4 = arg1;
    }
    int temp = p[0x84C / 4] + arg1;
    p[0x1AC / 4] = temp;
    if (var_7 != 0 && var_4 >= arg1) {
        p[0x1AC / 4] = temp + 0x400;
    }
    int t2 = p[0x850 / 4];
    int t4 = p[0x1AC / 4];
    if (t4 > t2) {
        t2 = t4;
    }
    p[0x850 / 4] = t2;
}

extern int func_003E5438(void *arg0, int arg1);
extern void func_003E5848(void *arg0);

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
    func_003E5848(arg0);
}

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
    func_003E5438(arg0, 0x16);
}
