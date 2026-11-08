/* func_001D3920 - sentinel list front, bnel idiom (best known) */
s32 func_001D3920(void *arg0) {
    s32 *v = *(s32 **)((char *)arg0 + 4);
    s32 ret = 0;
    if ((v != (s32 *)arg0) && (v != (s32 *)arg0)) {
        ret = *v;
    }
    return ret;
}

/* func_001D16D0 - adapted from matched func_001D1768 (100% similar, offset +0x38) */
typedef struct { void *b; void *e; void *c; } V_001D16D0;
extern void func_00155DB0(V_001D16D0 *, void *, void *);

void func_001D16D0(char *arg0, void *arg1) {
    V_001D16D0 *v = (V_001D16D0 *)(arg0 + 0x38);
    void *e = v->e;
    if (e != v->c) {
        if (e != 0) {
            *(int *)e = *(int *)arg1;
        }
        v->e = (char *)v->e + 4;
    } else {
        func_00155DB0(v, e, arg1);
    }
}

/* func_001D5DE0 - returns pointer, stores 0x3039 */
s32 *func_001D5DE0(s32 *arg0) {
    *arg0 = 0x3039;
    return arg0;
}

/* func_001D5DF0 - LCG random returning float */
f32 func_001D5DF0(s32 *arg0) {
    s32 val = *arg0;
    s32 next = ((val % 44488) * 0xBC8F) - ((val / 44488) * 0xD47);
    *arg0 = next;
    if (next <= 0) {
        *arg0 = next + 0x7FFFFFFF;
    }
    return (f32)(*arg0 & 0xFFFFFF) * 5.9604645e-8f;
}
