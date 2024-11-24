#include <vector>
#include <iostream>
#include <string>

using namespace std;

class Solution {
public:
    bool isPossibleToRearrange(string s, string t, int k) {
        int n = s.size();

        // Verificar si es posible dividir s en k subcadenas de igual longitud
        if (n % k != 0) return false;

        int len = n / k; // Tamaño de cada subcadena

        // Dividir s y t en k subcadenas de longitud igual
        vector<string> s_substrings, t_substrings;

        for (int i = 0; i < n; i += len) {
            s_substrings.push_back(s.substr(i, len));
            t_substrings.push_back(t.substr(i, len));
        }

        // Ordenar las subcadenas para comprobar si se pueden reorganizar
        sort(s_substrings.begin(), s_substrings.end());
        sort(t_substrings.begin(), t_substrings.end());

        // Verificar si las subcadenas coinciden después de reordenarlas
        return s_substrings == t_substrings;
    }
};

int main(){
    return 0;
}