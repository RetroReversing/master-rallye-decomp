extern s32 func_00297500(void),func_002971F8(s32),func_0021F4B0(void),func_002A2458(void);
extern void func_001D4040(void*,const char*),func_001E3EC0(s32,void*,s32),func_001E33C8(s32,void*,s32),func_0021EDA0(s32,s32),func_001D2458(void*,const char*),func_00100FA0(void*,s32,s32),func_001D2900(void*,const char*),D_002AD390(void*),func_002A1D30(s32,void*,s32,s32);
extern s32*func_0021E9C0(s32,void*);
extern char D_004448E8[],D_004448F8[],D_00444908[],D_00444918[],D_00444A60[],D_004474F8[];
s32 func_0011DFB8(s32*p){union {s32 key[4];char*str;} local;char*tmp;s32 m;s32*q;if((u32)(func_002971F8(func_00297500())-4)>=2)p[3]=1;if(p[1]!=-1){
{s32 manager0=func_001E4280();func_001D4040(local.key,D_004448E8);func_001E3EC0(manager0,local.key,0);}
{s32 manager1=func_001E4280();func_001D4040(local.key,D_004448F8);func_001E3EC0(manager1,local.key,0);}
{s32 manager2=func_001E4280();func_001D4040(local.key,D_00444908);func_001E3EC0(manager2,local.key,0);}
{s32 manager3=func_001E4280();func_001D4040(local.key,D_00444918);func_001E3EC0(manager3,local.key,0);}
{s32 manager4=func_001E4280();func_001D4040(local.key,D_004448E8);func_001E33C8(manager4,local.key,0);}
{s32 manager5=func_001E4280();func_001D4040(local.key,D_004448F8);func_001E33C8(manager5,local.key,0);}
{s32 manager6=func_001E4280();func_001D4040(local.key,D_00444908);func_001E33C8(manager6,local.key,0);}
{s32 manager7=func_001E4280();func_001D4040(local.key,D_00444918);func_001E33C8(manager7,local.key,0);}
func_0021EDA0(func_0021F4B0(),0);{s32 manager=func_0021F4B0();func_001D4040(local.key,D_004474F8);q=func_0021E9C0(manager,local.key);}if(q){s32 v=q[1];if(v){func_001D2458(&local.str,D_00444A60);func_00100FA0(&tmp,v,p[1]);func_001D2900(&local.str,tmp);D_002AD390(tmp);{s32 manager=func_002A2458();func_001D4040(&tmp,local.str);func_002A1D30(manager,&tmp,0,1);}D_002AD390(local.str);}}p[1]=-1;}return 0;}
