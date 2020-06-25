#include <iostream>

using namespace std;

typedef int ElementType;
typedef struct LNode *PtrToLNode;

typedef struct LNode {
  ElementType Data;
  PtrToLNode Next;
} LNode, *List;

LNode L;
List PtrL = (List)malloc(sizeof(LNode));

void CreateLinkList(List PtrL, int N) {
  for (int i = 1; i <= N; i++) {
    List s = (List)malloc(sizeof(LNode));
    s->Data = i;
    s->Next = NULL;
    PtrL->Next = s;
    PtrL = s;
  }
}

int main() {
  int n, m;
  scanf("%d%d", &n, &m);
  List p = PtrL;
  /*创建一组结点数据依次从1到n的单向链表*/
  CreateLinkList(p, n);
  for (int i = 0; i < m; i++) {
    int a, b;
    scanf("%d%d", &a, &b);
    p = PtrL;
    int count = 0;
    /*删除学号为a的学生数据
    count为学生在队列中的序号*/
    while (p) {
      count++;
      if ((p->Next->Data) == a) {
        List s = p->Next;
        p->Next = s->Next;
        free(s);
        break;
      }
      p = p->Next;
    }
    /*b+=count,将b设定为在清除该学生数据后,学生要插入到此时第b个序号对应的结点之前*/
    b += count;
    count = 1;
    p = PtrL;
    /*记录第b个结点序号之前的结点的指针*/
    while (count != b) {
      p = p->Next;
      count++;
    }
    /*插入*/
    List s = (List)malloc(sizeof(LNode));
    s->Data = a;
    s->Next = p->Next;
    p->Next = s;
  }
  p = PtrL;
  while (p = p->Next) printf("%d ", p->Data);
  return 0;
}
