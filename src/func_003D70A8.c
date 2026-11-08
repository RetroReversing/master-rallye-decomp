extern void func_003D8BD8(void*);
extern void D_002AD390(void*);
void func_003D70A8(void *arg0, unsigned int arg1) {
    void *p = arg0;
    func_003D8BD8(p);
    if (arg1 & 1) {
        void (*fp)(void*) = (void(*)(void*))D_002AD390;
        fp(p);
    }
}
