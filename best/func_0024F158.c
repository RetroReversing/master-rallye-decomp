extern void func_001CAB58(void *, void *, void *);
extern void func_001CAD18(void *, void *, void *);
extern void func_001CAED8(void *, void *, void *);

typedef struct {
    void *unk0;
    void **end;
    void **cap;
} Vec;

void func_0024F0C8(void *a0, void *a1, int a2)
{
    Vec *v = (Vec *)(a1 + 0);
    void **p = v->end;
    void *tmp = (void *)(long)a2;
    (void)a0;

    if (p != v->cap) {
        if (p != 0) {
            *(int *)p = a2;
        }
        v->end = p + 1;
        return;
    }
    func_001CAB58(v, p, &tmp);
}

void func_0024F110(void *a0, void *a1, int a2)
{
    Vec *v = (Vec *)(a1 + 0xC);
    void **p = v->end;
    void *tmp = (void *)(long)a2;
    (void)a0;

    if (p != v->cap) {
        if (p != 0) {
            *(int *)p = a2;
        }
        v->end = p + 1;
        return;
    }
    func_001CAD18(v, p, &tmp);
}

void func_0024F158(void *a0, void *a1, int a2)
{
    Vec *v = (Vec *)(a1 + 0x18);
    void **p = v->end;
    void *tmp = (void *)(long)a2;
    (void)a0;

    if (p != v->cap) {
        if (p != 0) {
            *(int *)p = a2;
        }
        v->end = p + 1;
        return;
    }
    func_001CAED8(v, p, &tmp);
}
