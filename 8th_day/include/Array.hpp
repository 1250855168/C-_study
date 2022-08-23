#include <iostream>
#include <string>

using namespace std;

template <class T>
class Array
{
private:
    T *date;
    int size;
    int capacity;

public:
    /**
     * @brief 初始化构造
     *
     * @param capacity
     */
    Array(int capacity);

    /**
     * @brief 深拷贝构造
     *
     * @param array
     */
    Array(const Array &array);

    /**
     * @brief 尾插法添加元素
     *
     * @param t
     */
    void push_back(const T &t);

    /**
     * @brief 尾部删除元素
     *
     */
    void pop_back();

    /**
     * @brief 重载赋值运算符
     *
     * @param array
     * @return T&
     */
    T &operator=(const Array &array);

    /**
     * @brief 重载【】运算符
     *
     * @param x
     * @return T&
     */
    T &operator[](int x);

    /**
     * @brief  析构函数 释放空间
     *
     */
    ~Array();
};

template <class T>
Array<T>::Array(int capacity)
{
    this->capacity = capacity;
    this->size = 0;
    this->date = new T[this->capacity];
}

template <class T>
Array<T>::Array(const Array &array)
{
    this->capacity = array.capacity;
    this->size = array.size;
    this->date = new T[array.capacity];
    if (array.size != 0)
    {
        for (size_t i = 0; i < array.size; i++)
        {
            this->date[i] = array.date[i];
        }
    }
}

template <class T>
void Array<T>::pop_back()
{
    if (this->size != 0)
    {
        this->size--;
    }
}

template <class T>
void Array<T>::push_back(const T &t)
{
    if (this->size != this->capacity)
    {
        this->date[this->size] = t;
        this->size++;
    }
}

template <class T>
T &Array<T>::operator=(const Array &array)
{
    if (this->capacity != 0)
    {
        delete[] this->date;
        this->date = nullptr;
    }
    this->capacity = array.capacity;
    this->size = array.size;
    this->date = new T[array.capacity];
    if (array.size != 0)
    {
        for (size_t i = 0; i < array.size; i++)
        {
            this->date[i] = array.date[i];
        }
    }
    return this->date[0];
}

template <class T>
T &Array<T>::operator[](int x)
{
    if (x >= 0 && x < this->size)
    {
        return this->date[x];
    }
    return this->date[0];
}

template <class T>
Array<T>::~Array()
{
    delete[] this->date;
    this->date = nullptr;
}
