#include "Catch2/src/catch2/catch_test_macros.hpp"
#include "Catch2/src/catch2/catch_session.hpp"
#include "List.h"

TEST_CASE("Function_Empty", "[Empty]")
{
    List L;
    CHECK(L.Empty());
    L.PushFront(1);
    CHECK(!L.Empty());
    L.PopFront();
    CHECK(L.Empty());

    };

TEST_CASE("Function_Size", "[Size]") {
    List L;
    CHECK(L.Size() == 0);
    L.PushBack(5);
    CHECK(L.Size() == 1);
    L.PushBack(6);
    CHECK(L.Size() == 2);
    L.PopBack();
    L.PopBack();
    CHECK(L.Size() == 0);
};
TEST_CASE("Function_Clear", "[Clear]") {
    List L;
    L.PushBack(5);
    L.PushBack(6);
    L.PushBack(7);
    L.Clear();
    CHECK(L.Size() == 0);

};

int main()
{

    return Catch::Session().run();
}