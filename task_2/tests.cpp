#include "gtest/gtest.h"

#include "Functions/funct.h"

TEST(ReadLineTest, ReadLine)
{
	
std::string str="fw dd";
EXPECT_EQ(DeleteSpace(str), "fwdd");
}
TEST(Read2, ReadTo)
{
   std::string str="my team";
    
    
    EXPECT_EQ(DeleteSpace(str), "myteam");
}
TEST(Read2, Readto2){
  std::string ss="my team";
  std::ostringstream out;

output(ss,out);
 	EXPECT_EQ(out.str(), "#Myteam");
 }
