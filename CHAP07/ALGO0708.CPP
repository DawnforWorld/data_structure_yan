void DFSTree(Graph G, int v, CSTree &T) {  // �㷨7.8
  // �ӵ�v���������������ȱ���ͼG��������TΪ����������
  int w;
  CSTree p,q;
  bool first =TRUE;
  visited[v] = TRUE;   
  for (w=FirstAdjVex(G, v);  w!=-1;  w=NextAdjVex(G, v, w))
    if (!visited[w]) {
      p = (CSTree) malloc (sizeof (CSNode)); // ���亢�ӽ��
      p->data = GetVex(G,w);
      p->firstchild=NULL;
      p->nextsibling=NULL;
      if (first) {    // w��v�ĵ�һ��δ�����ʵ��ڽӶ���
        T->firstchild = p;  first = FALSE;   // �Ǹ������ӽ��
      } else {        // w��v������δ�����ʵ��ڽӶ���
        q->nextsibling = p;    // ����һ�ڽӶ�������ֵܽ��
      }
      q = p;
      DFSTree(G,w,q) ;
    }//if
} // DFSTree