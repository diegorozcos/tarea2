//
// Created by Josean Camarena on 07/07/22.
// Implemented by: $STUDENT$
//

#include "pointers.h"

int bubble_sort(int *collection, int count)
{
  for (int i = 0; i < count; i++)
  {
      for (int j = 0; j < (count - 1); j++)
      {
          if (*(collection + j) < *(collection + i))
          {
              int temp = *(collection + i);
              *(collection + i) = *(collection + j);
              *(collection + j) = temp;
          }
      }
  for (int k = 0; k < count; k++)
  {
      printf("%d", *(collection + k));
  }
  }
  return 0;
}

void insertion_sort(int *collection, int count)
{
  for (int i = 1; i < count; i++)
  {
      int key = collection[i];
      int j = i - 1;

      while (j >= 0 && collection[j] > key)
      {
          collection[j + 1] = collection[j];
          j = j - 1;
      }
      collection[j + 1] = key;
  }
  for (int i = 0; i < count; i++)
  {
      printf("%d", *(collection));
  }
}

void reverse(int *collection, int count)
{
    for (int i = 0; i < count; i++)
    {
        for (int j = 0; j < (count - 1); j++)
        {
            if (*(collection + j) > *(collection + i))
            {
                int temp = *(collection + i);
                *(collection + i) = *(collection + j);
                *(collection + j) = temp;
            }
        }
        for (int k = 0; k < count; k++)
        {
            printf("%d", *(collection + k));
        }
    }
}

int calulate_frequency(int *collection, int count, int target)
{
  return 0;
}
