#ifndef LIBMATH_H
#define LIBMATH_H

#if defined(__cplusplus)
    #include <cstdint>
#else
    #include <stdint.h>
#endif

#define PI 3.14159265358979323846

#if defined(__cplusplus)
extern "C" {
#endif

#ifndef MATH_LOG_ERROR
    #define MATH_LOG_ERROR(msg) ((void) 0) // change to own logging func if you want
#endif

#ifndef MATH_ASSERT
    #define MATH_ASSERT(cond) ((cond) ? 1 : (MATH_LOG_ERROR("Assertion failed: " #cond), 0))
#endif

static inline float m_float_rad(const float d) {
    return (float) (d * 0.0174532951994329576923690768489);
}

static inline float m_float_deg(const float r) {
    return (float) (r * 57.2957795130823208767981548141051);
}

static inline float m_float_sin(float r) { // temp
    (void) r; return 0.0f;
}

static inline float m_float_cos(float x, int t) { // taylor with running product, t = terms, change x to r
    MATH_ASSERT(t > 0 && t < 16); // what max terms??

    if (t <= 0) return 1.0f;
    else if (t > 16) t = 16;

    int d = (int) ((double) x / PI);
    x = (float) ((double) x - ((double) d * PI));

    int8_t s = 1;
    if (d % 2 != 0) s = -1;

    double r = 1.0;
    double e = 1.0;
    double n = (double) x * (double) x;

    for (int i = 1; i <= t; i++) {
        double c = 2.0f * (double) i;
        double g = c * (c - 1.0);
        e *= n / g;
        if (i % 2 == 0) r += e;
        else r -= e;
    }

    return (float) ((double) s * r);
}

typedef struct vec2 {
    float x, y;
#if defined(__cplusplus)
    inline constexpr vec2 operator+(const vec2 &o) const noexcept {
        return {x + o.x, y + o.y};
    }
#endif
} vec2_t;

#if defined(__cplusplus)
}
#endif

#endif // !LIBMATH_H