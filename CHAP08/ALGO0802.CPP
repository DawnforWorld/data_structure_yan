WORD_b* AllocBuddy (FreeList &avail, int n) {  // �㷨8.2
  // avail[0..m]Ϊ�����ÿռ����nΪ��������������в�С��n�Ŀ��п飬
  // �������Ӧ�Ĵ洢�飬���������׵�ַ�����򷵻�NULL
  WORD_b *pa, *pre, *suc, *pi; 
  for (int k=0;
       k<=m && (!avail[k].first || avail[k].nodesize<n+1);
       ++k);                             // �����������Ҫ����ӱ�
  if (k>m) return NULL;                  // ����ʧ�ܣ�����NULL
  else {                                 // ���з���
    pa = avail[k].first;                 // ָ��ɷ����ӱ��ĵ�һ�����
    pre = pa->llink;   suc = pa->rlink;  // �ֱ�ָ��ǰ���ͺ��
    if (pa==suc) avail[k].first = NULL;  // �������ӱ���ɿձ�
    else {                               // ���ӱ�ɾȥ*pa���
      pre->rlink = suc;   suc->llink = pre;   avail[k].first = suc;
    }
    for (int i=1;  avail[k-i].nodesize>=n+1;  ++i) {
      pi = pa+(int)pow(2, (k-i));  pi->rlink = pi;  pi->llink = pi;
      pi->tag = 0;  pi->kval = k-i;  avail[k-i].first = pi;
    }   // ��ʣ��������Ӧ�ӱ�
    pa->tag = 1;  pa->kval = k-(--i);
  }
  return pa;
} // AllocBuddy