static inline int is_empty_helper(char *base) { return *(char **)(base + 4) == base; }

s32 func_001D3920(char *arg0) {
    char *base = arg0;
    s32 *p = *(s32 **)(base + 4);
    s32 v = 0;
    if ((char *)p != base && !is_empty_helper(base)) {
        v = *p;
    }
    return v;
}
