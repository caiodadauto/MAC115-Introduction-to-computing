
### MAC115 - Introductory course to computing
----
These programs have been made to course MAC115 at the University of São Paulo in Brazil.  
This course use language C and has diveded in two blocks of code: simples exercises  
and four elaborated exercises called EP. The simple exircises are found in this [book][book].  
On the other hand, the EPs are describe in pdf files ([EP-1][ep1], [EP-2][ep2], [EP-3][ep3], [EP-4][ep4])(in portuguese).  
A little description of EPs are follow bellow:  
* **EP-1**  
 In the EP-1 has been implemented a simple converter of numbers in a base 2 <= k <= 10 to base 10.

* **EP-2**  
 The EP-2 is a extension of the EP-1, in this EP has been implemented a converter from a base  
 2 <= k <= 10 to a base 2 <= k <= 10.

* **EP-3**  
 The goal of EP-3 is estimate the number pi. This has been made integrating the function  
 f(x) = (1 - x^2)^1/2 x in [-1, 1] by three different ways. The first and second method to  
 integrete f(x) are simple based in the sum a number k of rectangle and trapeziums under the    
 f(x) in [-1, 1]. The third is a [Monte Carlo Method][montecarlo] that consist in sort a  
 conjunct of random points inside the semi square that hold f(x) in [-1, 1]. One the way, the  
 area of f(x) in [-1, 1] converge to proportion of semi square area, this proportion is equal  
 a the ratio between the points under f(x) and the total numbers of sort points.  

* **EP-4**  
 In the EP-4 has been implemented a text compactor [LZW][lzw].
 
[book]: http://www.ime.usp.br/~hitoshi/introducao/
[ep1]: https://github.com/caiodadauto/MAC115-Introduction-to-computing/blob/master/EP/ep1/ep1.pdf
[ep2]: https://github.com/caiodadauto/MAC115-Introduction-to-computing/blob/master/EP/ep2/ep2.pdf
[ep3]: https://github.com/caiodadauto/MAC115-Introduction-to-computing/blob/master/EP/ep3/ep3.pdf
[ep4]: https://github.com/caiodadauto/MAC115-Introduction-to-computing/blob/master/EP/ep4/ep4.pdf
[montecarlo]: https://en.wikipedia.org/wiki/Monte_Carlo_method
[lzw]: https://en.wikipedia.org/wiki/Lempel%E2%80%93Ziv%E2%80%93Welch
