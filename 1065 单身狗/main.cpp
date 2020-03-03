/*������ ��������couple[i] = j��ʾi�Ķ�����j��һ��ʼ������Ϊ����-1��
��������isExist��ʾĳ�˵Ķ����Ƿ��������ɶ��ϡ��������ݵ�ʱ��
����ÿһ��a��b����couple��a����Ϊb��b����Ϊa����ʾ������һ�ԡ�����ÿһ����Ҫ�жϵ��ˣ�����洢��guest�������棬
��������ǵ���ģ�Ҳ�����������couple[guest[i]] != -1����ô�ͽ��������isExist����Ϊ1��
��ʾ������Ķ���Ҳ�������Լ����������ɶԡ���������isExist��Ϊ1���ˣ�
������û�������ɶԵġ������е��˱��������һ������set���棬set��size���������������
set���������������������˵ĵ������С�
*/
#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
#include <cstdio>
using namespace std;

int main()
{
    int n, a, b, m;
    scanf("%d", &n);
    vector<int> couple(100000, -1);
    for(int i=0; i<n; i++) {
        scanf("%d%d", &a, &b);
        couple[a]=b;
        couple[b]=a;
    }
    scanf("%d", &m);
    vector<int> guest(m), isExist(100000);
    for(int i=0; i<m; i++) {
        scanf("%d", &guest[i]);
        if(couple[guest[i]]!=-1)
            isExist[couple[guest[i]]] = 1;
    }
    set<int> s;
    for(int i=0; i<m; i++) {
        if(!isExist[guest[i]])
            s.insert(guest[i]);
    }
    printf("%d\n", s.size());
    for(auto it = s.begin(); it!=s.end(); it++) {
        if(it != s.begin()) printf(" ");
        printf("%05d", *it);
    }

    return 0;
}
