#include <iostream>
using namespace std;
int main() {
    const int N=5; int q[N], front=0, rear=0, count=0;
    auto enqueue=[&](int x){ if(count==N) cout<<"Full\n"; else { q[rear]=x; rear=(rear+1)%N; ++count; } };
    auto dequeue=[&](){ if(!count) cout<<"Empty\n"; else { cout<<"Removed "<<q[front]<<'\n'; front=(front+1)%N; --count; } };
    enqueue(11); enqueue(22); enqueue(33); dequeue(); enqueue(44);
    while(count) dequeue();
}