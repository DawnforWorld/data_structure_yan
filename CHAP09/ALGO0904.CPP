typedef  BiTree  SOSTree;  // ���Ų��������ö��������Ĵ洢�ṹ

Status CreateSOSTree(SOSTree &T, SSTable ST) {  // �㷨9.4
  // �������ST����һ�ô��Ų�����T��ST������Ԫ�غ���Ȩ��weight
  float sw[20];
  if (ST.length == 0) T = NULL;
  else {
    FindSW(sw, ST); // ���������ST�и�Ԫ�ص�weight�����ۼ�Ȩֵ��sw
    SecondOptimal(T, ST.elem, sw, 1, ST.length);
  }
  return OK;
} // CreateSOSTree