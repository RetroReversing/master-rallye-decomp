extern void func_003AD968(void *a0, void *a1);
extern void func_003AD9C8(void *a0, void *a1, void *a2, void *a3);

void func_003A6B70(void *arg0, void *arg1) {
    char sp[0x20];
    char *p;
    char *fp;

    fp = sp;
    p = fp + 0x10;
    func_003AD968(p, arg0);
    func_003AD9C8(fp, arg0, p, arg1);
}
