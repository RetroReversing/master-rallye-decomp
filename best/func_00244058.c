void *func_00237778(void *arg0);
int func_00233D98(void *arg0, void *arg1);
int func_0023FBB0(int arg0, void *arg1);

void func_00244058(void *arg0, float *arg1) {
    float sp[4];
    void **p = (void **)arg0;
    void *obj = *p;
    short offset = *(short *)((char *)obj + 0x30);
    void (*fn)(void *, float *);

    sp[0] = arg1[0];
    sp[1] = arg1[1];
    sp[2] = arg1[2];
    fn = *(void (**)(void *, float *))((char *)obj + 0x34);
    fn((char *)arg0 + offset, sp);
}

void *func_002440A0(void *arg0) {
    void *v = *(void **)((char *)arg0 + 0x18);
    if (v == 0) {
        return 0;
    }
    v = *(void **)((char *)arg0 + 0x1C);
    if (v == 0) {
        return 0;
    }
    return func_00237778(arg0);
}

int func_00244290(void *arg0, float *arg1) {
    float sp[4];
    sp[0] = arg1[0];
    sp[1] = arg1[1];
    sp[2] = arg1[2];
    if (func_00233D98(*(void **)((char *)arg0 + 8), sp) == 0) {
        return 0;
    }
    return (func_0023FBB0(*(int *)arg0, sp) != 0) ? 1 : 0;
}
