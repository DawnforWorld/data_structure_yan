void Adjust(LoserTree &ls, int s) {  // �㷨11.2
  // �ش�Ҷ�ӽ��b[s]�������ls[0]��·��������������
  int t, temp;
  t = (s+k)/2;   // ls[t]��b[s]��˫�׽��
  while (t>0) {
    if (b[s].key > b[ls[t]].key) {
      temp = s;  s = ls[t];  ls[t] = temp;   // sָʾ�µ�ʤ��
    }
    t /= 2;
  }
  ls[0] = s;
} // Adjust