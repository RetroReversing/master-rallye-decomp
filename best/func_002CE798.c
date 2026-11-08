#include "context.h"

s32 func_002B61D0(s32, const char*, s32);
s32 func_002B62E0(void);
void func_002B8438(void*);
void func_002B84E0(void*, s32);
s32 func_002B85A8(void*, s32, s32, s32, s32);
void func_002B8768(void*);
s32 func_002B8938(void*, s32, s32);
s32 func_002B8A40(void*);
void func_002B8C08(void*, s32);
s32 func_003F85D8(s32, s32);
void func_003F9698(const char*, ...);

extern s32 D_0044E7F0;
extern const char D_004834A0[];
extern const char D_004834A8[];
extern const char D_004834B0[];
extern const char D_004834E8[];

s32 func_002CE798(s32 arg0) {
    s32 var2;
    s32 temp2_2;
    s32 temp2;
    u8 sp[0x70];
    
    func_002B8438(sp);
    if (D_0044E7F0 != 0) {
        var2 = func_002B61D0(func_002B62E0(), D_004834A0, 0);
    } else {
        var2 = func_002B61D0(func_002B62E0(), D_004834A8, 0);
    }
    func_002B8C08(sp, var2);
    if (func_002B85A8(sp, arg0, 0, 1, 0) == 0) {
        func_003F9698(D_004834B0, arg0);
        func_002B84E0(sp, 2);
        return 0;
    }
    temp2_2 = func_002B8A40(sp);
    temp2 = func_003F85D8(0x40, temp2_2);
    if (func_002B8938(sp, temp2, temp2_2) != 0) {
        func_002B8768(sp);
        func_002B84E0(sp, 2);
        return temp2;
    }
    func_003F9698(D_004834E8);
    func_002B8768(sp);
    func_002B84E0(sp, 2);
    return 0;
}
