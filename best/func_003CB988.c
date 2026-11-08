void func_003CB508(void*, void*, f32);
void func_003CB360(void*, void*);
void func_003CB3A0(void*, void*);

void func_003CB988(void *arg0, void *arg1, void *arg2, void *arg3) {
    f32 sp[4];
    
    func_003CB508(sp, NULL, -1.0f);
    func_003CB360(arg0, sp);
    func_003CB508(sp, arg1, -1.0f);
    func_003CB360((char*)arg0 + 0x10, sp);
    func_003CB508(sp, arg2, -1.0f);
    func_003CB360((char*)arg0 + 0x20, sp);
    
    ((f32*)((char*)arg0 + 0x30))[0] = 0.0f;
    ((f32*)((char*)arg0 + 0x3C))[0] = 1.0f;
    ((f32*)((char*)arg0 + 0x38))[0] = 0.0f;
    func_003CB3A0(arg0, arg0);
    ((f32*)((char*)arg0 + 0x34))[0] = 0.0f;
}
