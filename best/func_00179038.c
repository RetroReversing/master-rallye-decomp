f32 func_00178FB8(s32);
void* func_001E3820(s32, void*, void*);
s32 func_001E3E90(s32, void*, f32);
s32 func_001E4280(void);

extern void D_0040E698;

typedef struct {
    char unk0[0xC];
    void* unkC;
    char unk10[0x90 - 0x10];
    void* unk90;
} Unk79038A;

typedef struct {
    char unk0[0xC];
    void* unkC;
} Unk2;

typedef struct {
    char unk0[0x28];
    s32 unk28;
    char unk2C[0x38 - 0x2C];
    f32 unk38;
    f32 unk3C;
    f32 unk40;
    f32 unk44;
} Unk3;

typedef struct {
    f32 unk0, unk4, unk8;
} Vec3;

typedef struct {
    char unk0[8];
    void* unk8;
} UnkTemp;

void func_00179038(Unk79038A* arg0) {
    f32 sp[32];
    void* v0 = func_001E4280();
    void* temp = func_001E3820((s32)v0, (void*)((char*)arg0 + 0xB0), &D_0040E698);
    Unk2* t2 = (Unk2*)temp;
    Unk3* v18 = (Unk3*)t2->unkC;
    Unk3* v19 = (Unk3*)((char*)v18 + 0x54);
    void* t3_unk = ((Unk2*)arg0->unk90)->unkC;
    
    if (((void**)t3_unk)[5] != NULL) { /* approximate */
    }
}
