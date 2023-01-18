#include "gtest/gtest.h"

#include "Operator/operator.h"
#include "Stack/stack.h"
TEST(MyString, StringInOpz)
{
    std::string s1 = "30";
    std::string s2 = "2+3";
    std::string s3 = "2+3*3";  
    std::string s4 = "(7+9)*6";  
    std::string s5 = "(2+10)*(2+8)"; 
    std::string s6 = "(2-10)*(2-8)"; 
    std::string s7 = "(2+8)-3*5";  
  EXPECT_EQ(InOPZ(s1), "30");
    EXPECT_EQ(InOPZ(s2), "23+");
    EXPECT_EQ(InOPZ(s3), "233*+");
    EXPECT_EQ(InOPZ(s4), "79+6*");
    EXPECT_EQ(InOPZ(s5), "210+28+*");
    EXPECT_EQ(InOPZ(s6), "210-28-*");
    EXPECT_EQ(InOPZ(s7), "28+35*-");
}
