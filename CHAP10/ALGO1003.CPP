void Arrange(SLinkList &SL) {  // �㷨10.3
  // ���ݾ�̬����SL�и�����ָ��ֵ������¼λ�ã�
  // ʹ��SL�м�¼���ؼ��ַǵݼ�����˳������
  SLNode temp;
  int i;
  int p,q;
  p = SL.r[0].next;  // pָʾ��һ����¼�ĵ�ǰλ��
  for (i=1; i<SL.length; ++i) { 
    // SL.r[1..i-1]�м�¼�Ѱ��ؼ����������У�
    // ��i����¼��SL�еĵ�ǰλ��Ӧ��С��i
    while (p<i)  // �ҵ���i����¼������pָʾ����SL�е�ǰλ��
      p = SL.r[p].next;
    q = SL.r[p].next; // qָʾ��δ�����ı�β
    if (p!= i) {
      temp=SL.r[p];
      SL.r[p]=SL.r[i];
      SL.r[i]=temp;
      SL.r[i].next=p; // ָ�����ߵļ�¼��ʹ���Ժ����whileѭ���һ�
    }
    p=q;              // pָʾ��δ�����ı�β��Ϊ�ҵ�i+1����¼��׼��
  }
} // Arrange