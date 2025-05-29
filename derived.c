#include <stdio.h>

// Base class (struct)
struct Base {
    int baseValue;
    void (*show)(struct Base*);
};

// Function to show base value
void showBase(struct Base* b) {
    printf("Base value: %d\n", b->baseValue);
}

// Derived class (struct)
struct Derived {
    struct Base base; // Inherit Base
    int derivedValue;
    void (*show)(struct Derived*);
};

// Function to show derived value
void showDerived(struct Derived* d) {
    // Call base show
    d->base.show(&d->base);
    printf("Derived value: %d\n", d->derivedValue);
}

int main() {
    struct Derived d;
    d.base.baseValue = 10;
    d.derivedValue = 20;
    d.base.show = showBase;
    d.show = showDerived;

    d.show(&d);

    return 0;
}