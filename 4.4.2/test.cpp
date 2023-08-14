#include "Catch2/src/catch2/catch_test_macros.hpp"
#include "Catch2/src/catch2/catch_session.hpp"
#include "List.h"

TEST_CASE("Function_PushBack", "[PushBack]")
{
    List L;
    CHECK(L.Empty());
    L.PushBack(1);
    CHECK(L.Size() == 1);
    L.PushBack(2);
    L.PushBack(3);
    CHECK(L.Size() == 3);

    };

TEST_CASE("Function_PushFront", "[PushFront]")
{
    List L;
    CHECK(L.Empty());
    L.PushFront(1);
    CHECK(L.Size() == 1);
    L.PushFront(2);
    L.PushFront(3);
    CHECK(L.Size() == 3);

};

TEST_CASE("Function_PopBack", "[PopBack]")
{
    List L;
    L.PushBack(1);
    L.PushBack(2);
    L.PushBack(3);
    CHECK(L.Size() == 3);
    L.PopBack();
    CHECK(L.Size() == 2);
    L.PopBack();
    L.PopBack();
    CHECK(L.Empty());
};

TEST_CASE("Function_PopFront", "[PopFront]")
{
    List L;
    L.PushFront(1);
    L.PushFront(2);
    L.PushFront(3);
    CHECK(L.Size() == 3);
    L.PopFront();
    CHECK(L.Size() == 2);
    L.PopFront();
    L.PopFront();
    CHECK(L.Empty());
};
int main()
{

    return Catch::Session().run();
}