int Index(SString S, SString T, int pos) {  // �㷨4.5
   // �����Ӵ�T������S�е�pos���ַ�֮���λ�á�
   // �������ڣ�����ֵΪ0��
   // ���У�T�ǿգ�1��pos��StrLength(S)��
   int i = pos;
   int j = 1;
   while (i <= S[0] && j <= T[0]) {
      if (S[i] == T[j]) {  // �����ȽϺ���ַ�
         ++i;
         ++j; 
      } else {  // ָ��������¿�ʼƥ��
         i = i-j+2;
         j = 1; 
      }      
   }
   if (j > T[0]) return i-T[0];
   else return 0;
} // Index