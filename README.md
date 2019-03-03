# anagram_finder
Challenge entry.
Objective is to find anagrams as fast as possible.


## Building

Made in C++. Meant for x86_64-linux-gnu. Built and tested in Ubuntu 18.10. Cannot confirm other distros/architectures.
```
g++ -o anagram_finder  anagram.cpp -O3
```

## Usage

A prebuilt binary locates in /bin.

Needs a dictionary file to work. System needs to use the same encoding as the dictionary file. For example if using ["lemmad.txt"](http://www.eki.ee/tarkvara/wordlist/lemmad.zip) dictionary - the system needs to be in ISO-8859-13. Dictionary file can be with both DOS and UNIX line endings. Outputs the time it took to find all anagrams(microseconds) and outputs results in coma separated format. If output returns the same words as input, it gets removed. 

```
./anagram_finder "dictionary file.txt" "word"

```

### Example
```
$ time ./anagram_finder lemmad.txt mõõk
```
Returns:
```
6355,kõõm

real	0m0.010s
user	0m0.007s
sys	0m0.003s

```

Or
```
$ time ./anagram_finder lemmad.txt "damoklese kõõm"
```
Returns:
```
5560,damoklese mõõk

real	0m0.007s
user	0m0.007s
sys	0m0.000s

```


