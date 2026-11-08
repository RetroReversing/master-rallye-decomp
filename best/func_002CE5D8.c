#include "context.h"

extern void *func_002D04D0(void);
extern void func_0030C930(int, int, int);

typedef struct {
    char pad[0x10];
    float unk10;
} SomeStruct;

extern float D_00429868[48 * 4];

void func_002CE5D8(int arg0, float f12, float f13) {
    void *v0;
    float f20;
    float f21;
    int s0, s1, a2;
    
    s1 = arg0;
    if ((unsigned int)(s1 - 2) >= 0x2E) {
        return;
    }
    func_002D04D0();
    f20 = 0x45FFF800;
    f21 = 0.9f;
    f20 = f12 * f20;
    f20 = f20 * f21;
    v0 = func_002D04D0();
    f20 = f20 * ((SomeStruct *)v0)->unk10;
    s0 = (int)f20;
    if (s0 < 0) {
        s0 = 0;
    } else if (s0 >= 0x2000) {
        s0 = 0x1FFF;
    }
    func_002D04D0();
    f20 = f13 * 0x45FFF800;
    f20 = f20 * 0.9f;
    v0 = func_002D04D0();
    f20 = f20 * ((SomeStruct *)v0)->unk10;
    a2 = (int)f20;
    if (a2 < 0) {
        a2 = 0;
    } else if (a2 >= 0x2000) {
        a2 = 0x1FFF;
    }
    func_0030C930(s1, s0, a2);
    D_00429868[s1 * 4 + 1] = f12;
    D_00429868[s1 * 4 + 2] = f13;
}
