#include "context.h"

extern void **func_0015E848(void);
extern void *func_002A2458(void);
extern void func_002A2260(void *);
extern void *func_002C7190(void);
extern void func_001D39A0(void *);

typedef struct {
    u8 pad[0x48];
    s16 unk48;
    s32 unk4C;
    u8 pad2[4];
    s16 unk50;
    s32 unk54;
    u8 pad3[4];
    s16 unk58;
    s32 unk5C;
} UnkVtbl;

typedef struct {
    UnkVtbl **vtable;
} UnkObj;

void func_002A1350(void) {
    UnkObj *obj = (UnkObj *)func_0015E848();
    UnkVtbl *vt = *obj->vtable;
    void (*fp)(UnkObj *, void *) = (void (*)(UnkObj *, void *))vt->unk5C;
    fp(obj, (void *)((u8 *)obj + vt->unk58));
}

void func_002A1320(void) {
    UnkObj *obj = (UnkObj *)func_0015E848();
    UnkVtbl *vt = *obj->vtable;
    void (*fp)(UnkObj *, void *) = (void (*)(UnkObj *, void *))vt->unk54;
    fp(obj, (void *)((u8 *)obj + vt->unk50));
}

void func_002A12F0(void) {
    UnkObj *obj = (UnkObj *)func_0015E848();
    UnkVtbl *vt = *obj->vtable;
    void (*fp)(UnkObj *, void *) = (void (*)(UnkObj *, void *))vt->unk4C;
    fp(obj, (void *)((u8 *)obj + vt->unk48));
}

void func_002A1380(void) {
    func_002A2260(func_002A2458());
    func_001D39A0(func_002C7190());
}
