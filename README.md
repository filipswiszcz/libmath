# libmath

A single-header C math library for graphics and vector calculus.

### Quickstart

```c
#include "math.h"

int main(void) {
    
    // vector ops
    vec3_t pos = vec3(1.0f, 1.0f, 2.0f);
    vec3_t vel = vec3(0.0f, -9.8f, 0.0f);
    vec3_t next_pos = vec3_add(pos, vel);

    // matrix xforms
    mat4_t proj = mat4_ortho(-1.0f, 1.0f, 1.0f, -1.0f, 0.1f, 100.0f);
    mat4_t view = mat4_trans(mat4(1.0f), vec3(0.0f, 0.0f, -5.0f));

    // trig
    float rads = float_rad(180.0f);

    return 0;
}
```

### Reference

All operations are implemented as inline functions and exposed via macros. 

* **Types:** `vec2_t`, `vec3_t`, `vec4_t`, `mat2_t`, `mat3_t`, `mat4_t`, `quat_t`
* **Scalars:** `PI`, `float_rad(d)`, `float_deg(r)`
* **vec2:** `vec2(x, y)`, `vec2_add(a, b)`, `vec2_sub(a, b)`, `vec2_mul(a, b)`, `vec2_dot(a, b)`, `vec2_cross(a, b)`
* **vec3:** `vec3(x, y, z)`, `vec3_add(a, b)`, `vec3_sub(a, b)`, `vec3_mul(a, b)`, `vec3_dot(a, b)`, `vec3_cross(a, b)`
* **vec4:** `vec4(x, y, z, w)`, `vec4_add(a, b)`, `vec4_sub(a, b)`, `vec4_mul(a, b)`, `vec4_dot(a, b)`
* **mat2:** `mat2(v)`, `mat2_add(a, b)`
* **mat3:** `mat3(v)`, `mat3_add(a, b)`
* **mat4:** `mat4(v)`, `mat4_add(a, b)`, `mat4_ortho(l, r, t, b, n, f)`, `mat4_trans(m, v)`, `mat4_rot(m, d, v)`, `mat4_scale(m, v)`
* **quat:** `quat(x, y, z, w)`