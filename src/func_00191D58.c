#include "context.h"

extern void func_001D4040(void *, s32);
extern void func_001E3D10(s32, void *, s32);
extern void func_001E3EC0(s32, void *, s32);

typedef struct { s32 v[4]; } Key16;

void func_00191CA8(void *arg0, s32 arg1) {
    Key16 key;
    s32 tmp = func_001E4280();
    func_001D4040(&key, ((s32 *)arg0)[8]);
    func_001E3D10(tmp, &key, arg1);
}

void func_00191D00(void *arg0, s32 arg1) {
    Key16 key;
    s32 tmp = func_001E4280();
    func_001D4040(&key, ((s32 *)arg0)[9]);
    func_001E3EC0(tmp, &key, arg1);
}

void func_00191D58(void *arg0, s32 arg1) {
    Key16 key;
    s32 tmp = func_001E4280();
    func_001D4040(&key, ((s32 *)arg0)[10]);
    func_001E3EC0(tmp, &key, arg1);
}
