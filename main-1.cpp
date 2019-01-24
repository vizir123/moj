#include <iostream>
using namespace std;

int brojevi[] = {1,4,5,76,23,65,2,1,345,76,34,2};
static int brojBrojeva = 12;
static int trazeniBroj = 23;

int pronadjenoBrojeva(int broj);

int main(int argc, const char * argv[]) {
    cout << "Pronadjeno je " << pronadjenoBrojeva(trazeniBroj) << " brojeva " << trazeniBroj << endl;
    return 0;
}

int pronadjenoBrojeva(int broj) {
    int vrijednost = 0;
    for (int i = 0; i < brojBrojeva; i++) {
        if (brojevi[i] == broj) {
            vrijednost++;
        }
    }
    return vrijednost;
}
