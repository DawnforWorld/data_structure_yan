void InsertSort(SqList &L) {  // �㷨10.1
  // ��˳���L��ֱ�Ӳ�������
  int i,j;
  for (i=2; i<=L.length; ++i)
    if (LT(L.r[i].key, L.r[i-1].key)) { 
      // "<"ʱ���轫L.r[i]���������ӱ�
      L.r[0] = L.r[i];                 // ����Ϊ�ڱ�
      for (j=i-1;  LT(L.r[0].key, L.r[j].key);  --j)
        L.r[j+1] = L.r[j];             // ��¼����
      L.r[j+1] = L.r[0];               // ���뵽��ȷλ��
    }
} // InsertSort