# Pass by value vs reference

In JS primitive values are passed by value and non-primitive values are passed by reference.

example =>

```tsx
let a = 10;
let b = a;

a = 30;
console.log(b); // output: 10, because b gets a copy of a not reference

let x = {value: 10}
let y = x;

y.value = 30;
console.log(x.value); // output: 30, because x and y both are referencing same object.
```