#include <iostream>
#include <vector>
#include <string>

class Device {
private:

std::string device_data;               // Поточні дані
    std::vector<std::string> history;      // Історія

public:
    // Метод для оновлення даних
    void updateData(const std::string& new_data) {
        if (!device_data.empty()) {
            history.push_back(device_data); // Збереження попереднього значення
        }
        device_data = new_data;
        std::cout << "Дані оновлено.\n";
    }

    // Метод для перегляду історії
    void viewHistory() const {
        if (history.empty()) {
            std::cout << "Історія порожня.\n";
        } else {
            std::cout << "Історія змін:\n";
            for (size_t i = 0; i < history.size(); ++i) {
                std::cout << i + 1 << ". " << history[i] << "\n";
            }
        }
    }

    // Перегляду поточних даних
    void viewCurrentData() const {
        std::cout << "Поточні дані: " << device_data << "\n";
    }
};

int main() {
    Device device;
    int choice;
    std::string input;

    do {
        std::cout << "\n=== Меню ===\n";
        std::cout << "1. Оновити дані\n";
        std::cout << "2. Перегляд історію змін\n";
        std::cout << "3. Перегляд поточні дані\n";
        std::cout << "0. Вихід\n";
        std::cout << "Ваш вибір: ";
        std::cin >> choice;

        switch (choice) {
        case 1:
            std::cout << "Введіть нові дані: ";
            std::cin.ignore(); // Очищення буфера після введення числа
            std::getline(std::cin, input);
            device.updateData(input);
            break;
        case 2:
            device.viewHistory();
            break;
        case 3:
            device.viewCurrentData();
            break;
        case 0:
            std::cout << "До побачення!\n";
            break;
        default:
            std::cout << "Невірний вибір. Спробуйте ще раз.\n";
        }
    } while (choice != 0);

    return 0;
}
