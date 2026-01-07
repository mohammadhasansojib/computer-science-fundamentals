# Event Loop

Event loop is a component in JS runtime where it manages the task queue tasks and microtask queue tasks execution. It prioritize the the microtask queue and when the microtask queue is empty then it started to take the task queue tasks to call stack.

example =>

```js
Promise.resolve("Hello World")
    .then((res) => {
        setTimeout(() => {console.log("Time out")}, 2000);
        console.log(res);
    })

console.log("Hi");
```

output =>

```
Hi
Hello World
Time Out
```

Here `promise` and `setTimeout` goes to the microtask queue and task queue respectively from call stack. But the `console.log(”Hi”);` gets execute into the call stack. And then event loop takes the promise function from microtask queue and put it into call stack and execute. After that it checks if the microtask queue is empty or not, if it’s empty then it takes tasks from task queue and puts it into call stack and executes.