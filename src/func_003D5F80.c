/* identical to func_003D5858 (matched), with its names changed by decompdecomp */
extern void *func_002B1FC0(int size);
extern void *func_003D2910(int size);
extern void func_001CAED8(void *a0, void *a1, void *a2);
extern void func_001CAD18(void *a0, void *a1, void *a2);

extern void D_0047A578;

typedef struct {
    void *unk0;
    int *end;
    int *cap;
} VecPush;

void func_003D5F80(void *unused, void (*arg1)(void))
{
    (void)unused;
    arg1();
}

void *func_0024F1A0(void *arg0)
{
    void *v;

    *(int *)(arg0 + 0x0) = 0;
    *(void **)(arg0 + 0x4) = &D_0047A578;
    v = func_002B1FC0(0xC);
    if (v != NULL) {
        *(void **)(arg0 + 0x8) = v;
    } else {
        v = func_003D2910(0xC);
        *(void **)(arg0 + 0x8) = v;
    }
    *(void **)v = v;
    *(void **)((char *)v + 0x4) = *(void **)(arg0 + 0x8);
    return arg0;
}

void func_0024F158(int arg1, int arg2)
{
    VecPush *v;
    int tmp;

    v = (VecPush *)(arg1 + 0x18);
    if (v->end != v->cap) {
        if (v->end != NULL) {
            *v->end = arg2;
        }
        v->end = v->end + 1;
        return;
    }
    tmp = arg2;
    func_001CAED8(v, v->end, &tmp);
}

void func_0024F110(int arg1, int arg2)
{
    VecPush *v;
    int tmp;

    v = (VecPush *)(arg1 + 0xC);
    if (v->end != v->cap) {
        if (v->end != NULL) {
            *v->end = arg2;
        }
        v->end = v->end + 1;
        return;
    }
    tmp = arg2;
    func_001CAD18(v, v->end, &tmp);
}
