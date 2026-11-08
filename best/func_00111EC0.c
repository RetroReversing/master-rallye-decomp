extern s32 func_001E4280(void);
extern s32 func_001E3650(s32, void *);
extern s32 func_001E3598(s32, void *);
extern void func_001E3D10(s32, void *, s32);
extern void func_001D4040(void *, const char *);
extern void func_001E3EC0(s32, void *, s32);
extern void func_00112138(void *, s32);
extern void func_00112498(void *, s32);
extern void func_001134D8(void *);
extern u32 D_0040E758[];
extern char D_00446740[];

typedef struct {
	s32 unk20;
	s32 unk34;
} Obj;

void func_00111EC0(void *arg0, s32 arg1)
{
	u32 sp0;
	s32 temp_16;
	s32 temp_16_2;

	if (func_001E3650(func_001E4280(), (char *)arg0 + 0x44) <= 0) {
		temp_16 = func_001E3598(func_001E4280(), (char *)arg0 + 0x48);
		func_001E3D10(func_001E4280(), D_0040E758, temp_16);
		if (temp_16 != 0) {
			if (((Obj *)arg0)->unk20 == 0) {
				((Obj *)arg0)->unk34 = 0;
				func_00112138(arg0, 1);
				temp_16_2 = func_001E4280();
				func_001D4040(&sp0, D_00446740);
				func_001E3EC0(temp_16_2, &sp0, 0);
			}
			func_00112498(arg0, arg1);
			func_001134D8(arg0);
		}
	}
}
