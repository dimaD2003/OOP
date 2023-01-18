#include "gtest/gtest.h"

#include "Functions/funct.h"

TEST(ReadLineTest, ReadLine)
{
	
std::string str="he lo";
EXPECT_EQ(DeleteSpace(str), "helo");
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
 	EXPECT_EQ(out.str(), "my team");
 }
TEST(hashtag, hashtagTo){
  std::string ss="you love c++";
  


        EXPECT_EQ(hashtagMaker(ss), "#Youlovec++");}
