#include <iostream>
#include <algorithm>
#include <vector>

#include "Shell.h"
using namespace std;



int x_width = 120; // width of console
vector<string> home_base = {
    R"(       / /         )",
    R"(      / /          )",
    R"(_____/ /___________)",
    R"(|   / /           |)",
    R"(|  / /   *     *  |)",
    R"(| / /=  /|\   *** |)",
    R"(|/ /    / \  *****|)"
};
vector<string> enemy_base = {
    R"(\ \                )",
    R"(_\ \_______________)",
    R"(| \ \             |)",
    R"(|  \ \     *      |)",
    R"(|   \ \=  /|\   * |)",
    R"(|    \ \  / \  ***|)"
};
vector<string> destroyed_base = {
    R"(  / %  ^           )",
    R"(  / \ #   KABOOM!  )",
    R"(| % /\ \=         /)",
    R"(| /  #\    >-->-* \)"
};



// Finds the longest row in a vector<string>
int find_max_length(const vector<string>& base) {
    size_t max_length = 0;
    for (const string& line : base) {
        if (line.length() > max_length) {
            max_length = line.length();
        }
    }
    return static_cast<int>(max_length);
}



void print_scene(const vector<string>& base1, const vector<string>& base2) {
    const int height_1 = static_cast<int>(base1.size());
    const int height_2 = static_cast<int>(base2.size());
    const int width_1 = find_max_length(base1);
    const int width_2 = find_max_length(base2);

    const int num_rows = max(height_1, height_2);
    const int height_disparity = abs(height_1 - height_2);

    for (int i = 0; i < num_rows; i++) {
        // print just the top of base1 if it is taller
        if (height_1 > height_2 && i < height_disparity) {
            cout << base1[i] << string(x_width - width_1, ' ') << endl;
        }

        // print just the top of base2 if it is taller
        else if (height_2 > height_1 && i < height_disparity) {
            cout << string(x_width - width_2, ' ') << base2[i] << endl;
        }

        // print remaining part of both bases
        else {
            cout << base1[i] << string(x_width - width_1 - width_2, ' ')
            << base2[i - height_disparity] << endl;
        }
    }

    cout << string(x_width, '-') << endl; // print ground
}



int main() {
    Shell shell(12, 0.5, 10, 45);
    cout << shell.fire() << endl;
    print_scene(home_base, enemy_base);
    print_scene(home_base, destroyed_base);
    return 0;
}
