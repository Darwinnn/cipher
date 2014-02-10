cipher
======

A simple XOR cipher implementation in C. This one uses only human-readable characters in the cipher, so it's easy to share the encrypted message!.

Example:
========
To encrypt a message, just feed it to stdin:
$ echo "Hello, Github" | ./cipher 12345
Message: Hello, Github
Key: 12345
Encrypted: yW_XZ=2t]AYGQ

It's also possible to decrypt the cipher the same way:
$ echo "yW_XZ=2t]AYGQ" | ./cipher 12345
Message: yW_XZ=2t]AYGQ
Key: 12345
Encrypted: Hello, Github

