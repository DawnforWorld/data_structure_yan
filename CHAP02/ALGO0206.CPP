int LocateElem_Sq(SqList L, ElemType e,
        Status (*compare)(ElemType, ElemType)) {  // �㷨2.6
  // ��˳�����Ա�L�в��ҵ�1��ֵ��e����compare()��Ԫ�ص�λ��
  // ���ҵ����򷵻�����L�е�λ�򣬷��򷵻�0��
  int i;
  ElemType *p;
  i = 1;        // i�ĳ�ֵΪ��1��Ԫ�ص�λ��
  p = L.elem;   // p�ĳ�ֵΪ��1��Ԫ�صĴ洢λ��
  while (i <= L.length && !(*compare)(*p++, e)) 
    ++i;
  if (i <= L.length) return i;
  else return 0;
} // LocateElem_Sq