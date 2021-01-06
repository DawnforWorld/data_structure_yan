DuLinkList GetElemP_DuL(DuLinkList va, int i) {
  // LΪ��ͷ���ĵ�������ͷָ�롣
  // ����i��Ԫ�ش���ʱ����ֵ����e������OK�����򷵻�ERROR
  DuLinkList p;
  p = va->next;   
  int j = 1;  // ��ʼ����pָ���һ����㣬jΪ������
  while (p!=va && j<i) {  //˳ָ�������ң�ֱ��pָ���i��Ԫ�ػ�pΪ��
    p = p->next;
    ++j;
  }
  if (p==va || j<i) return NULL;  // ��i��Ԫ�ز�����
  else return p;
} // GetElem_L

Status ListDelete_DuL(DuLinkList &L, int i, ElemType &e) {//�㷨2.19
  // ɾ����ͷ����˫��ѭ�����Ա�L�ĵ�i��Ԫ�أ�i�ĺϷ�ֵΪ1��i�ܱ���
  DuLinkList p;
  if (!(p = GetElemP_DuL(L, i)))  // ��L��ȷ����i��Ԫ�ص�λ��ָ��p
    return ERROR;                 // p=NULL, ����i��Ԫ�ز�����
  e = p->data;
  p->prior->next = p->next;
  p->next->prior = p->prior;
  free(p);    
  return OK;
} // ListDelete_DuL