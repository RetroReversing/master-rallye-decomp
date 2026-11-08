extern f32 func_0023BC60(void *);
extern s32 func_0023BDE0(f32, f32);

typedef struct {
    u8 pad[4];
    void **begin;
    void **end;
} V4;

typedef struct {
    void **begin;
    void **end;
} V0;

void func_0023BBC8(void *arg0, V4 *v, f32 f)
{
    s32 n = v->end - v->begin;
    s32 i = 0;

    if (n > 0) {
        do {
            void **base = v->begin;
            s32 idx = i * 4;
            u8 *p = *(void **)((u8 *)base + idx);
            f32 r;

            i++;
            r = func_0023BC60(p);
            *(f32 *)(p + 0xD4) = r;
            *(s32 *)(p + 0xD8) = func_0023BDE0(r, f);
        } while (i < n);
    }
}

s32 func_0023BE30(void *arg0, V0 *v)
{
    s32 n = v->end - v->begin;
    s32 i;

    n = n - 1;
    if (n > 0) {
        void **base = v->begin;
        s32 j;

        i = 0;
        j = i + 1;
        do {
            u8 *p = base[i];
            u8 *q = base[j];

            if (*(f32 *)(p + 0x18) < *(f32 *)(q + 0x18))
                return 0;
            i = j;
            j = i + 1;
        } while (i < n);
    }
    return 1;
}
