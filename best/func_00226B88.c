extern void func_0022A998(s32);
extern s32 func_0022A150(s32);
extern void func_0026FA80(void *, s32 *, s32 *);

typedef struct {
    s32 *begin;
    s32 *end;
} VecI;

typedef struct {
    s32 *begin;
    s32 *end;
    s32 *cap;
} VecP;

void func_00226AE8(VecI *v) {
    s32 n = (s32)((u32)v->end - (u32)v->begin) >> 2;
    s32 i = 0;
    if (n > 0) {
        s32 *base;
        do {
            base = v->begin;
            func_0022A998(*(s32 *)((char *)base + (i << 2)));
            i++;
        } while (i < n);
    }
}

void func_00226B88(VecP *v, s32 val) {
    s32 sp = val;
    if (func_0022A150(val) != 0) {
        if (v->end == v->cap) {
            func_0026FA80(v, v->end, &sp);
        } else {
            if (v->end != 0) {
                *v->end = sp;
            }
            v->end++;
        }
    }
}
