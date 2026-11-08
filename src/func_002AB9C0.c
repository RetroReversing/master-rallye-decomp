extern u8 D_00426930[];
extern u8 D_00426950[];
extern u8 D_00426970[];

void func_002B6528(void *, s32);
void func_002B6590(void *);
void func_002B6EC0(void *, s32);
void func_002B6F28(void *);
void func_002B7918(void *, s32);
void func_002B7980(void *);

void func_002AB9C0(s32 arg0, s32 arg1) {
    if (arg1 != 0xFFFF)
        return;
    if (arg0 != 0) {
        func_002B6590(D_00426930);
        func_002B6F28(D_00426950);
        func_002B7980(D_00426970);
    } else {
        func_002B7918(D_00426970, 2);
        func_002B6EC0(D_00426950, 2);
        func_002B6528(D_00426930, 2);
    }
}
