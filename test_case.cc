#include "stepcounter.h"

#include <gtest/gtest.h>

#include <iostream>

using namespace std;

TEST(CounterTest, CounterHello) {

    StepCounter my_counter;

}

TEST(CounterTest, CounterStartsAtZero) {

    //GIVEN a counter object

    StepCounter my_count;
     //WHEN we get the value of the counter

    int result = my_count.getCount();

    //THEN we expect the result to be equal to zero  

    EXPECT_EQ(result, 0);

}

TEST(CounterTest, IncrementOnce) {
    // GIVEN a counter object
    StepCounter my_count;

    // WHEN we increment
    my_count.IncrementCount(); 
    int result = my_count.getCount();
   
    // THEN the count should be 1
    EXPECT_EQ(result, 1);
}