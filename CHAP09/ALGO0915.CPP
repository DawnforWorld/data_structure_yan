RECORD *SearchDLTree(DLTree T, KeysType K) {  // �㷨9.15
   // �ڷǿ�˫����T�в��ҹؼ��ֵ���K�ļ�¼��
   DLTree p;
   int i;
   p = T->first;   i=0;     // ��ʼ��
   while (p && i<K.num) {
      while (p && p->symbol != K.ch[i])  // ���ҹؼ��ֵĵ�iλ
          p = p->next; 
      if (p && i<K.num-1) p = p->first;  // ׼��������һλ
      ++i;
   } // ���ҽ���
   if (!p) return NULL;     // ���Ҳ��ɹ�
   else return p->infoptr;  // ���ҳɹ�
} //Search DLTree