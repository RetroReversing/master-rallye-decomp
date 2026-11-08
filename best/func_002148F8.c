typedef struct { float key; u8 pad[12]; } E16;

void func_002148F8(E16 *p, E16 *value) {
    E16 *q;
    E16 *v;
    E16 tmp;
    s32 c;

    q = p - 1;
    tmp = *value;
    v = &tmp;
    goto Ltest;
Lloop:
    *p = *q;
    p = q;
    q = p - 1;
Ltest:
    c = (*(float *)v < *(float *)q);
    if (c) goto Lloop;
    *p = *v;
}
