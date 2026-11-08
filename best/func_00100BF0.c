extern void func_001D4040(void*,const char*);extern s32 func_001E3598(s32,void*);extern s32 func_00193B60(void);extern void func_00191B08(s32,s32);extern s32 func_00194C40(void);extern void func_00193D98(s32,s32);extern void func_00101018(s32);extern void func_00193C10(s32,s32);extern s32 func_00191630(s32);extern void func_00193E28(s32,s32);extern void func_001E3EC0(s32,void*,s32);extern void func_001E33C8(s32,void*,s32);extern s32 func_00191710(s32);extern void func_001D2458(void*,s32);extern void func_00191BB8(s32,void*);extern void D_002AD390(s32);extern s32 func_002A2458(void);extern void func_002A1D30(s32,void*,s32,s32);extern s32 func_001189C0(void);
extern char D_00444B00[],D_00444B18[],D_00444B30[],D_00444B48[],D_00444B58[],D_00444B70[],D_00444B88[];
static inline void*key(void*p,const char*s){func_001D4040(p,s);return p;}
void func_00100BF0(s32 arg0){
u32 buf[4],b1[4],b2[4];s32 t17,t16,t2,t2b,t18,thi,var16;char*p5;u32*temp;
if(func_001E3598(func_001E4280(),key(buf,D_00444B00))==1)func_00191B08(func_00193B60(),14);
func_00193D98(func_00194C40(),0);func_00101018(arg0);func_00193C10(func_00194C40(),0);
t2=func_00191630(func_00193B60());
switch(t2){case 5:case 6:case 7:case 8:if(func_001E3598(func_001E4280(),key(buf,D_00444B18))==0)func_00193E28(func_00194C40(),11);else goto block8;
break;default:if(func_001E3598(func_001E4280(),key(buf,D_00444B18))){if(func_001E3598(func_001E4280(),key(b1,D_00444B30))){
block8:func_00193E28(func_00194C40(),5);}else func_00193E28(func_00194C40(),25);}else func_00193E28(func_00194C40(),11);}
t2b=func_001E3598(func_001E4280(),key(buf,D_00444B00));
if(t2b==1){s32 registry,count;registry=func_001E4280();temp=key(b2,D_00444B48);count=func_001E3650(registry,(s32)temp);
registry=func_001E4280();func_001D4040(temp,D_00444B48);func_001E3EC0(registry,temp,count+1);
registry=func_001E4280();func_001D4040(temp,D_00444B48);func_001E33C8(registry,temp,0);
count%=3;
switch(count){case 0:default:func_002A1D30(func_002A2458(),key(temp,D_00444B58),1,1);break;case 1:func_002A1D30(func_002A2458(),key(temp,D_00444B70),1,1);break;case 2:func_002A1D30(func_002A2458(),key(temp,D_00444B88),1,1);break;}return;}t18=func_00193B60();temp=b2;t17=func_001189C0();{s32 idx=func_00191710(func_00193B60());s32 base=idx*44+t17;func_001D2458(temp,*(s32*)(base+0x5fc));}
func_00191BB8(t18,temp);D_002AD390(b2[0]);t18=func_002A2458();t17=func_001189C0();{s32 idx=func_00191710(func_00193B60());s32 base=idx*44+t17;func_001D4040(temp,*(char**)(base+0x5fc));}func_002A1D30(t18,temp,1,1);}
