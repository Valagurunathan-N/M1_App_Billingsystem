
#include "addrecords.h"
#include <unity.h>
#include <unity_internals.h>
#include "deleterecords.h"


/* Required by the unity test framework */
void setUp(void) {}
/* Required by the unity test framework */
void tearDown(void) {}

void addrecords(void)
{
    TEST_ASSERT_EQUAL("Success","Add records");
}
void deleterecords(void)
{
    TEST_ASSERT_EQUAL("Success","Delete records");
} 
int main(void)
{
    UNITY_BEGIN();
     RUN_TEST(addrecords);
    RUN_TEST(deleterecords);
 
    return UNITY_END();
}