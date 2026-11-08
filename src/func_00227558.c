extern void func_0022A998(s32);
extern s32 func_0022A150(s32);
extern void func_0026FA80(void *, s32 *, s32 *);
extern void *D_002AD408(u32);
extern void *func_00229580(void *, void *);
extern void func_00226D78(void *, void *);
extern void func_00229D58(void *, void *, void *, void *);

typedef struct {
    s32 *begin;
    s32 *end;
} VecI;

typedef struct {
    s32 *begin;
    s32 *end;
    s32 *cap;
} VecP;

void func_0016D178(void *arg0, f32 *arg1) {
    *arg1 = *(f32 *)((u8 *)arg0 + 0x30) * 2.5f;
}

void func_00226AE8(VecI *v) {
    s32 n = (s32)(v->end - v->begin);
    s32 i = 0;
    if (n > 0) {
        do {
            s32 j = i + 1;
            func_0022A998(*(s32 *)((u8 *)v->begin + i * 4));
            i = j;
            while (i < n) {
                func_0022A998(*(s32 *)((u8 *)v->begin + i * 4));
                i++;
            }
            i = j;
        } while (i < n);
    }
}

void func_00226B88(VecP *v, s32 val) {
    s32 sp = val;
    if (func_0022A150(val)) {
        s32 *end = v->end;
        if (end == v->cap) {
            func_0026FA80(v, end, &sp);
        } else {
            if (end)
                *end = sp;
            v->end = end + 1;
        }
    }
}

void func_00227558(void *arg0, void *arg1, void *arg2, void *arg3, void *arg4) {
    void *tmp1;
    void *tmp2;
    void *p = (void *)((u8 *)arg2 + 8);

    tmp1 = func_00229580(D_002AD408(0x1C), p);
    func_00226D78(arg3, tmp1);
    tmp2 = func_00229580(D_002AD408(0x1C), p);
    func_00226D78(arg4, tmp2);
    func_00229D58(arg2, arg1, tmp1, tmp2);
}
