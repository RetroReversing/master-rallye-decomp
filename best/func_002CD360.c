struct S3F0 { s32 n; s32 cap; s32 *arr; };

s32 func_002CD3F0(struct S3F0 *p, s32 i) {
    if (i >= 0 && (u32)i < (u32)p->n)
        return p->arr[i];
    return 0;
}

extern s32 func_003FA580(s32, s32);

s32 func_002CD360(struct S3F0 *p, s32 a) {
    if (p->n == 0)
        return -1;
    s32 i = 0;
    s32 r = -1;
    while ((u32)i < (u32)p->n) {
        if (func_003FA580(a, p->arr[i]) != 0) {
            i++;
            continue;
        }
        r = i;
        break;
    }
    return r;
}
