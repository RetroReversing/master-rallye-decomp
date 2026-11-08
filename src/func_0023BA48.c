/* identical to func_0023B8F8 (matched), with its names changed by decompdecomp */
extern void func_00273D18(s32, s32);
extern f32 func_0023BC60(void *);
extern s32 func_0023BDE0(f32, f32);
extern void func_0023BAD0(s32, void *);

void func_0023BBA0(s32 arg0, s32 arg1)
{
    func_00273D18(arg0, arg1 + 4);
}

typedef struct {
    u8 pad[4];
    void **begin;
    void **end;
} V4;

void func_0023BBC8(void *arg0, V4 *v, f32 f)
{
    s32 n = v->end - v->begin;
    s32 i;

    if (n > 0) {
        i = 0;
        do {
            u8 *p = v->begin[i++];
            f32 r;

            r = func_0023BC60(p);
            *(f32 *)(p + 0xD4) = r;
            *(s32 *)(p + 0xD8) = func_0023BDE0(r, f);
        } while (i < n);
    }
}

s32 func_0023BE30(V4 *v)
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

typedef struct {
    s32 a, b, c;
} E12;

typedef struct {
    u8 pad[0x10];
    E12 *begin;
    E12 *end;
} V12;

void func_0023BA48(s32 arg0, u8 *arg1)
{
    V12 *v = (V12 *)arg1;
    s32 n;
    s32 i;

    func_0023BAD0(arg0, (void *)(arg1 + 4));
    n = v->end - v->begin;
    for (i = 0; i < n; i++)
        func_0023BAD0(arg0, (void *)(v->begin + i));
}
