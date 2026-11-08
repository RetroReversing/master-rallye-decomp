extern void func_001D6F38(void *, int);

void func_002631A0(void *arg0, void *arg1) {
    void **v0 = *(void ***)((char *)arg0 + 0x78);
    if (v0 != 0) {
        void *v1 = v0[0];
        void (*f)(void *, int, void *) = *(void (**)(void *, int, void *))((char *)v1 + 0xC);
        short off = *(short *)((char *)v1 + 8);
        f((char *)v0 + off, 3, v0);
    }
    *(void ***)((char *)arg0 + 0x78) = arg1;
}
