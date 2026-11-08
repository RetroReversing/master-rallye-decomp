extern void func_001E2460(void*, s32);
extern void func_001E2470(void*, char*, void*);
extern void func_001E25B0(void*, char*, void*);
extern void func_001E28F8(void*, char*, void*);
extern void func_00297E58(s32, s32, s32, s32, s32);
extern void func_001112F0(void*);
extern char D_00444D00[], D_00445D48[], D_00445D60[], D_004465C0[], D_004465C8[], D_004465D8[], D_004465E0[], D_004465F0[], D_00446600[], D_00446610[];

void func_00110AB8(void *arg0, s32 arg1, s32 arg2) {
    s32 sp[4];
    func_001E2460(sp, arg2);
    sp[1] = 0;
    sp[2] = 0;
    func_001E25B0(sp, D_00444D00, (char*)arg0 + 0xC);
    func_001E2470(sp, D_004465C0, (char*)arg0 + 0x10);
    func_001E25B0(sp, D_00445D48, (void*)&sp[1]);
    func_001E25B0(sp, D_00445D60, (void*)&sp[2]);
    func_00297E58(*(s32*)((char*)arg0 + 0x14), sp[1], 0, sp[2], 0);
    func_001E28F8(sp, D_004465C8, (char*)arg0 + 0x18);
    func_001E28F8(sp, D_004465D8, (char*)arg0 + 0x1C);
    func_001E28F8(sp, D_004465E0, (char*)arg0 + 0x20);
    func_001E28F8(sp, D_004465F0, (char*)arg0 + 0x24);
    func_001E28F8(sp, D_00446600, (char*)arg0 + 0x28);
    func_001E2470(sp, D_00446610, (char*)arg0 + 0x2C);
    func_001112F0(arg0);
}
