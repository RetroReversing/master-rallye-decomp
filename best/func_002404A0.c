#include "context.h"

extern f32 D_00479B58;
extern s32 func_002518D8(void *, void *);

void *func_002404A0(void *arg0, void *arg1)
{
    void *ret = NULL;
    s32 i = 0;
    void **arr;
    s32 count;
    f32 min;
    void *elem;
    void *p2;
    f32 val;

    arr = (void **)((u8 *)arg1 + 0);
    /* count = (end - begin) >> 2; arg1+0 is begin, arg1+4 is end */
    count = ((s32)*(void **)((u8 *)arg1 + 4) - (s32)*(void **)((u8 *)arg1 + 0)) >> 2;
    min = D_00479B58;
    if (count > 0) {
        do {
            elem = arr[i];
            p2 = (u8 *)elem + 8;
            i++;
            if (func_002518D8(elem, arg0) != 0) {
                val = *(f32 *)((u8 *)arg0 + 0) * *(f32 *)((u8 *)elem + 8) +
                      *(f32 *)((u8 *)arg0 + 4) * *(f32 *)((u8 *)p2 + 4) +
                      *(f32 *)((u8 *)arg0 + 8) * *(f32 *)((u8 *)p2 + 8) +
                      *(f32 *)((u8 *)p2 + 12);
                val = val < 0.0f ? -val : val;
                if (val < min) {
                    min = val;
                    ret = elem;
                }
            }
        } while (i < count);
    }
    return ret;
}
