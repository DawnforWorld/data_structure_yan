void conversion (int Num) {  // �㷨3.1
    // �������������һ���Ǹ�ʮ������������ӡ��������ֵ�İ˽�����
    ElemType e;  
    SqStack S;
    InitStack(S);      // �����ջ
    while (Num) {
        Push(S, Num % 8);
        Num = Num/8;
    }
    while (!StackEmpty(S)) {
        Pop(S,e);
        printf ("%d", e);
    }
    printf("\n");
} // conversion