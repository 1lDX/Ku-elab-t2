#include <stdio.h>

struct complex {
    float real;
    float img;
};

struct complex add_complex(struct complex a, struct complex b) {
    struct complex result;
    result.real = a.real + b.real;
    result.img = a.img + b.img;
    return result;
}

struct complex multiply_complex(struct complex a, struct complex b) {
    struct complex result;
    result.real = (a.real * b.real) - (a.img * b.img);
    result.img = (a.real * b.img) + (a.img * b.real);
    return result;
}

void print_complex(char *msg, struct complex c) {
    printf("%s", msg);
    if (c.real == 0.0 && c.img == 0.0) {
        printf("0.0\n");
    } else if (c.img == 0.0) {
        printf("%.1f\n", c.real);
    } else if (c.real == 0.0) {
        printf("%.1fi\n", c.img);
    } else if (c.img < 0) {
        printf("%.1f - %.1fi\n", c.real, -c.img);
    } else {
        printf("%.1f + %.1fi\n", c.real, c.img);
    }
}

int main() {
    struct complex C, D, E, F;
    printf("Enter C: ");
    scanf("%f %f", &C.real, &C.img);
    
    printf("Enter D: ");
    scanf("%f %f", &D.real, &D.img);
    
    E = add_complex(C, D);
    F = multiply_complex(C, D);
    
    print_complex("C + D = ", E);
    print_complex("C x D = ", F);
    
    return 0;
}
