extern s32 func_001E4280(void);
extern s32 func_001E3650(s32, s32);
extern void func_001D4040(void*, const char*);
extern void func_001E3D10(s32, void*, s32);
extern s32 func_00296530(void*, void*);
extern s32 func_00296710(void);
extern void func_0010CD30(void*, void*);
extern char D_004448F8[], D_00445D98[];

void func_0010CBD8(void *arg0, void *arg1) {
    s32 key;
    void *p4c;
    float sp[8];
    if (func_00296530((void*)func_00296710(), arg1) != 0) {
        key = func_001E4280();
        func_001D4040(sp, D_004448F8);
        if (func_001E3650(key, (s32)sp) == *(s32*)((char*)arg0 + 0xC)) {
            key = func_001E4280();
            func_001D4040(sp, D_00445D98);
            func_001E3D10(key, sp, 1);
            func_0010CD30(arg0, arg1);
            p4c = *(void**)((char*)arg1 + 0x4C);
            sp[4] = 1.0f; sp[5] = 1.0f; sp[6] = 1.0f; sp[7] = 1.0f;
            ((float*)p4c)[4] = sp[4];
            ((float*)p4c)[5] = sp[5];
            ((float*)p4c)[6] = sp[6];
            ((float*)p4c)[7] = sp[7];
        } else {
            p4c = *(void**)((char*)arg1 + 0x4C);
            sp[0] = 0.4f; sp[1] = 0.4f; sp[2] = 0.4f; sp[3] = 0.8f;
            ((float*)p4c)[4] = sp[0];
            ((float*)p4c)[5] = sp[1];
            ((float*)p4c)[6] = sp[2];
            ((float*)p4c)[7] = sp[3];
        }
        (*(s32*)((char*)p4c + 0x88))++;
    }
}
