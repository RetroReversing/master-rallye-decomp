extern s32 func_002330E8(void *, void *);
extern s32 func_00232380(void *, void *);

s32 func_0022F920(u8 *arg0, void *arg1)
{
    s32 n = (s32)(*(u8 **)(arg0 + 0x2C) - *(u8 **)(arg0 + 0x28)) >> 4;
    s32 i;

    if (n > 0) {
        i = 0;
        do {
            if (func_002330E8(*(u8 **)(arg0 + 0x28) + i * 16, arg1))
                return 0;
            i++;
        } while (i < n);
    }
    return 1;
}

typedef struct {
    u8 b[0x1C];
} E28;

typedef struct {
    u8 pad[0x10];
    E28 *begin;
    E28 *end;
} V28;

s32 func_0022F9A8(V28 *v, void *arg1)
{
    s32 n = v->end - v->begin;
    s32 i;

    if (n > 0) {
        i = 0;
        do {
            if (func_00232380((void *)(v->begin + i), arg1) == 0)
                return 1;
            i++;
        } while (i < n);
    }
    return 0;
}
