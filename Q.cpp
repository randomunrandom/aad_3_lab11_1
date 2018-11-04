//
// Created by danai on 10/25/18.
//

#include "Q.h"

Q::Q() {
    n=0;
    a=new int[n];
}

Q::Q(int nn) {
    n=nn;
    a=new int[n];
}

Q::Q(int nn, int *aa) {
    n=nn;
    a=new int[n];
    for (int i = 0; i < n; ++i) a[i]=aa[i];
}

void Q::user_input() {
    cout << "введите размер массива : ";
    cin >> n;
    while(n < 3) {
        cout << "введите положительное число больше 2: ";
        cin >> n;
    }
    a = new int(n);
    for (int i = 0; i < n; ++i) {
        cout << "введите " << i << " элемент: ";
        cin >> a[i];
    }
}

int Q::search(int *e) {
    *e = -1;
    int res=0;
    for (int i = n-2; i >= 1; --i) {
        if((a[i]>a[i-1]) && (a[i]>a[i+1])) {
            res = a[i];
            *e = i;
        }
    }
    return res;
}

void Q::print() {
    cout << "массив размера " << n << endl;
    cout << "[";
    for (int i = 0; i < n-1; ++i) cout << a[i] << ", ";
    cout << a[n-1] << "]" << endl;
}
