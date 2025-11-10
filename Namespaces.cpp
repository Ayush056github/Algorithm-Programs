//

#include<iostream>
using namespace std;

namespace A
{
    int var = 20;
}

namespace B
{
    int var = 40;
}

int main() {
    int var = 50;
    
    cout<<var<<endl;

    cout<<A::var<<endl;

    cout<<B::var<<endl;
    return 0;
}
