extern void func_001D4040(void*,const char*),func_001E3D10(int,void*,int);extern float D_0040DA80,D_0040DA84;extern char D_00444840[];
typedef struct {int pad[3],active;float step,start,end,dx,dy;int moving,first;} O;
void func_00100368(O*p,int moving,float start,float end,float duration){int key[4],root;root=func_001E4280();func_001D4040(key,D_00444840);func_001E3D10(root,key,1);p->moving=moving;p->start=start;p->end=end;p->active=1;p->first=1;p->step=((end-start)/duration)/30.0f;p->dx=(D_0040DA80/duration)/30.0f;p->dy=(D_0040DA84/duration)/30.0f;}
