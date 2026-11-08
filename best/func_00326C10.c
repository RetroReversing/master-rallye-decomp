extern void *func_002B2028(void *);
extern void func_00342D00(void *, s32, void *, void *);

extern u32 D_0040E618[];

/* ============ func_0032FF90 ============ */
void func_0032FF90(void *arg0, void *arg1) {
    char *t0 = (char *)arg0 + 0x430;
    char *a3 = (char *)arg1 + 0x10;
    char *a0 = (char *)arg0 + 0x440;
    s32 v0 = *(s32 *)arg1;
    *(s32 *)((char *)arg0 + 0x430) = v0;
    *(s32 *)t0 = *(s32 *)((char *)arg1 + 4);
    *(f32 *)((char *)arg0 + 0x440) = *(f32 *)a3;
    *(f32 *)(a0 + 4) = *(f32 *)(a3 + 4);
    *(f32 *)(a0 + 8) = *(f32 *)(a3 + 8);
    *(f32 *)(a0 + 0xC) = *(f32 *)(a3 + 0xC);
    *(f32 *)(t0 + 0x20) = *(f32 *)((char *)arg1 + 0x20);
    *(f32 *)(t0 + 0x24) = *(f32 *)((char *)arg1 + 0x24);
    *(f32 *)(t0 + 0x28) = *(f32 *)((char *)arg1 + 0x28);
    *(f32 *)(t0 + 0x2C) = *(f32 *)((char *)arg1 + 0x2C);
    *(f32 *)((char *)arg0 + 0x454) = 0.25f;
    *(f32 *)((char *)arg0 + 0x458) = 512.0f;
    func_00342D00(*(void **)((char *)arg0 + 0x30), *(s32 *)((char *)arg0 + 0x434), a0, a3);
}

/* ============ func_0033F588 ============ */
void *func_0033F588(void *src, void *end, void *dst) {
    f32 *s = (f32 *)src;
    f32 *d = (f32 *)dst;
    f32 *w = d;
    f32 *s2 = s + 8;
    f32 *d2 = w + 8;
    if (s != (f32 *)end) {
        do {
            if (dst != NULL) {
                d2[-8] = s2[-8];
                d2[-7] = s2[-7];
                d2[-6] = s2[-6];
                d2[-5] = s2[-5];
                d2[-4] = s2[-4];
                d2[-3] = s2[-3];
                d2[-2] = s2[-2];
                d2[-1] = s2[-1];
                d2[0] = s2[0];
                d2[1] = s2[1];
                d2[2] = s2[2];
                ((s32 *)d2)[3] = ((const s32 *)s2)[3];
            }
            s += 12;
            d += 12;
            w += 12;
            s2 += 12;
            d2 += 12;
        } while (s != (f32 *)end);
    }
    return dst;
}

/* ============ func_003276C8 ============ */
typedef struct { void *unk0; s32 unk4; void *unk8; } Elem;

void func_003276C8(void *obj) {
    Elem *begin = *(Elem **)((char *)obj + 0);
    Elem *end = *(Elem **)((char *)obj + 4);
    s32 total = (s32)((char *)end - (char *)begin);
    s32 acc = (s32)(u32)begin->unk8;
    Elem *cur;
    if ((u32)begin < (u32)end) {
        cur = begin;
        do {
            void *p = cur->unk0;
            acc = acc - (s32)(u32)p;
            s32 n = acc >> 2;
            if (n != 0) {
                u32 sz = (u32)n << 2;
                if (sz != 0) {
                    func_002B2028(p);
                } else {
                    cur->unk0 = NULL;
                    D_0040E618[-1] = (u32)cur;
                }
            }
            cur += 1;
        } while (cur < end);
    }
    *(Elem **)((char *)obj + 4) = (Elem *)((char *)end - total);
    *(s32 *)((char *)obj + 0x2C) = *(s32 *)((char *)obj + 0x2C) + 1;
}

/* ============ func_00326C10 ============ */
struct __attribute__((packed)) U64 { u64 v; };

void *func_00326C10(void *src, void *end, void *dst) {
    char *s = (char *)src;
    char *d = (char *)dst;
    if (s != end) {
        do {
            if (d != NULL) {
                (*(U64 *)(d + 0)).v = (*(const U64 *)(s + 0x20)).v;
                (*(U64 *)(d + 8)).v = (*(const U64 *)(s + 0x28)).v;
                (*(U64 *)(d + 0x10)).v = (*(const U64 *)(s + 0x30)).v;
                (*(U64 *)(d + 0x18)).v = (*(const U64 *)(s + 0x38)).v;
            }
            s += 0x40;
            d += 0x20;
        } while (s != end);
    }
    return d;
}
