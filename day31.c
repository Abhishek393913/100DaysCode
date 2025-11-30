#include <stdio.h>

struct Complex {
    float real;
    float imag;
};

struct Complex read() {
    struct Complex c;
    scanf("%f %f", &c.real, &c.imag);
    return c;
}

void write(struct Complex c) {
    printf("%.2f + %.2fi\n", c.real, c.imag);
}

struct Complex add(struct Complex a, struct Complex b) {
    struct Complex r;
    r.real = a.real + b.real;
    r.imag = a.imag + b.imag;
    return r;
}

struct Complex sub(struct Complex a, struct Complex b) {
    struct Complex r;
    r.real = a.real - b.real;
    r.imag = a.imag - b.imag;
    return r;
}

int main() {
    struct Complex c1, c2, sum, diff;

    printf("Enter first complex (real imag): ");
    c1 = read();
    printf("Enter second complex (real imag): ");
    c2 = read();

    printf("First: ");
    write(c1);
    printf("Second: ");
    write(c2);

    sum = add(c1, c2);
    diff = sub(c1, c2);

    printf("Sum: ");
    write(sum);
    printf("Difference: ");
    write(diff);

    return 0;
}