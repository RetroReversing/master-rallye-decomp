extern void func_002296D0(void *);
extern void func_00229658(void *, int);
extern int func_00229A48(void *, void *);
extern void *func_003F93CC(void *, void *, unsigned int);
extern int func_00229988(void *, void *, int);

int func_001D3920(void *arg0) {
    int *v = *(int **)((char *)arg0 + 4);
    int ret = 0;
    if (v != (int *)arg0) {
        if (v != (int *)arg0) {
            ret = *v;
        }
    }
    return ret;
}

typedef struct Vec {
    void **begin;
    void **end;
} Vec;

void func_00226DC0(void *arg0) {
    Vec *v = (Vec *)arg0;
    int n = (int)(v->end - v->begin);
    int i = 0;
    if (n > 0) {
        do {
            func_002296D0(v->begin[i]);
            i++;
        } while (i < n);
    }
}

void func_002272D8(void *arg0, void *arg1) {
    Vec *v = (Vec *)arg0;
    void **cur = v->begin;
    for (;;) {
        void **end = v->end;
        if (cur == end) break;
        {
            void *elem = *cur;
            if (func_00229A48(elem, arg1) != 0) {
                void **next = cur + 1;
                end = v->end;
                if (next != end) {
                    func_003F93CC(cur, next, (unsigned int)((char *)end - (char *)next));
                }
                v->end = v->end - 1;
                if (elem != 0) {
                    func_00229658(elem, 3);
                }
            } else {
                cur++;
            }
        }
    }
}

int func_002274D0(void *arg0, void *arg1, void *arg2, int *arg3) {
    int r1 = func_00229988(arg2, arg1, -1);
    int r2 = func_00229988(arg2, arg0, 1);
    if (r1 != 0) {
        if (r2 != 0) return 1;
        *arg3 = -1;
        return 0;
    } else {
        if (r2 == 0) return 0;
        *arg3 = 1;
        return 0;
    }
}
