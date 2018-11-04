/*
 * created by Danil Kireev, PFUR NFI-201, 25.10.18, 09:00
 */
#include <cstdlib>
#include <ctime>
#include <fstream>
#include "Q.h"


/*
 *  №4
 *  Дан массив размера N.
 *  Найти номер и значение его последнего локального максимума
 *  (локальный максимум – это элемент, который больше любого из своих соседей).
 */

int main() {
    cout << "нахождение номера и значения его последнего локального максимума" << endl;
    int res, n_res;
    Q obj;
    obj.user_input();
    obj.print();
    res = obj.search(&n_res);
    if (n_res == -1) cout << "локальный максимум не найден";
    else {
        cout << "значение максимального локального максимума: " << res << endl;
        cout << "номер максимального локального максимума: " << n_res+1 << endl;
    }
    return 0;
}
