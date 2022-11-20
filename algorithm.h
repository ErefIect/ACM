#ifndef ALGORITHM_H
#define ALGORITHM_H
#include <stdio.h>

#define len(type, arr)  (sizeof(arr) / sizeof(type))
#define swap(x,y)   do{typeof(x) t;t=x;x=y;y=t;}while(0);

// --> sort function    
#define _bubbleSort_(arr, length) ({\
  for (int i = 0; i < length; ++i)\
    for (int j = 0; j < length - i; ++j)\
      if (arr[i] > arr[j])  swap(arr[i], arr[j])\
})
// caculate the array length at once
#define bubbleSort(arr) ({\
  int length = len(int, a);\
  _bubbleSort_(a, length);\
})

// --> output the array recursively
#define _printList_(arr, length) ({\
  for (int i = 0; i < length - 1; ++i)\
    printf("%d, ", arr[i]);\
})

#define printList(arr) ({\
  int length = len(typeof(arr[0]), arr);\
  printf("%c", '[');\
  _printList_(arr, length);\
  printf("%d%c\n", arr[length - 1], ']');\
})

#endif
