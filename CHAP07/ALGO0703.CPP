Status CreateDG(OLGraph &G) {  // �㷨7.3
  // ����ʮ�������洢��ʾ����������ͼG��G.kind=DG����
  //scanf(&G.vexnum, &G.arcnum, &IncInfo);  
  int i,j,k;
  char v1,v2;
  int IncInfo=0;
  struct ArcBox *p;
  scanfInit();  // �����ʼ��
  scanf(&G.vexnum, &G.arcnum, &IncInfo);  // �Զ������뺯��
  for (i=0; i<G.vexnum; ++i) {            // �����ͷ����
    scanf(&G.xlist[i].data);              // ���붥��ֵ
    G.xlist[i].firstin = G.xlist[i].firstout = NULL;  // ��ʼ��ָ��
  }
  for (k=0; k<G.arcnum; ++k) {  // �������������ʮ������
    scanf(&v1, &v2);            // ����һ������ʼ����յ�
    i=LocateVex(G, v1);  j=LocateVex(G, v2); // ȷ��v1��v2��G��λ��
		
    p=(ArcBox *) malloc (sizeof (ArcBox));     // �ٶ����㹻�ռ�
       // *p = {i, j, G.xlist[j].firstin, G.xlist[i].firstout, NULL} 
       // {tailvex, headvex, hlink, tlink, info}
    p->tailvex=i;
    p->headvex=j;
    p->hlink=G.xlist[j].firstin;
    p->tlink=G.xlist[j].firstout;
    G.xlist[j].firstin = G.xlist[i].firstout = p; 
        // ������뻡�ͳ�����ͷ�Ĳ���
    //if (IncInfo) Input(*p->info); // ���뻡���������Ϣ������!!!
  }
  return OK;
} // CreateDG