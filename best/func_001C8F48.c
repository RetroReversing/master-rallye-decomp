f32 *func_001C8F48(f32 *left, f32 *right, f32 pivot) {
    f32 *l = left;
    f32 *r = right;
    f32 p = pivot;
    u64 tmp;
    f32 stack_tmp[4];
    
    loop:
    r -= 2;
    while (*l < p) l += 2;
    while (p < *r) r -= 2;
    if ((u32)l < (u32)r) {
        tmp = *(u64 *)l;
        *(u64 *)l = *(u64 *)r;
        *(u64 *)r = tmp;
        l += 2;
        goto loop;
    }
    return l;
}
