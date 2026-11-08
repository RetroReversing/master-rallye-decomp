extern void func_003F9698(const char *, ...);
extern void *func_001D4568(void *, int);
extern void func_001D8358(void *, void *, void *);
extern int func_001D30E8(void *, const char *);
extern int func_003FA760(void *, const char *);

extern const char D_00475E90[];
extern const char D_00475EA8[];

typedef struct Vec4388 {
    char *begin;
    char *cur;
} Vec4388;

void func_001D4388(void *arg0) {
    Vec4388 *v = (Vec4388 *)arg0;
    int i;

    func_003F9698(D_00475E90);
    if (((v->cur - v->begin) >> 2) > 0) {
        i = 0;
        do {
            void *val = func_001D4568(arg0, i);
            func_003F9698(D_00475EA8, i, val);
            i++;
        } while (i < ((v->cur - v->begin) >> 2));
    }
}

void *func_001D4568(void *arg0, int arg1) {
    Vec4388 *v = (Vec4388 *)arg0;
    void *ret;

    ret = 0;
    if (arg1 >= 0) {
        unsigned int count = (unsigned int)((v->cur - v->begin) >> 2);
        if ((unsigned int)arg1 < count) {
            ret = ((void **)v->begin)[arg1];
        }
    }
    return ret;
}

typedef struct Vec45A0 {
    char *begin;
    char *cur;
    char *end;
} Vec45A0;

int func_001D45A0(void *arg0, void *arg1) {
    Vec45A0 *v = (Vec45A0 *)arg0;
    void *val;

    val = arg1;
    if (v->cur != v->end) {
        if (v->cur != 0) {
            *(void **)v->cur = val;
        }
        v->cur += 4;
    } else {
        func_001D8358(v, v->cur, &val);
    }
    return ((v->cur - v->begin) >> 2) - 1;
}

void *func_001D4758(void *arg0, const char *arg1) {
    int idx;
    void *node;

    idx = func_001D30E8(arg0, arg1);
    node = ((void **)arg0)[idx + 1];
    while (node != 0) {
        if (func_003FA760((char *)node + 8, arg1) == 0) {
            return node;
        }
        node = *(void **)node;
    }
    return 0;
}
