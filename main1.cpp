#include <iostream>
void desrtoy(int ** mtx, size_t created)
{
 for(size_t i = 0; i < created; i++)
 {
   delete[] mtx[i]
 }
 delete[] mtx;
}

int ** create(size_t rows, size_t cols)
{
int ** mtx = new int *[rows];
suze_t created = 0;
try
{
 for(; created < rows; ++created)
 {
  mtx[i] = new int[cols];
 }
}
catch (const std:: bad_alloc &e)
{
 destroy(mtx, created);
 throw;
}
return mtx;
}

void construct(int ** mtx, size_t rows, size_t cols, int init)
{
 for (size_t i = 0; i < rows; ++i)
 {
  for (size_t j = 0; j < cols; ++j)
   {
     mtx[i][j] = init;
   }
 }
}

int main()
{
size_t r = 5, c = 5;
int ** matrix = nullptr;
try{
 matrix = create(5,5);
}
catch(const std::bad_alloc &e)
{
 std::cerr << e.what() << "\n";
 return 1;
}

}
