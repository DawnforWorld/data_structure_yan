Status InOrderTraverse_Thr(BiThrTree T, Status (*Visit)(ElemType)) {
   // �㷨6.5
   // Tָ��ͷ��㣬ͷ��������lchildָ�����㣬ͷ��������lchildָ��
   // ������������һ����㡣���������������������ʾ�Ķ�����T��
   // ��ÿ������Ԫ�ص��ú���Visit��
   BiThrTree p;
   p = T->lchild;                            // pָ������
   while (p != T) {                          // �������������ʱ��p==T
      while (p->LTag==Link) p = p->lchild;
      if (!Visit(p->data)) return ERROR;     // ������������Ϊ�յĽ��
      while (p->RTag==Thread && p->rchild!=T) {
         p = p->rchild;  Visit(p->data);     // ���ʺ�̽��
      }
      p = p->rchild;  // p��������������
   }
   return OK;
} // InOrderTraverse_Thr
                               