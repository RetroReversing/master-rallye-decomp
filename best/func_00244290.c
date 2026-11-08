extern void *func_00237778(void *arg0);
extern int func_00233D98(void *arg0, void *arg1);
extern int func_0023FBB0(int arg0, void *arg1);

int func_001D3920(void *arg0) {
    int *p = *(int **)((char *)arg0 + 4);
    int v = 0;
    if (p != (int *)arg0) {
        if (p != (int *)arg0) {
            v = *p;
        }
    }
    return v;
}

void func_00244058(void *arg0, void *arg1) {
    float sp[3];
    int *obj = *(int **)arg0;
    int (*func)(void *, float *);

    sp[0] = *(float *)((char *)arg1 + 0);
    sp[1] = *(float *)((char *)arg1 + 4);
    sp[2] = *(float *)((char *)arg1 + 8);
    func = *(int (**)(void *, float *))((char *)obj + 0x34);
    func((char *)arg0 + *(short *)((char *)obj + 0x30), sp);
}

int func_002440A0(void *arg0) {
    if (*(int *)((char *)arg0 + 0x18) == 0) {
        return 0;
    }
    if (*(int *)((char *)arg0 + 0x1C) == 0) {
        return 0;
    }
    return (int)func_00237778(arg0);
}

int func_00244290(void *arg0, void *arg1) {
    float sp[3];

    sp[0] = *(float *)((char *)arg1 + 0);
    sp[1] = *(float *)((char *)arg1 + 4);
    sp[2] = *(float *)((char *)arg1 + 8);
    if (func_00233D98(*(void **)((char *)arg0 + 8), sp) == 0) {
        return 0;
    }
    if (func_0023FBB0(*(int *)arg0, sp) != 0) {
        return 1;
    }
    return 0;
}
