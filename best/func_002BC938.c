typedef struct S_002BC938 {
    struct S_002BC938 *next;
    struct S_002BC938 *prev;
} S_002BC938;

void func_002BC938(S_002BC938 *arg0, S_002BC938 **arg1) {
    S_002BC938 *v;
    S_002BC938 *n;

    v = *arg1;
    if (v == 0) goto end;
    n = v->next;
    if (n == 0) goto end;
    v = n;
    while ((n = v->next) != 0) {
        v = n;
    }
end:
    arg0->prev = v;
    arg0->next = 0;
    if (v != 0) {
        v->next = arg0;
    } else {
        *arg1 = arg0;
    }
}
