fn main() {
    // Обчислити площу прямокутників
    let red_area = 3 * 6; // 1 червоний
    let green_area = 10 * 2; // другий зелений
    let blue_area = 4 * 8; // третій синій
    
    // вся площа
    let total_area = red_area + green_area + blue_area;

    // площа з перетинами
    let occupied_area = red_area + blue_area + 2 + 8;

    // результат
    println!("Загальна площа: {}", total_area);
    println!("Зайнята площа: {}", occupied_area);
}
