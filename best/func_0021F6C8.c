/* machine draft (m2c) for ee-gcc-2.95.2 -O2 -G0, tried by autopilot */
#ifndef M2C_DEFINES
#define M2C_DEFINES
typedef s32 M2C_UNK;
typedef s8 M2C_UNK8;
typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
#define M2C_ERROR(desc) (0)
#define M2C_CARRY 0
#define M2C_OVERFLOW(a) (0)
#endif

M2C_UNK D_002AD390(void *);                         /* extern */
M2C_UNK func_001D1900(void *);                      /* extern */
M2C_UNK func_001D2040(s32, M2C_UNK);                /* extern */

void func_0021FE68(void *arg0, s32 arg1) {
    s32 temp_4;
    void *temp_16;
    void *var_16;

    temp_4 = M2C_FIELD(arg0, s32 *, 0x30);
    if (temp_4 != 0) {
        func_001D2040(temp_4, 3);
    }
    if (arg0 != NULL) {
        temp_16 = arg0 + 0x30;
        var_16 = temp_16 - 0xC;
        if (arg0 != temp_16) {
            do {
                func_001D1900(var_16);
                var_16 -= 0xC;
            } while (arg0 != var_16);
        }
    }
    if (arg1 & 1) {
        D_002AD390(arg0);
    }
}

/* machine draft (m2c), tried by autopilot */
#ifndef M2C_DEFINES
#define M2C_DEFINES
typedef s32 M2C_UNK;
typedef s8 M2C_UNK8;
typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
#define M2C_ERROR(desc) (0)
#define M2C_CARRY 0
#define M2C_OVERFLOW(a) (0)
#endif

M2C_UNK func_001D1FD0();                            /* extern */
extern M2C_UNK D_0047A870;

void *func_0021FD90(void *arg0, s32 arg1) {
    func_001D1FD0();
    M2C_FIELD(arg0, s32 *, 4) = arg1;
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_0047A870;
    return arg0;
}

typedef struct {void **begin,**end,**cap;} Vec;
typedef struct {Vec **begin,**end,**cap;} Outer;
void func_003F93CC(void*,void*,unsigned);
void func_0021F7D8(Outer*a,void*b){int idx=*(int*)((char*)b+92);if(idx>0){Vec**first=a->begin;if((unsigned)idx<(unsigned)(a->end-first)){Vec*v=first[idx];if(v){void**p=v->begin,**end=v->end;while(p!=end){if(*p==b){void**last=v->end;void**next=p+1;if(next!=last)func_003F93CC(p,next,((s32)((u32)last-(u32)next)>>2)*4);v->end--;break;}p++;}}}}}
void *func_0021F6C8(Vec*a,int*b){int idx=*b;void**first;if(idx<=0||(first=a->begin,(unsigned)idx>=(unsigned)(a->end-first)))return 0;return first[idx];}
