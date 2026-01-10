# Networking

## what happens when we open a URL(Uniform Resource Locator)
- Browser read full url and get protocol, domain name, path, query, parameter etc.
    * example =>
    * ![url](https://www.terminusapp.com/blog/wp-content/uploads/2022/07/anatomy-of-url.png)
- DNS(Domain Name System) Lookup
    * Browser serarch for the ip address of that domain name.
    * Browser Cache => OS Cache(if not in Browser Cache) => DNS Resolver(if not in OS Cache)
- Then Browser established a `TCP`(Transmission Control Protocol) connection with server.
- After establishing connection with server, browser sends request to server and server respond.
- Then Browser render the responded content from server and show.

## HTTP vs HTTPS
### HTTP
- HTTP(Hyper Text Transfer Protocol) is used to transmitting data over web.
- It operates over port 80.
- Data transmitted over HTTP is not encrypted.
- A bit faster than HTTPS but less secure.

### HTTPS
- HTTPS(Hyper Text Transfer Protocol Secure) is a secure version of HTTP that uses encryption to protect data during transmission.
- It operates over port 443.
- HTTPS encrypts data using SSL(Secure Sockets Layer) or TLS(Transport Layer Security) protocol.


## REST API
REST(Representational State Transfer) is not a technology, it's a set of rule for designing APIs using HTTP in a stateless and resouce-based way.

Here client and server are separate. Since this is stateless, each request contains all the information needed. Server does not remember is the client logged in or not, client sends Authorization token.

Everything is resource like
- users
- orders
- posts

### HTTP methods
- GET - Read data
- POST - Create new data
- PUT - Update existing data
- PATCH - Partial update
- DELETE - Delete data

### HTTP Status Codes
#### 2xx - Success
- 200 (OK) - Request Successfull
- 201 (CREATED) - New Resouce Created(Post).
#### 4xx - Client Error
- 400 (Bad Request) - Client sent invalid data.
- 401 (Unauthorized) - Authentication missing or invalid
- 403 (Forbidden) - Authenticated but not allowed.
- 404 (Not Found) - Resource doesn't exist.
#### 5xx - Server Error
- 500 (Internal Server Error) - Bug on server.




