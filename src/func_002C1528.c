typedef struct {int handle,index,enabled;} Handler;
typedef struct {int count,intc,channel,pad;} Entry;
extern Entry D_00428DE0[];
extern void func_002C1460(void);
extern int AddIntcHandler_4(int,void(*)(void),int,Handler*),AddDmacHandler_4(int,void(*)(void),int,Handler*);
extern void func_002C16D8(Handler*,int,int);
void func_002C1528(Handler *p,int index,int enable,int first){
p->enabled=enable;p->index=index;
if(D_00428DE0[index].intc)
p->handle=AddIntcHandler_4(D_00428DE0[index].channel,func_002C1460,first?0:-1,p);
else p->handle=AddDmacHandler_4(D_00428DE0[index].channel,func_002C1460,first?0:-1,p);
D_00428DE0[p->index].count++;
if(enable)func_002C16D8(p,p->index,1);
}
