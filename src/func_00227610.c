extern void func_00229658(void *, int);
extern int func_00229A48(void *, void *);
extern void *func_003F93CC(void *, void *, unsigned int);
extern int func_00229988(void *, void *, int);
extern void func_00226D78(void *, void *);
extern void *func_00229328(void *, void *);
extern void *D_002AD408(int);

s32 func_001D3920(void *arg0) {
    s32 *v;
    s32 ret;

    v = *(s32 **)((u8 *)arg0 + 4);
    ret = 0;
    if (v != (s32 *)arg0) {
        ret = *v;
    }
    return ret;
}

typedef struct Vec {
    void **begin;
    void **end;
} Vec;

void func_002272D8(void *arg0, void *arg1) {
    Vec *v = (Vec *)arg0;
    void **cur = v->begin;
    while (cur != v->end) {
        void *elem = *cur;
        if (func_00229A48(elem, arg1) != 0) {
            void **next = cur + 1;
            if (next != v->end) {
                func_003F93CC(cur, next, (unsigned int)((char *)v->end - (char *)next));
            }
            v->end--;
            if (elem != 0) {
                func_00229658(elem, 3);
            }
        } else {
            cur++;
        }
    }
}

int func_002274D0(void *arg0, void *arg1, void *arg2, int *arg3) {
    int r1;
    int r2;

    r1 = func_00229988(arg2, arg1, -1);
    r2 = func_00229988(arg2, arg0, 1);
    if (r1 != 0) {
        if (r2 != 0) {
            return 1;
        }
        *arg3 = -1;
        return 0;
    }
    if (r2 == 0) {
        return 0;
    }
    *arg3 = 1;
    return 0;
}

void func_00227610(void *arg0, void *arg1, int arg2, void *arg3, void *arg4) {
    void *obj;

    obj = func_00229328(D_002AD408(0x1C), arg1);
    if (arg2 == -1) {
        func_00226D78(arg3, obj);
        return;
    }
    func_00226D78(arg4, obj);
}
