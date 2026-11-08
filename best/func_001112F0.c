extern s32 func_001E4280(void);
extern void *func_001E37E8(s32, void *);
extern s32 func_001E3650(s32, void *);
extern void func_001D4040(void *, const char *);
extern void func_001E3FB0(s32, void *, void *);
extern char D_00444878[];

typedef struct {
	u32 unk0;
	u32 unk4;
} Vec;

void func_001112F0(void *arg0)
{
	u32 sp0;
	void *temp_2;
	s32 temp_2_2;
	s32 r;

	temp_2 = func_001E37E8(func_001E4280(), (char *)arg0 + 0x18);
	if (temp_2 != NULL) {
		temp_2_2 = func_001E3650(func_001E4280(), (char *)arg0 + 0x1C);
		if (temp_2_2 < 0 || (u32)temp_2_2 >= (u32)(((s32)(((Vec *)temp_2)->unk4 - ((Vec *)temp_2)->unk0) >> 2))) {
			r = func_001E4280();
			func_001D4040(&sp0, D_00444878);
			func_001E3FB0(r, (char *)arg0 + 0x20, &sp0);
		} else {
			r = func_001E4280();
			func_001D4040(&sp0, (const char *)(u32)(temp_2_2 << 2));
			func_001E3FB0(r, (char *)arg0 + 0x20, &sp0);
		}
	}
}
