/* identical to func_001DDC00 (matched), with its names changed by decompdecomp */
/* func_001D3920 - known unreproducible bnel idiom, keeping best */
s32 func_001D3920(void *arg0) {
    s32 *v = *(s32 **)((char *)arg0 + 4);
    s32 ret = 0;
    if (v != (s32 *)arg0 && v != (s32 *)arg0) {
        ret = *v;
    }
    return ret;
}

/* func_001DCD50 */
void func_001DCD50(void *arg0, s32 arg1, s32 *arg2) {
    s32 stride;
    s32 *base;
    s32 *dest;
    s32 i;

    if (arg1 < 0) {
        return;
    }
    if (arg1 >= *(s32 *)((char *)arg0 + 0x10)) {
        return;
    }
    i = 0;
    stride = *(s32 *)((char *)arg0 + 0xC);
    base = *(s32 **)((char *)arg0 + 8);
    dest = base + arg1 * stride;
    if (stride <= 0) {
        return;
    }
    do {
        *dest = *arg2;
        i++;
        arg2++;
        dest++;
    } while (i < *(s32 *)((char *)arg0 + 0xC));
}

/* func_001F0898 */
typedef struct {
    s16 adjust;
    s16 pad;
    void (*fn)(void *, s32);
} VtEntry_001DDC00;

extern void D_002AD390(void *);

void func_001F0898(void *self, s32 flags) {
    u8 *v = *(u8 **)self;
    if (v != NULL) {
        VtEntry_001DDC00 *e = *(VtEntry_001DDC00 **)(v + 8);
        e[1].fn(v + e[1].adjust, 3);
    }
    if (flags & 1) {
        D_002AD390(self);
    }
}

/* func_001DDFE0 */
extern void func_001DCB88(void *, s32);

void func_001DDFE0(void *arg0, s32 arg1) {
    func_001DCB88(arg0, 2);
    if (arg1 & 1) {
        D_002AD390(arg0);
    }
}
