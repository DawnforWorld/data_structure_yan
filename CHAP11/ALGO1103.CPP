void CreateLoserTree(LoserTree &ls) {  // �㷨11.3
  // ��֪b[0]��b[k-1]Ϊ��ȫ������ls��Ҷ�ӽ�����k���ؼ��֣�
  // �ش�Ҷ�ӵ�����k��·����ls������Ϊ������
  int i;
  b[k].key = MINKEY;                  // ��MINKEYΪ�ؼ��ֿ��ܵ���Сֵ
  for (i=0; i<k; ++i) ls[i] = k;      // ����ls��"����"�ĳ�ֵ
  for (i=k-1; i>=0; --i) Adjust(ls, i);  
      // ���δ�b[k-1],b[k-2],...,b[0]������������
} // CreateLoserTree