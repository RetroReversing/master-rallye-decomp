void func_001D4040(void *a0, const char *name);
int func_001FF6A0(void *a0, void *a1);

int func_001FF618(void *arg0, void *arg1) {
    char sp[0x40];
    void *s0 = arg1;
    void *s1 = arg0;
    void *p;
    
    func_001D4040(sp, "MarkerLists");
    if (*(void **)((char *)s0 + 0x20) == *(void **)sp) {
        s0 = *(void **)s0;
        if (s0 == NULL) {
            return 0;
        }
    } else {
        return 0;
    }
    
    p = s0;
    do {
        int v0 = 0;
        if (!func_001FF6A0(s1, p)) {
            break;
        }
        p = *(void **)((char *)p + 4);
        if (p == NULL) {
            return 1;
        }
    } while (1);
    
    return 0;
}
