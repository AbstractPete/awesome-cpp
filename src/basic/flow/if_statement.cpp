//
// Created by Arthur Abramov on 26.08.2017.
//


#include <gtest/gtest.h>
#include <iostream>

using namespace std;

TEST(Flow_Control, BooleanCasts){
    //let's check cast behaviour of boolean type
    // boolean type implicitly casts to int
    // false = 0 true = 1
    int positive = 100;
    int zero = 0;
    int negative = -100;

    bool positive_to_bool = positive;
    bool negative_to_bool = negative;
    bool zero_to_bool = zero;

    EXPECT_TRUE(positive_to_bool);
    EXPECT_TRUE(negative_to_bool);
    EXPECT_FALSE(zero_to_bool);
    
    // so let's check float type

    float positive_float =  3.14f;
    float negative_float = -3.14f;;
    float approx_zero = 0.0000001f;
    float zero_float = 0.0f;

    bool positive_float_to_bool = positive_float;
    bool negative_float_to_bool = negative_float;
    bool zero_float_to_bool = zero_float;
    bool approx_float_zero_to_bool = approx_zero;

    /*

    cout << endl << endl;
    cout << "positive float " << positive_float << " turns to boolean " << positive_float_to_bool << endl;
    cout << "negative float " << negative_float << " turns to boolean " << negative_float_to_bool << endl;
    cout << "zero float " << zero_float << " turns to boolean " << zero_float_to_bool << endl;
    cout << "approx zero float " << approx_zero << " turns to boolean " << approx_float_zero_to_bool << endl;
    cout << endl;

    */

    EXPECT_TRUE(positive_float_to_bool);
    EXPECT_TRUE(negative_float_to_bool);
    EXPECT_FALSE(zero_float_to_bool);
    EXPECT_TRUE(approx_float_zero_to_bool);
}

bool AND(bool x, bool y) {
    return x&&y;
}
bool OR(bool x, bool y) {
    return x||y;
}
bool NOT(bool x) {
    return !x;
}
/**
 * Exclusive OR
 * @param x
 * @param y
 * @return
 */
bool XOR(bool x, bool y){
    return (x || y) && !(x && y);
}
/**
 * Material Implication
 * @param x
 * @param y
 * @return
 */
bool IMPL(bool x, bool y){
    return !x || y;
}
/**
 * Equivalence
 * @param x
 * @param y
 * @return
 */
bool EQ(bool x, bool y){
    return !(XOR(x,y));
}
bool MIN(bool x, bool y) {
    return (x*y);
}
bool MAX(bool x, bool y){
    return x + y - (x * y);
}
bool NEGATE(bool x){
    return 1 - x;
}


TEST(Flow_Control, BoleanOperations) {
    // boolean operations are
    // AND(conjunction) denoted x∧y (in c++ x&&y)
    // OR(disjunction) denoted x∨y (in c++ x||y)
    // NOT(negation) denoted  ¬x (in c++ !x)
    //  → ⊕ ≡
    // lets make truth tables for each operation

    cout << endl;

    cout << "x" << "|" << "y" << "|" << "x∧y" << "|"
         "x∨y" << "|"  << "¬x" << "|" << "x→y" << "|" << "x⊕y" << "|" << "x≡y" << endl;

    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 2; ++j) {

            cout << i << "|" << j << "|" <<"  " << AND(i,j)
                 << "|"  <<"   "
                 << OR(i,j)  << "|" <<" " << NOT(i) << "|"
                 << "  " << IMPL(i,j) << "|"
                 << "  " << XOR(i,j)  << "|"
                 << "  " << EQ(i,j)   << "|"
                 << endl;

        }
    }
}

