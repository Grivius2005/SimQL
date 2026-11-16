#ifndef SIMQL_FIELD_HPP
#define SIMQL_FIELD_HPP

template<typename T>
class Field
{
    public:
        Field() = default;
        explicit Field(T data) : _data(data) {}
        void setData(T data)
        {
            _data = data;
        }
        T getData() const
        {
            return _data;
        }

    private:
        T _data;
};



#endif //SIMQL_FIELD_HPP