void MergeList_L(LinkList &La, LinkList &Lb, LinkList &Lc) {
  // �㷨2.12
  // ��֪�������Ա�La��Lb��Ԫ�ذ�ֵ�ǵݼ����С�
  // �鲢La��Lb�õ��µĵ������Ա�Lc��Lc��Ԫ��Ҳ��ֵ�ǵݼ����С�
  LinkList pa, pb, pc;
  pa = La->next;    pb = Lb->next;
  Lc = pc = La;             // ��La��ͷ�����ΪLc��ͷ���
  while (pa && pb) {
    if (pa->data <= pb->data) {
      pc->next = pa;   pc = pa;   pa = pa->next;
    }
    else { pc->next = pb;   pc = pb;   pb = pb->next; }
  }
  pc->next = pa ? pa : pb;  // ����ʣ���
  free(Lb);                 // �ͷ�Lb��ͷ���
} // MergeList_L