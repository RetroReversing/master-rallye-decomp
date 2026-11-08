static inline int is_empty(char *base)
{
    return *(char **)(base + 4) == base;
}

s32 func_001D3940(char *arg0)
{
    char *base = arg0 + 0xC;
    s32 *p = *(s32 **)(base + 4);
    s32 v = 0;

    if ((char *)p != base && !is_empty(base))
        v = *p;
    return v;
}