TEST(Flow_Control, BooleanArithmeticInterpretation) {
    //  x and y = x * y = min(x,y)
    EXPECT_TRUE(MIN(true, true));
    EXPECT_FALSE(MIN(true, false));
    EXPECT_FALSE(MIN(false, true));
    EXPECT_FALSE(MIN(false, false));


    //  x or y = x + y - (x * y) = max(x,y)
    EXPECT_TRUE(MAX(true, true));
    EXPECT_TRUE(MAX(true, false));
    EXPECT_TRUE(MAX(false, true));
    EXPECT_FALSE(MAX(false, false));


    //  !x = 1 - x
    EXPECT_TRUE(NEGATE(false));
    EXPECT_FALSE(NEGATE(true));
}

TEST(Flow_Control, ConstCondion) {
    // let's start from crazy staff
    bool success;

    int magic_number = 42; // cast to boolean: true <- [1..n]

    if (magic_number){
        success = true;
    } else {
        success = false;
    }

    EXPECT_TRUE(success);

    magic_number = 0; // cast to boolean: false <- 0

    if (magic_number){
        success = true;
    } else {
        success = false;
    }

    EXPECT_FALSE(success);

    magic_number = -10; // cast to boolean: true <- [-n; 0)

    if (magic_number){
        success = true;
    } else {
        success = false;
    }

    EXPECT_TRUE(success);
}

TEST(Flow_Control, BoleanExprCondion) {
    // it's very common and boring
    bool success;
    int result;

    success = 1 < 0; // FALSE

    if (success){
        result = 1;
    } else {
        result = -1;
    }

    EXPECT_EQ(result, -1);

    success = -1 < 0; // FALSE

    if (success){
        result = 1;
    } else {
        result = -1;
    }

    EXPECT_EQ(result, 1);
}

TEST(Flow_Control, Monotone_law) {
    // let's fun with boolean algebra:D
    bool x = true;
    bool y = true;
    bool z = true;
    // 1. Associativity of disjunction(OR): x ∨ (y ∨ z) = (x ∨ y) ∨ z
    EXPECT_TRUE((x || (y || z)) == ((x || y) || z));

    // 2. Associativity of conjunction(AND): x ∧ (y ∧ z) = (x ∧ y) ∨ z
    EXPECT_TRUE((x && (y && z)) == ((x && y) && z));

    // 3. Commutativity of disjunction(OR): x ∨ y = y ∨ x
    EXPECT_TRUE((x || y) == (y || x));

    // 4. Commutativity of conjunction(AND) x ∧ y = y ∧ x
    EXPECT_TRUE((x || y) == (y || x));

    // 5. Distributivity of conjunction(AND) over disjunction(OR) :
    //      x ∧ (y ∨ z) = (x ∧ y) ∨ (x ∧ z)
    EXPECT_TRUE((x && (y || z)) == ((x || y) && z));
    // 5.Identity for disjunction(OR): x ∨ 0 = x
    EXPECT_TRUE(x || 0 == x);
    // 6.Identity for conjunction(AND): x ∧ 1 = x
    EXPECT_TRUE(x && 1 == x);
    // 7.Annihilator for conjunction(AND) x ∧ 0 = 0
    EXPECT_TRUE((x && 0) == 0);

    //8.  Annihilator for OR
    EXPECT_TRUE(x || 1 == 1);
    //9.  Idempotence  of OR
    EXPECT_TRUE(x || x == x);
    //10. Idempotence  of AND
    EXPECT_TRUE(x && x == x);
    //11. Absorption 1:
    EXPECT_TRUE(x && (x || y) == x);
    //12. Absorption 2:
    EXPECT_TRUE(x || (x && y) == x);
    //13. Distributivity of OR over AND
    EXPECT_TRUE((x || (y && z)) == ((x && y) || z));

    //nonmonotone laws
    // complementation
    EXPECT_TRUE(x && !x == 0);
    EXPECT_TRUE(x || !x == 1);

    EXPECT_TRUE(!(!x) == x);

    //De Morgan 1
    EXPECT_TRUE((!x && !y) == !(x || y));

    //De Morgan 2
    EXPECT_TRUE((!x) || (!y) == !(x && y));

}
