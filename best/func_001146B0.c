s32 func_00114678(void *arg0, s32 arg1);
void *func_00151930(void *a0, void *a1);
void func_00151A28(void **a0, u32 a1, u32 a2, void *a3, s32 a4);
void func_001525D8(f32 *a0, f32 *a1, u32 a2);
void func_001537E8(void **a0, void *a1, s32 a2);
void func_001539A0(void **a0, u32 a1, u32 a2, void **a3, u32 a4, void *a5);
s32 func_001E3650(s32 a0, void *a1);
void *func_001E37E8(s32 a0, void *a1);
s32 func_001E4280(void);
void func_002060F8(void *a0);
void func_002062A8(void *a0, void *a1);
void func_00206338(void *a0, void *a1);
void func_002063A0(void *a0, f32 *a1);
void func_002B2028(void *a0, void *a1);
s32 func_003FA9B8(void *a0);

extern u8 D_0040E618[];
extern u8 D_0040E658[];
extern u8 D_00444870[];
extern f32 D_0048D890[];
extern f32 D_0048D8A0[];
extern f32 D_0048D8B0[];
extern f32 D_0048D8C0[];

void func_001146B0(void *arg0) {
    f32 sp[16];
    void *t20;
    void *t2;
    s32 t2_2;
    
    t20 = *(void **)((u8 *)arg0 + 0x74);
    t20 = *(void **)((u8 *)t20 + 0x4C);
    if (t20 == NULL) {
        return;
    }
    
    func_002060F8(t20);
    t2 = func_001E37E8(func_001E4280(), (u8 *)arg0 + 0x3C);
    if (t2 == NULL) {
        return;
    }
    
    if (t2 != *(void **)((u8 *)arg0 + 0x6C)) {
        *(void **)((u8 *)arg0 + 0x6C) = t2;
        *(s32 *)((u8 *)arg0 + 0x18) = 0;
    }
    
    func_002062A8(t20, (u8 *)arg0 + 0x70);
    t2_2 = func_001E3650(func_001E4280(), (u8 *)arg0 + 0x40);
    
    return;
}
