#pragma once

#include <algorithm>  // copy
#include <cassert>    // assert
#include <stdexcept>  // out_of_range
#include <string>     // to_string

namespace itis {

/**
 * Структура данных "массив переменной длины".
 * Является одной из реализаций ADT Abstract List.
 */
struct ArrayList {
 public:
  // default constructor
  ArrayList() : capacity_{kInitCapacity}, data_{new char[kInitCapacity]} {}

  /**
   * Создание массива переменной длины.
   *
   * @param capacity - начальная емкость массива.
   */
  explicit ArrayList(int capacity) {
    // To Do ...
  }

  ~ArrayList() {
    // To Do ...
  }

  /**
   * Добавление элемента в конец массива.
   * Сложность операции - O(1) или O(n) в зависимости от необходимости увеличения размеров массива.
   *
   * При недостаточной емкости (capacity) массива осуществляется его расширение с сохранением предыдущих элементов.
   * @param element - значение элемента
   */
  void PushBack(char element) {
    // To Do ...
  }

  /**
   * Вставка элемента в массив по индексу.
   * Сложность операции - O(n).
   *
   * Все элементы, находящиеся на позиции вставки и справа от нее, сдвигаются на единицу вправо.
   * При недостаточной емкомсти (capacity) массива осуществляется его расширение с сохранением предыдущих элементов.
   *
   * @param index - позиция для вставки
   * @param element - значение элемента
   *
   * @throws выбрасывает ошибку out_of_range при работе с некорректным индексом.
   */
  void Insert(int index, char element) {
    check_out_of_range(index);
    // To Do ...
  }

  /**
   * Удаление элемента массива по индексу.
   * Сложность операции - O(n).
   *
   * Все элементы, стоящие справа от удаленного элемента сдвигаются влево на единицу.
   *
   * @param index - индекс удаляемого элемента
   * @return значение удаленного элемента
   *
   * @throws выбрасывает ошибку out_of_range при работе с некорректным индексом.
   */
  char Remove(int index) {
    check_out_of_range(index);
    // To Do ...
    return {};
  }

  /**
   * Удаление всех элементов массива.
   * Сложность операции - O(1).
   *
   * Емкость (capacity) массива остается прежним.
   */
  void Clear() {
    // To Do ...
  }

  /**
   * Получение элемента массива по индексу.
   * Сложность операции - O(1).
   *
   * @param index - индекс элемента
   * @return значение элемента по индексу
   *
   * @throws выбрасывает ошибку out_of_range при работе с некорректным индексом.
   */
  char Get(int index) const {
    check_out_of_range(index);

    // To Do ...
    return {};
  }

  /**
   * Вычисление индекса элемента.
   * Сложность операции - O(n).
   *
   * @param element - значение элемента
   * @return индекс элемента или -1 при остутствии элемента в массиве
   */
  int IndexOf(char element) const {
    // To Do ...
    return {};
  }

  /**
   * Проверка наличия элемента в массиве.
   * Сложность операции - O(n).
   *
   * @param element - значение элемента
   * @return при наличии элемента - true, иначе - false
   */
  bool Contains(char element) const {
    // To Do ...
    return {};
  }

  /**
   * Проверка наличия хотя бы одного элемента в массиве.
   * Сложность операции - O(1).
   *
   * @return при наличии хотя бы одного элемента - true, иначе - false
   */
  bool IsEmpty() const {
    // To Do ...
    return {};
  }

  int GetSize() const {
    return size_;
  }

  int GetCapacity() const {
    return capacity_;
  }

 private:
  /**
   * Увеличение емкости массива.
   * Сложность операции - O(n).
   *
   * Элементы массива должны сохраниться на своих позициях.
   *
   * @param new_capacity - новая емкость массива (должна быть больше предыдущей)
   */
  void resize(int new_capacity) {
    assert(new_capacity > capacity_);

    // To Do ...
  }

 public:
  static constexpr int kInitCapacity = 10;
  static constexpr int kCapacityIncreaseCoefficient = 10;

 private:
  int size_{0};      // кол-во элементов
  int capacity_{0};  // емоксть
  char *data_{nullptr};

 private:
  void check_out_of_range(int index) const;
};

// определение методов

void ArrayList::check_out_of_range(int index) const {
  if (index >= size_) {
    throw std::out_of_range("index is out of range: " + std::to_string(size_));
  }
}

}  // namespace itis
