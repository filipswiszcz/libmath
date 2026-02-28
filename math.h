#ifndef __LIB_MATH__
#define __LIB_MATH__

#define PI 3.14159265358979323846

// VEC2

#define vec2(x, y) ((vec2_t) {x, y})
#define vec2_add(a, b) (m_vec2_add(a, b))
#define vec2_sub(a, b) (m_vec2_sub(a, b))
#define vec2_mul(a, b) (m_vec2_mul(a, b))

typedef struct {
    float x, y;
} vec2_t;

static inline vec2_t m_vec2_add(vec2_t a, vec2_t b) {
    return (vec2_t) {a.x + b.x, a.y + b.y};
}

static inline vec2_t m_vec2_sub(vec2_t a, vec2_t b) {
    return (vec2_t) {a.x - b.x, a.y - b.y};
}

static inline vec2_t m_vec2_mul(vec2_t v, float s) {
    return (vec2_t) {(v).x * (s), (v).y * (s)};
}

// VEC3

#define vec3(x, y, z) ((vec3_t) {x, y, z})
#define vec3_add(a, b) (m_vec3_add(a, b))
#define vec3_sub(a, b) (m_vec3_sub(a, b))
#define vec3_mul(a, b) (m_vec3_mul(a, b))

typedef struct {
    float x, y, z;
} vec3_t;

static inline vec3_t m_vec3_add(vec3_t a, vec3_t b) {
    return (vec3_t) {a.x + b.x, a.y + b.y, a.z + b.z};
}

static inline vec3_t m_vec3_sub(vec3_t a, vec3_t b) {
    return (vec3_t) {a.x - b.x, a.y - b.y, a.z - b.z};
}

static inline vec3_t m_vec3_mul(vec3_t v, float s) {
    return (vec3_t) {(v).x * (s), (v).y * (s), (v).z * (s)};
}

// VEC4

#define vec4(x, y, z, w) ((vec4_t) {x, y, z, w})
#define vec4_add(a, b) (m_vec4_add(a, b))
#define vec4_sub(a, b) (m_vec4_sub(a, b))
#define vec4_mul(a, b) (m_vec4_mul(a, b))

typedef struct {
    float x, y, z, w;
} vec4_t;

static inline vec4_t m_vec4_add(vec4_t a, vec4_t b) {
    return (vec4_t) {a.x + b.x, a.y + b.y, a.z + b.z, a.w + b.w};
}

static inline vec4_t m_vec4_sub(vec4_t a, vec4_t b) {
    return (vec4_t) {a.x - b.x, a.y - b.y, a.z - b.z, a.w - b.w};
}

static inline vec4_t m_vec4_mul(vec4_t v, float s) {
    return (vec4_t) {(v).x * (s), (v).y * (s), (v).z * (s), (v).w * (s)};
}

#endif // !__LIB_MATH__