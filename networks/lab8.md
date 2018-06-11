# Computer Networks

Corentin MERCIER - 1820186336

## Lab Exercise 8 | HTTP

### Step 1:

1. The HTTP version 1.1 on the http://mercier.link web server.
2. It is recognized as informations on the requested web page or server by the first empty line break.
3. The client knows it by the content-type field, here set to text/html.

### Step 3:

1. The format header line is as follows:
    - field_name: field_data/value
    - for instance: content-length: 14080
2. The content-type header is used to indicate the kind, the content-length header is used to indicate the length of the content in a response.

### Step 4:

3. The status-code header under the "HTTP/1.1 200 OK" is used for this. For instance it can be set to 200 (ok) or 304 (not modified).
4. It comes from the serve it indicates the date set on the wanted server (GMT time for www.mit.edu)
