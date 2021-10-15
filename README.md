# first-hack
Getting started with HHVM (Hip Hop virtual machine) using Hack language

### test hhvm
```shell
hhvm -m server -p 8080
```
-m represents the mode and here indicates that HHVM is running in HTTP server mode.

-p configures the TCP port that HHVM uses to listen to HTTP requests. The default port is 80, the standard HTTP port. However, that port requires root access, so for this example, we will use port 8080.
