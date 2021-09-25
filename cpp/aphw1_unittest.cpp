#include <limits.h>
#include "aphw1.h"//my function
#include <iostream>//cout
#include <iomanip>//stod string to double
#include <vector>//vector
#include <memory>//shared_ptr
#include <cmath>//pow
#include "gtest/gtest.h"//google test
namespace
{
    /*
    TEST(APHW1TEST,ReadData)
    {
        auto table = read_csv("data.csv");
        EXPECT_EQ(10, table.size());
        EXPECT_EQ(2.7810836, table[0]->at(0));
        EXPECT_EQ(0, table[0]->at(2));
        EXPECT_EQ(2.759262235, table[5]->at(1));
        
    }

    TEST(APHW1TEST,Predict)
    {
        auto table = read_csv("data.csv");
        std::vector<double> weights{-0.1,0.20653640140000007, -0.23418117710000003};
        EXPECT_EQ(0,predict(*table[0],weights));
        EXPECT_EQ(1,predict(*table[5],weights)); 
    }

    TEST(APHW1TEST,TrainTest)
    {
        auto table = read_csv("data.csv");
        std::vector<double> weights=train_weight(table,0.1,5);
        EXPECT_EQ(-0.1,weights[0]);
        ASSERT_NEAR(0.206536,weights[1],0.0001); 
        ASSERT_NEAR(-0.23418,weights[2],0.0001);
    }
    TEST(APHW1TEST,Perceptron)
    {
        auto table = read_csv("bigdata.csv");
        std::vector<std::shared_ptr<std::vector<double>>> train;
        std::vector<std::shared_ptr<std::vector<double>>> test;
        for(size_t i = 0 ; i < table.size()*2/3 ; i++){
            train.push_back(table.at(i));
        }
        for(size_t i = table.size()*2/3 ; i < table.size() ; i++){
            test.push_back(table.at(i));
        }
        
        Perceptron(train,test,0.01,1000);
    }
    */
}
