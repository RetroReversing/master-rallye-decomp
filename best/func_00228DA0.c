extern s32 *func_00227880(s32);
extern void func_00228E08(void*, void*, f32, f32, f32, f32, s32);

struct Struct_002296D0 {
    void *unk0;
    s32 *unk4;
    void *unk8;
    void *unkC;
    void *unk10;
};

void func_00228DA0(struct Struct_002296D0 *arg0) {
    s32 *v0;
    f32 sp[5];
    
    v0 = func_00227880(arg0->unk4);
    sp[0] = 0.0f;
    sp[1] = 0.0f;
    sp[2] = 0.0f;
    sp[3] = 0.0f;
    sp[4] = (f32)0;
    sp[0] = ((f32*)v0)[0];
    sp[1] = ((f32*)v0)[1];
    sp[2] = ((f32*)v0)[2];
    sp[3] = ((f32*)v0)[3];
    sp[4] = *(f32*)(v0 + 3);
    func_00228E08(arg0, sp, sp[0], sp[1], sp[2], sp[3], v0[4]);
}
