//
// Created by libin on 2021/8/14.
//
#include <cstdio>
#define MaxSize 50
#define ElemType int

typedef struct SqList{
    ElemType data[MaxSize];
    int length=0;
} SqList;

bool ListInsert(SqList & L, int i, ElemType e)
{
    if (i<1 || i>L.length+1)
        return false;
    if (L.length>=MaxSize)
        return false;
    for (int j=L.length; j>=i; --j)
        L.data[j] = L.data[j-1];
    L.data[i-1] = e;
    L.length++;
    return true;
}

void ListPrint(const SqList & L)
{
    printf("SqList length: %d\n", L.length);
    for(int i=0; i<L.length-1; ++i)
        printf("%d -> ", L.data[i]);
    printf("%d\n", L.data[L.length-1]);
    // printf("\n");
}


int main(){
    SqList m_sqlist;
    ListInsert(m_sqlist, 1, 1);
    ListInsert(m_sqlist, 2, 2);
    ListInsert(m_sqlist, 3, 3);
    ListInsert(m_sqlist, 4, 4);
    ListPrint(m_sqlist);
    return 0;
}

