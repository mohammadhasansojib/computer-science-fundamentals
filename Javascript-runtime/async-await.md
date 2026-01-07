# Async/Await

Async function is a function where we can write asynchronous code in a synchronous manner and the function returns a promise.

```js
async function fetchData(){
	let res = await fetch("https://abc.com/api/users");
	let data = await res.json();
	return data;	
}
```

here `await` keyword wait to go to the next line until the current line executed.