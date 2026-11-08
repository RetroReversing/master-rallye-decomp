extern s32 D_0040DC58;
extern char D_00446570[];
extern char D_00446578[];
extern char D_00446588[];
extern char D_00446590[];
extern void func_002CE0A0(char *, s32, s32, f32);
extern void func_002CE5D8(s32, f32, f32);

void func_00110478(s32 arg0)
{
    u32 tmp = 0x3F4CCCCD;
    if (arg0 == 0x2B) {
        func_002CE0A0("monkeys", D_0040DC58, 0x5622, *(f32 *)&tmp);
        func_002CE5D8(D_0040DC58, 1.0f, 1.0f);
    } else if (arg0 == 0x2A) {
        func_002CE0A0("microids", D_0040DC58, 0x5622, 1.0f);
        func_002CE5D8(D_0040DC58, 1.0f, 1.0f);
    } else if (arg0 == 0x2C) {
        func_002CE0A0("master", D_0040DC58, 0x5816, *(f32 *)&tmp);
        func_002CE5D8(D_0040DC58, 1.0f, 1.0f);
    } else if (arg0 == 0x2D) {
        func_002CE0A0("titlel", D_0040DC58, 0xAC44, 1.0f);
        func_002CE5D8(D_0040DC58, 1.0f, 1.0f);
    }
}
