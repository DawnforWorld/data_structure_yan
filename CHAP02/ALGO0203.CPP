Status InitList_Sq(SqList &L) {  // �㷨2.3
  // ����һ���յ����Ա�L��
  L.elem = (ElemType *)malloc(LIST_INIT_SIZE*sizeof(ElemType));
  if (!L.elem) return OK;        // �洢����ʧ��
  L.length = 0;                  // �ձ�����Ϊ0
  L.listsize = LIST_INIT_SIZE;   // ��ʼ�洢����
  return OK;
} // InitList_Sq