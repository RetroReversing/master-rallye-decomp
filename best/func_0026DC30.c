void func_0026DA68(void *, void *);
void func_0026DBD0(void *, void *, int, void *);
void func_0026DC30(void *arg0, void *arg1, void *arg2) {
    if ((s32)((u8*)arg1 - (u8*)arg0) >> 2 >= 0x11) {
        void *p = (void*)((u8*)arg0 + 0x40);
        func_0026DA68(p, arg2);
        func_0026DBD0(p, arg1, 0, arg2);
        return;
    }
    func_0026DA68(arg1, arg2);
}
