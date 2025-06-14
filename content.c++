#include <iostream>
#include <fstream>
#include <cctype>

int main() {
    std::ifstream fin("input.txt");
    std::ofstream fout("output.txt");
    char ch;

    if (!fin || !fout) {
        std::cerr << "Error opening file.\n";
        return 1;
    }

    while (fin.get(ch)) {
        fout.put(toupper(ch));
    }

    fin.close();
    fout.close();
    return 0;
}
