extern void *D_002AD390(void *);
extern void func_001D6F38(void *, int);

typedef void (*FuncType)(void *, int, void *);

void func_002631A0(void *arg0, void *arg1) {
    void **v0 = *(void ***)((char *)arg0 + 0x78);
    if (v0 != 0) {
        void *v1 = v0[0];
        ((FuncType)((char *)v1 + 0xC))( (char *)v0 + ((short *)v1)[4], 3, v0);
    }
    *(void ***)((char *)arg0 + 0x78) = arg1;
}

void func_00263168(void *arg0, void *arg1) {
    void *t = *(void **)((char *)arg0 + 0x0);
    D_002AD390(t);
    *(void **)((char *)arg0 + 0x0) = arg1;
}

void func_002631F0(void *arg0, void *arg1) {
    void *t = *(void **)((char *)arg0 + 0x8);
    if (t != 0) {
        func_001D6F38(t, 3);
    }
    *(void **)((char *)arg0 + 0x8) = arg1;
}

void func_00263280(void *arg0, void *arg1) {
    void *t = *(void **)((char *)arg0 + 0x10);
    D_002AD390(t);
    *(void **)((char *)arg0 + 0x10) = arg1;
}
