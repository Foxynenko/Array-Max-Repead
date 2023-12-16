#include <iostream>
#include <vector>

using namespace std;

int max_ones(int nums[], int nums_length) {
    // Початковий максимум
    int max_ones = 0;

    // Початковий лічильник
    int ones_count = 0;

    // Перебираємо масив
    for (int i = 0; i < nums_length; i++) {
        // Якщо елемент дорівнює 1, збільшуємо лічильник
        if (nums[i] == 1) {
            ones_count++;
        }
        // Якщо лічильник більше максимального, оновлюємо максимум
        if (ones_count > max_ones) {
            max_ones = ones_count;
        }
        // Якщо елемент дорівнює 0, обнулюємо лічильник
        if (nums[i] == 0) {
            ones_count = 0;
        }
    }

    // Повертаємо максимум
    return max_ones;
}

int main() {
    int nums[] = { 1, 1, 1, 0, 1, 1, 0, 1 };
    int nums_length = sizeof(nums) / sizeof(nums[0]);

    int max_one = max_ones(nums, nums_length);

    cout << "Max 1: " << max_one << endl;

    return 0;
}
