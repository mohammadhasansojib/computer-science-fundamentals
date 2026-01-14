# Hoisting

Hoisting is a concept of pulling up variable(declared with var keyword) and function(normal function with declaration not expression) to the top during execution so that it can be access before initialization in code.

for example =>

```js
console.log(fName) // output: undefined

var fName = "abc";
var lName = "xyz";

printFullName()

function printFullName(){
	console.log(fName + " " + lName) // output: "abc xyz"
}
```

but it is a wrong perception. The total things mainly happen in the execution context.

Execution context has two phases

1. Memory Creation Phase
2. Execution Phase

In the `Memory Creation Phase`, JS allocates memory for all variable and assign `undefined` in those variables declared with `var` keyword but does not assign any value to those variables declared with `let` and `const` keywords. That’s why we can’t access variables before initialization declared with `let` and `const` keywords.

for example =>

```js
console.log(fName) // Reference Error: You can't access 'fName' before initialization

let fName = "abc"
```

also declare the function declaration in the `Memory Creation Phase` and that’s why we can call the function(declared with function declaration not expression) before declaration.

for example =>

```js
sayHello()

function sayHello(){
	console.log('Hello!') // output: Hello
}
```

but in the other hand, if we declare an anonymous function and assign in a variable, we can’t call the function before initialization.

for example =>

```js
sayHello() // TypeError: sayHello is not a function

var sayHello = function () {
	console.log("Hello")
}
```