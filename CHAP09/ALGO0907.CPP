Status DeleteBST(BiTree &T,  KeyType key) { // �㷨9.7 
  // ������������T�д��ڹؼ��ֵ���key������Ԫ��ʱ��
  // ��ɾ��������Ԫ�ؽ��p��������TRUE�����򷵻�FALSE
  if (!T) return FALSE;       // �����ڹؼ��ֵ���key������Ԫ��
  else {
    if (EQ(key, T->data.key))  // �ҵ��ؼ��ֵ���key������Ԫ��
      return Delete(T); 
    else if (LT(key, T->data.key)) return DeleteBST(T->lchild, key);
    else return DeleteBST(T->rchild, key);
  }
} // DeleteBST