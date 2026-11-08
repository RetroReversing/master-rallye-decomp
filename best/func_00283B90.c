extern float func_003F3E80(void*, void*, float);
int func_00283C68(void* arg0, void* arg1) {
    void* v1 = ((void**)arg1)[20];
    void* v0 = ((void**)((void**)arg0)[3])[20];
    void* v1p = (char*)v1 + 0x50;
    void* v0p = (char*)v0 + 0x50;
    float f0 = ((float*)v1)[20] - ((float*)v0)[20];
    float f2 = ((float*)v1p)[1] - ((float*)v0p)[1];
    float f1 = ((float*)v1p)[2] - ((float*)v0p)[2];
    f1 = f1*f1;
    if (f1 != f1) {
        f1 = func_003F3E80(v0, v1p, f0*f0 + f2*f2 + f1);
    }
    if (f1 < 10.0f) return 1;
    return 0;
}

extern int func_00283C68(void*, void*);
extern void func_00283D08(void*, void*);
int func_00283C08(void* arg0, void* arg1) {
    if (((void**)arg0)[3] == 0) return 0;
    if (((int*)arg0)[4] != 0 || func_00283C68(arg0, arg1)) {
        ((int*)arg0)[4] = 1;
        func_00283D08(arg0, arg1);
        return 1;
    }
    return 0;
}

extern char D_0047AF50[];
extern void D_0047D3B8;
extern void func_001D4040(void*, const char*);
void* func_00283B90(void* arg0, int arg1) {
    void* sp0;
    void* v0 = arg0;
    func_001D4040(&sp0, D_0047AF50);
    ((void**)v0)[2] = &D_0047D3B8;
    ((int*)v0)[3] = arg1;
    ((void**)v0)[1] = sp0;
    ((int*)v0)[0] = -1;
    ((float*)v0)[6] = 1.0f;
    ((int*)v0)[4] = 0;
    ((float*)v0)[5] = 1.0f;
    return v0;
}

extern void func_00283720(void*);
extern void func_00289958(void*, void*, void*, void*);
void func_00283678(void* arg0, void* arg1) {
    if (func_001E3650(func_001E4280(), (char*)arg0 + 0x74) <= 0) {
        return;
    }
    if (((int*)arg0)[4] == 0) {
        func_00283720(arg0);
    }
    ((float*)arg0)[11] = ((float*)arg0)[23];
    ((float*)arg0)[12] = ((float*)arg0)[24];
    ((float*)arg0)[13] = ((float*)arg0)[25];
    ((float*)arg0)[14] = ((float*)arg0)[26];
    ((float*)arg0)[15] = ((float*)arg0)[27];
    ((float*)arg0)[16] = ((float*)arg0)[28];
    func_00289958((char*)arg0 + 0x14, arg1, (char*)arg0 + 0x38, (char*)arg0 + 0x68);
}
