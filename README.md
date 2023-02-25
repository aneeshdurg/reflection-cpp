# Reflection in CPP

This is a small demo of how X lists can implement reflection in CPP. The demo
implements a pretty printer for structs.

To build, run `make`, this will generate an executable `reflection`. Running it
should print out:

```
f: Foo {
  x: 0
  y: hi
  z: 5.400000
}

b: Bar {
  foo: Foo {
    x: 6
    y: bar foo
    z: 11.700000
  }
  asdf: 10
}
```

See [this blog post](https://aneeshdurg.me/posts/2023-02-23-reflection-cpp/) for details.
