# Temporal Dead Zone(TDZ)

`Temporal Dead Zone` is a zone where we can’t access the variable(declared with `let` and `const` keywords) even after declaration. Because we can’t access a variable which has no value. For the variable declared with `var` keyword, JS allocate memory as well as assign `undefined` as value in the `Memory Creation Phase` . But for the variable declared with `let` and `const` keywords, JS just allocate memory for the variable but does not assign any value(even not `undefined`).

for example =>

```js
{
	// Temporal Dead Zone starts from here for myVar =>>>>
	
	console.log(myVar) // ReferenceError: can't access 'myVar' before initialization
	
	
	let myVar = "Variable Value"; // Temporal Dead Zone ends here for myVar <<<<=
	
	console.log(myVar) // output: Variable Value
}
```