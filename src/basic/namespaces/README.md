#Namespaces

```
namespace A {
  void a(){...}
  namespace B{
    void b(){...}
  }
}
namespace C {
  void a(){...}
}
A::B.b() // call b() from nested namespace B
C::a(); // call a() from namespace c

using namespace A;
a(); // call a() from namespace A

```
