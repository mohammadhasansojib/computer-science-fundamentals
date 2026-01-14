# `this` keyword

`this` keyword refers an object in that context.

1. Globally
    - for browser, it refers `Window` object
    - for Node and other JS runtime environment, it refers `Global` object
2. Inside a function
    - It still refers `Global`(for JS runtime environment) object and `Window` object in browser.
3. Inside an object method
    - Inside an object method it refers that object