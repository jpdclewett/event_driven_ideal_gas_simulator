#include "vectors/vectors.h"

#include "unity.h"

#include <float.h>
#include <stdbool.h>
#include <math.h>

void setUp(void) {
    // stub
}

void tearDown(void) { 
    // stub    
}

void magnitude_of_vectors_is_correct(void) {
    Vector3lf v = (Vector3lf){ .x = 1.0, .y = 1.0, .z = 1.0 };
    
    TEST_ASSERT_TRUE(Vector3lf_mag(&v) - sqrt(3) <= DBL_EPSILON);    
}

int main(void) {
    
    UNITY_BEGIN();

    RUN_TEST(magnitude_of_vectors_is_correct);
    
    return UNITY_END();
}
