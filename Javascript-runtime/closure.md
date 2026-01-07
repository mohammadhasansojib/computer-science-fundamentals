# Closure

Closure means an inner function can access it’s lexical scoped variables even if it’s outer function is executed. Because lexical scope works remember the variables when it created not when it executed.
In another word a closure is a function that has access to it’s parent scope even after the parent function closed.

example =>

```js
for(var i = 0; i < 3; i++){
	const log = () => console.log(i);
	
	setTimeout(log, 1000);
}
```

output =>

```
3
3
3
```

here var is function scoped. so it does not create any new reference it shared same value to all scope.

if using with let keyword then it is ok and the output is 0,1,2.