#include<arm_neon.h>

void v_add (float* a, float* b, float scale, int len) {
    float* res;
    float32x4_t scale_vec = vmovq_n_f32(scale);
    int j;
    for(j = 0; j < len-3; j+=4)  {
        float32x4_t vec1 = vld1q_f32(a + j);
        float32x4_t vec2 = vld1q_f32(b + j);
        float32x4_t vec_res = vaddq_f32((vmulq_f32(vec1, scale_vec)), vec2);
        vst1q_f32(res+j, vec_res);
    }
    while (j < len) {
        res[j] = a[j]*scale + b[j];
        j++;
    }
}