extern s32 func_001E4280(void);
extern void func_001D4040(void *, const char *);
extern s32 func_001E3650(s32, s32);
extern s32 func_00296710(void);
extern s32 func_00296530(s32, void *);
extern void func_00110DE8(void *, void *);
extern void func_001112F0(void *);
extern void func_0011C760(void *, void *, s32);
extern s32 func_001E3598(s32, void *);
extern void func_001E3D10(s32, void *, s32);
extern void func_0029FA58(void *, void *, s32);
extern void func_0029FA68(void *, void *, void *);
extern char D_00445D80[];
extern char D_004448F8[];
extern char D_00445D98[];
extern char D_00444D28[];
extern char D_00446628[];
extern u32 D_0048D800[];

typedef struct {
	s32 _pad0[0x78 / 4];
	u32 unk78;
} Unk4CStruct;

typedef struct {
	s32 _pad0[1];
	void *unk4;
	s32 _pad1[(0x4C - 8) / 4];
	void *unk4C;
} Arg1;

typedef struct {
	s32 _pad0[3];
	s32 unkC;
	s32 unk10;
	void *unk14;
	s32 _pad1[(0x2C - 0x18) / 4];
	s32 unk2C;
} Arg0;

void func_00110BD8(void *arg0, void *arg1)
{
	f32 sp10;
	u32 sp0;
	s32 sp20;
	s32 temp_16;
	s32 temp_16_2;
	s32 temp_16_3;
	s32 temp_19;
	s32 var_17;
	void *temp_16_4;
	s32 *temp_16_5;

	temp_16 = func_001E4280();
	func_001D4040(&sp0, D_00445D80);
	if ((func_001E3650(temp_16, (s32)&sp0) <= 0)
	    && ((func_00296530(func_00296710(), arg1) == 0)
	        || (((Unk4CStruct *)((Arg1 *)arg1)->unk4C)->unk78 & 1))) {
		temp_16_2 = func_001E4280();
		func_001D4040(&sp0, D_004448F8);
		temp_19 = (func_001E3650(temp_16_2, (s32)&sp0) == ((Arg0 *)arg0)->unkC);
		if (temp_19 != 0) {
			temp_16_3 = func_001E4280();
			func_001D4040(&sp0, D_00445D98);
			func_001E3D10(temp_16_3, &sp0, ((Arg0 *)arg0)->unk10);
			func_00110DE8(arg0, arg1);
		}
		sp10 = 1.0f;
		*(f32 *)((char *)&sp10 + 4) = 1.0f;
		*(f32 *)((char *)&sp10 + 8) = 1.0f;
		*(f32 *)((char *)&sp10 + 0xC) = 1.0f;
		var_17 = temp_19;
		if (((Arg0 *)arg0)->unk10 == 0) {
			var_17 = (temp_19 != 0) ? 3 : 2;
		}
		temp_16_4 = ((Arg1 *)arg1)->unk4;
		if (temp_16_4 != NULL) {
			func_001D4040(&sp0, D_00444D28);
			if (*(s32 *)((char *)temp_16_4 + 4) == sp0) {
				func_0029FA58(temp_16_4, arg1, var_17);
				func_0029FA68(temp_16_4, arg1, (void *)((u32)var_17 * 0x10 + (u32)D_0048D800));
			} else {
				func_001D4040(&sp20, D_00446628);
				if (*(s32 *)((char *)temp_16_4 + 4) == sp20) {
					func_0011C760(temp_16_4, arg1, var_17);
					*(s32 *)((char *)temp_16_4 + 0x5C) = temp_19;
				}
			}
		}
		temp_16_5 = (s32 *)((char *)arg0 + 0x24);
		if (func_001E3598(func_001E4280(), temp_16_5) != 0) {
			func_001112F0(arg0);
			func_001E3D10(func_001E4280(), temp_16_5, 0);
		}
	}
}
