void func_003AF670(void *);
void func_003AF768(void *, void *, void *);
void func_003AF7E8(void *, s32);

void *func_003A9010(void *arg0) {
    char tmp[0x10];
    char sp;

    sp = 0;
    func_003AF670(tmp);
    func_003AF768(arg0, &sp, tmp);
    func_003AF7E8(tmp, 2);
    return arg0;
}

void func_0039BC70(void *, void *, void *);
void *func_003A5A10(void *);
void *func_003A8D70(void *, void *);

void func_003A8DE0(void *arg0, void *arg1) {
    typedef struct {
        s32 unk0;
        char *p4;
        char *p8;
    } S;
    S *s = (S *)arg0;
    char *p4 = s->p4;
    if (p4 != s->p8) {
        func_003A8D70(p4, arg1);
        s->p4 = p4 + 8;
    } else {
        void *t = func_003A5A10(s);
        func_0039BC70(s, t, arg1);
    }
}

void *func_002AFEB8(s32, void *);

void *func_003A8D70(void *arg0, void *arg1) {
    void *p;
    p = func_002AFEB8(8, arg0);
    if (p != 0) {
        *(s64 *)p = *(s64 *)arg1;
    }
    return p;
}
