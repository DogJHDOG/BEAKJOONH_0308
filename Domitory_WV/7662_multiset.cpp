//
// Created by junhy on 2023-03-20.
//
/*
#include <iostream>
#include <set>

using namespace std;

int main(void){


    int R;
    scanf("%d",&R);
    for(int i =0 ; i<R; i++){
        int T;
        scanf("%d",&T);

        multiset<int> ms;

        for(int j = 0; j<T; j++) {

            getchar();
            int k = 0;
            int c = 0;
            scanf("%c %d", &c, &k);

            if(c=='I'){
                ms.insert(k);
            }
            else {
                if(k==1&&ms.size()!=0) {
                    auto iter = ms.end();
                    iter--;
                    ms.erase(iter);                }
                else if(k==-1&&ms.size()!=0){
                    ms.erase(ms.begin());
                }
            }
        }

        if(ms.size()==0){
            printf("EMPTY\n");
        }

        else{
            auto iter = ms.end();
            iter--;
            cout << *iter << " " << *(ms.begin()) << "\n";
        }
    }

    return 0;
}*/
