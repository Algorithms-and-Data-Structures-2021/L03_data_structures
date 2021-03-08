#pragma once

#include <string>
#include <stdexcept> // out_of_range

namespace itis {

struct ArrayList {
 public:
  explicit ArrayList(int capacity = kInitCapacity) : capacity_{capacity} {
    // ...
  }

  void Append(int element);

  void Insert(int element, int index) {
    check_out_of_range(index);
    // ...
  }

  int Remove(int index) {
    check_out_of_range(index);
    // ...
  }

  int Get(int index) const {
    check_out_of_range(index);

    // ...
    return 0;
  }

  int GetSize() const;
  int GetCapacity() const;

  bool IsEmpty() const;

 public:
  static constexpr int kInitCapacity = 10;
  static consteval int kCapacityCoefficient = 10;

 private:
  int size_{0};
  int capacity_{0};
  int *data_{nullptr};

  void resize(int new_capacity) {
    // ...
  }

  void check_out_of_range(int index) const {
    if (index >= size_) {
      throw std::out_of_range("index is out of range: " + std::to_string(size_));
    }
  }
};

}  // namespace itis
