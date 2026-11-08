extern void func_0016D380(void *);

void func_0016D330(void *arg0) {
    int x = *(int *)((char *)arg0 + 0x38);
    x = x + 1;
    *(int *)((char *)arg0 + 0x38) = x;
    func_0016D380(arg0);
}
