typedef struct { char b[8]; } U64B;

s32 func_002AFEB8(s32 arg0, s32 arg1);
void *func_0039C6C8(void *arg0, void *arg1);
void *func_003A55E8(void *arg0, void *arg1);
s32 func_0039C430(void *arg0);
s32 func_0039C468(void *arg0, s32 arg1);

void *func_0039C740(void *arg0, void *arg1) {
    void *r;
    void *a0 = arg0;
    void *a1 = arg1;

    r = (void *)func_002AFEB8(0xC, (s32)a0);
    if (r != 0) {
        r = func_0039C6C8(r, a1);
    }
    return r;
}

void *func_0039C6C8(void *arg0, void *arg1) {
    func_003A55E8(arg0, arg1);
    *(U64B *)((char *)arg0 + 4) = *(U64B *)((char *)arg1 + 4);
    return arg0;
}

s32 func_0039C4A0(void *arg0) {
    char local;
    s32 r;

    local = 0;
    r = func_0039C468(&local, func_0039C430(arg0));
    return r;
}
