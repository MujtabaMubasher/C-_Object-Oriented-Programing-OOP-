#include <iostream>
using namespace std;

 /*
  Note:  Sizeof Object of calsss is equal to the sum of sizeof all data amembers in class
 */
class Hero {

  // data members
  private: //Only Accessible in class 
  string name; 
  public: // Accessible inside or Outside of class 
  int health; 
  char level;

};

int main(){
  Hero h1;
  h1.health = 45;
  h1.level = 'A';

  cout<< sizeof(h1);
  
  // string str ;
  // cout << sizeof(str);  

  // cout << h1.health<<"\n";
  // cout << h1.level<<"\n";

    return 0;
}

 /*
 
  // Padding:

   Padding and greedy alignment are related concepts in memory layout optimization, but they have distinct roles and characteristics.

  Padding:
   Padding involves adding extra bytes to a data structure to ensure that its members are aligned according to the requirements of the CPU architecture. The main goal is to avoid misalignment that could lead to inefficient memory access or even crashes. Padding ensures each member of a data structure starts at an address that is a multiple of its size.

  Benefits of Padding
    1. Improved Access Speed: Properly aligned data can be accessed faster by the CPU.
    2. Prevention of Undefined Behavior: Some CPUs may crash or produce incorrect results if data is misaligned.
    3. Simplified Memory Access: Aligning data simplifies the memory access patterns for the CPU.

  Example
   Consider the following class:
   class Example {
    char a;
    int b;
    char c;
    };

    Without padding, b might be misaligned. With padding, the compiler might layout the class like this:
    1. char a (1 byte) + 3 bytes of padding
    2. int b (4 bytes)
    3. char c (1 byte) + 3 bytes of padding


  // Gready Alignment
   
   Greedy alignment is a strategy used to optimize the layout of data structures by reordering their members to minimize padding. The idea is to arrange the data members in descending order of their size, ensuring that larger members, which have stricter alignment requirements, are placed first. This approach reduces the amount of padding needed between members.

   Benefits of Greedy Alignment
   1. Reduced Memory Usage: By minimizing padding, greedy alignment reduces the overall size of data structures, leading to more efficient memory usage.
   2. Improved Cache Performance: Smaller data structures can fit better in the CPU cache, leading to improved cache utilization and performance.
   3. Optimized Memory Access Patterns: With fewer gaps in the data structure, memory access patterns can be more predictable and efficient.
  
  Example of Greedy Alignment
   Reorder the members of the Example class to apply greedy alignment:

   class Example {
    int b;
    char a;
    char c;
   };

   With greedy alignment:

   1. int b (4 bytes)
   2. char a (1 byte)
   3. char c (1 byte)
   4. Potentially 2 bytes of padding at the end to make the total size a multiple of the largest member's size (4 bytes).

   Comparison:

   1. Padding: Focuses on adding extra bytes to ensure proper alignment of data members according to CPU requirements. It's a reactive approach that deals with alignment issues after defining the data structure.

   2. Greedy Alignment: Focuses on reordering data members to minimize the need for padding. It's a proactive approach that aims to optimize the memory layout during the design of the data structure.

   Summary:

   1. Padding: Adds extra bytes to align data members.
   2. Greedy Alignment: Reorders data members to reduce the need for padding.

    
 */