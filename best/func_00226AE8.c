void func_0016D178(void *arg0, f32 *arg1) {
    *arg1 = *(f32 *)((u8 *)arg0 + 0x30) * 2.5f;
}

extern void func_0022A998(s32);

typedef struct {
    s32 *begin;
    s32 *end;
} VecI;

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

extern s32 func_0022A150(s32);
extern void func_0026FA80(void *, s32 *, s32 *);

typedef struct {
    s32 *begin;
    s32 *end;
    s32 *cap;
} VecP;

s32 func_00226B88(VecP *v, s32 val) {
    s32 sp = val;
    if (func_0022A150(val) != 0) {
        if (v->end == v->cap) {
            func_0026FA80(v, v->end, &sp);
        } else {
            if (v->end != 0)
                *v->end = sp;
            v->end++;
        }
    }
    return 0; /* unused by callers? but function has no explicit return in asm except epilogue */
}

extern void func_0026FA80b(void *, s32 *, s32 *); /* wrong name placeholder */
void func_00226D78(VecP *v, s32 val) {
    s32 sp = val;
    if (v->end == v->cap) {
        func_0026FA80(v, v->end, &sp);
        return;
    }
    if (v->end != 0)
        *v->end = val;
    v->end++;
}
