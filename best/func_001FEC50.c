void *func_001FEC80(void *arg0, void *arg1, void *arg2, void *arg3);

void *func_001FEC50(void *arg0, void *arg1, void *arg2) {
    void *sp;
    void *saved;
    saved = arg0;
    sp = (void *)((char *)saved - 0); // dummy
    func_001FEC80(saved, arg1, arg2, (void *)(&sp - 0)); // not quite
    return saved;
}
