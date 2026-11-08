#include "context.h"

void func_0016D178(void *arg0, f32 *arg1) {
    *arg1 = *(f32 *)((u8 *)arg0 + 0x30) * 2.5f;
}

extern s32 func_001E4280(void);
extern void func_001D4040(void *, s32);
extern void func_001E3D10(s32, void *, s32);
extern void func_001E3EC0(s32, void *, s32);

typedef struct { s32 v[4]; } Key16;

void func_00191FD0(void *arg0, s32 arg1) {
    Key16 key;
    s32 tmp = func_001E4280();
    func_001D4040(&key, ((s32 *)arg0)[18]);
    func_001E3EC0(tmp, &key, arg1);
}

void func_00192028(void *arg0, s32 arg1) {
    Key16 key;
    s32 tmp = func_001E4280();
    func_001D4040(&key, ((s32 *)arg0)[20]);
    func_001E3EC0(tmp, &key, arg1);
}

void func_00192080(void *arg0, s32 arg1) {
    Key16 key;
    s32 tmp = func_001E4280();
    func_001D4040(&key, ((s32 *)arg0)[21]);
    func_001E3EC0(tmp, &key, arg1);
}

void func_001920D8(void *arg0, s32 arg1) {
    Key16 key;
    s32 tmp = func_001E4280();
    func_001D4040(&key, ((s32 *)arg0)[22]);
    func_001E3D10(tmp, &key, arg1);
}
