// #include<iostream>

// using namespace std;
// int main(){
//     enum Meal{brekfast,lunch,dinner};
//     cout<<brekfast<<endl;
//     cout<<dinner<<endl;
//     cout<<lunch<<endl;
//     Meal m1=brekfast;
//     cout<<m1;
//     return 0;
// }



// #include<iostream>

// using namespace std;

// enum week{Mon,Tue,Wed,Thur,Fri,Sat,Sun};

// int main(){
//     enum week day;
//     day=Wed;
//     cout<<day;
//     return 0;
// }


#include<iostream>

using namespace std;
enum year{Jan, Feb,Mar,Apr,May,Jun,Jul,Aug,Sep,Oct,Nov,Dec};
int main(){
    int i;
    for (i=Jan;i<=Dec;i++){
        cout<<i<<endl;
    }

    return 0;
}