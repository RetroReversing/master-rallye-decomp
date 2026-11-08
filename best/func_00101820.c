extern s32 func_00193B60(void);
extern s32 func_001918C0(s32);
extern s32 func_00191908(s32);
extern s32 func_00191630(s32);
extern void func_00101A10(s32,s32,s32);
extern void func_00101B80(s32,s32,s32);
extern void func_00101D70(s32,s32,s32);
extern void func_00109440(s32,s32,s32);
extern s32 func_0010B1C8(void);
extern void func_00192BE0(s32,s32,s32);
extern s32 func_001968D0(s32,s32);
extern s32 func_00196E10(void);
extern void func_001D4040(void*,void*);
extern s32 func_001E3598(s32,void*);
extern s32 func_001E4280(void);
extern void func_001935F8(s32,s32,s32);
extern void func_00191F10(s32,s32);
extern char D_00444B00[],D_00444B30[];
void func_00101820(s32 arg0) {
    s32 temp_16;
    s32 temp_16_2;
    s32 temp_16_3;
    s32 temp_18;
    s32 temp_19;
    s32 temp_20;
    s32 temp_23;
    s32 temp_30;
    s32 temp_3;
    s32 temp_5;
    s32 var_17;
    s32 var_22;
    u32 sp[4];

    var_17 = 0;
    temp_30 = func_001918C0(func_00193B60());
    temp_20 = func_00191908(func_00193B60());
    temp_23 = func_00191630(func_00193B60());
    if (temp_30 > 0) {
        do {
            func_00101A10(arg0, var_17, temp_20);
            if(temp_23==5)goto special;
if(temp_23==6)goto special;
if(temp_23!=8)goto normal;
special: {
                func_00101D70(arg0, var_17, temp_20);
                temp_16 = func_00193B60();
                func_00192BE0(temp_16, var_17, func_001968D0(func_00196E10(), var_17));
                goto after;
            }
normal: {
                func_00101B80(arg0, var_17, temp_20);
            }
after:
            var_22 = 0;
            temp_16_2 = func_001E4280();
            func_001D4040(sp, D_00444B00);
            temp_19 = func_001E3598(temp_16_2, sp);
            temp_18 = (func_00191630(func_00193B60()) == 7);
            temp_16_3 = func_001E4280();
            func_001D4040(sp, D_00444B30);
            temp_3 = func_001E3598(temp_16_3, sp);
            var_22=(var_17<temp_20)&&!temp_19&&!temp_18&&!temp_3;
            temp_5 = var_17;
            var_17 += 1;
            func_00109440(func_0010B1C8(), temp_5, var_22);
        } while (var_17 < temp_30);
    }
    func_001935F8(func_00193B60(), 0, 0);
    func_00191F10(func_00193B60(), 0);
}
