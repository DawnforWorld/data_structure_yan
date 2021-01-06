DuLinkList GetElemP_DuL(DuLinkList va, int i) {  
  // LΪ��ͷ���ĵ�������ͷָ�롣
  // ����i��Ԫ�ش���ʱ����ֵ����e������OK�����򷵻�ERROR
  DuLinkList p;
  p = va->next;   
  int j = 1;  // ��ʼ����pָ���һ����㣬jΪ������
  while (p!=va && j<i) { //˳ָ�������ң�ֱ��pָ���i��Ԫ�ػ�pΪ��
    p = p->next;
    ++j;
  }
  if (p==va && j<i) return NULL;  // ��i��Ԫ�ز�����
  else return p;
} // GetElem_L

Status ListInsert_DuL(DuLinkList &L, int i, ElemType e) { //�㷨2.18
  // �ڴ�ͷ����˫��ѭ�����Ա�L�ĵ�i��Ԫ��֮ǰ����Ԫ��e��
  // i�ĺϷ�ֵΪ1��i�ܱ���+1��
  DuLinkList p,s;
  if (!(p = GetElemP_DuL(L, i)))  // ��L��ȷ����i��Ԫ�ص�λ��ָ��p
    return ERROR;                 // p=NULL, ����i��Ԫ�ز�����
  if (!(s = (DuLinkList)malloc(sizeof(DuLNode))))
    return ERROR;
  s->data = e;
  s->prior = p->prior;
  p->prior->next = s;
  s->next = p;
  p->prior = s;
  return OK;
} // ListInsert_DuL