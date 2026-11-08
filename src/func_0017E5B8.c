typedef struct {s32 id;char*str;} Font;
typedef struct {s32 id,variant;char*str;} Entry;
extern Font D_00425CE8[];
extern Entry D_00412700[],D_004164F0[],D_0041A2E0[],D_0040E910[],D_0041E0D0[],D_00421E78[];
extern char D_0046F700[],D_0046F6E0[],D_0046F6D0[];
extern void func_003F9698(const char*,...);
Font *func_0017E5B8(void*unused,s32 id){Font*p=D_00425CE8;while(p->id!=-2){if(p->id==id)return p;++p;}return 0;}
Entry *func_0017E500(s32*a,s32 id,s32 variant){Entry*p;switch((u32)a[1]){case 1:p=D_00412700;break;case 4:p=D_004164F0;break;case 3:p=D_0041A2E0;break;case 2:p=D_0040E910;break;case 5:p=D_0041E0D0;break;case 0:default:p=D_00421E78;break;}while(p->id!=-2){if(p->id==id&&p->variant==variant)return p;++p;}return 0;}
char *func_0017E4B8(void*a,s32 b){Font*p=func_0017E5B8(a,b);if(p!=0)return p->str;func_003F9698(D_0046F700,b);return D_0046F6D0;}
char *func_0017E470(s32*a,s32 b,s32 c){Entry*p=func_0017E500(a,b,c);if(p)return p->str;func_003F9698(D_0046F6E0,b);return D_0046F6D0;}
