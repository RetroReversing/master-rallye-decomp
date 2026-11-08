extern void *func_00227880(void *, s32);
extern void *func_00227868(void *, s32);
extern s32 func_00227748(void *, void *);
extern s32 func_00229988(void *, void *, s32);
extern void func_00229658(void *, s32);
extern void func_003F93CC(void *, void *, s32);

typedef struct {
    void **begin;
    void **end;
} VecP;

s32 func_00227690(VecP *v) {
    s32 n = (s32)((u32)v->end - (u32)v->begin) >> 2;
    if (n == 0) return 1;
    if (n == 1) return 1;
    if (n > 0) {
        s32 i;
        for (i = 0; i < n; i++) {
            void *a = func_00227880(v, i);
            func_00227868(v, i);
            if (func_00227748(v, a) == 0) return 0;
        }
    }
    return 1;
}

s32 func_00227748(VecP *v, void *arg1) {
    s32 n = (s32)((u32)v->end - (u32)v->begin) >> 2;
    s32 i = 0;
    if (n > 0) {
        while (i < n) {
            void *a = func_00227868(v, i);
            if (func_00229988(a, arg1, 1) != 0) return 0;
            i++;
        }
    }
    return 1;
}

void func_002277D8(VecP *v, s32 idx) {
    void **p = (void **)((u8 *)v->begin + (idx << 2));
    if (*p != 0) {
        func_00229658(*p, 3);
    }
    if (p + 1 != v->end) {
        s32 sz = (s32)((u32)v->end - (u32)(p + 1));
        func_003F93CC(p, p + 1, sz);
    }
    v->end = (void **)((u8 *)v->end - 4);
}
