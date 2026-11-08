#define F(p,t,o) (*(t*)((char*)(p)+(o)))
typedef struct {int id,pad[3];} Key16;
typedef struct {char*data;int refs;} ResourceSlot;
typedef struct {int*indices;char pad[32];ResourceSlot*slots;} ResourceTable;
extern ResourceTable D_004262D0;
extern int *func_002DDA20(void);extern void func_002FD788(Key16*,int);extern char **func_002FD7B0(int,Key16*);extern void func_002FD7D0(Key16*,int,Key16*,int,int,int,int,int,int);
static inline void clearname(int id){if(id>=0){int*map=D_004262D0.indices;char*slots=(char*)D_004262D0.slots;char*p;int off;id<<=2;map=(int*)((char*)map+id);p=*(char**)(slots+(*map<<3));off=F(p,int,-16);if(off)p[off]=0;}}
static inline Key16 *keyinit(Key16*k,long id){k->id=id;if(id>=0){int*map=D_004262D0.indices;char*slots=(char*)D_004262D0.slots;char*entry=slots+(F(map,int,((u32)id<<2))<<3);F(entry,int,4)++;}return k;}
void func_003714E0(char*self){Key16 out,k1,k2;int manager,id;char**it;char*node;char***v;if(F(self,void*,68)){manager=*func_002DDA20();v=F(self,char***,68);it=v[0];if(it!=v[1]){do{node=*it;if(node){clearname(F(node,int,52));clearname(F(node,int,56));id=F(node,int,52);if(id>=0){func_002FD7D0(&out,manager,keyinit(&k1,id),F(node,int,60),1,0,0,0,0);F(node,int,220)=out.id;out.id=F(node,int,220);F(node,int,224)=F(*func_002FD7B0(manager,&out),int,432);}else{func_002FD788(&out,manager);F(node,int,220)=out.id;}id=F(node,int,56);if(id>=0){func_002FD7D0(&out,manager,keyinit(&k2,id),F(node,int,64),1,0,0,0,0);F(node,int,228)=out.id;out.id=F(node,int,228);F(node,int,232)=F(*func_002FD7B0(manager,&out),int,432);}else{func_002FD788(&out,manager);F(node,int,228)=out.id;}}it++;v=F(self,char***,68);}while(it!=v[1]);}}}
